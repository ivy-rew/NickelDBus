include NickelHook/NickelHook.mk

_ADAPTDIR := $(shell mkdir -p -m777 src/adapter)

override DBUS_IFACE_NAME := local.shermp.nickeldbus
override DBUS_IFACE_XML := src/adapter/$(DBUS_IFACE_NAME).xml
override DBUS_IFACE_CFG := $(subst .,-,$(DBUS_IFACE_NAME)).conf

override LIBRARY  := libndb.so
# NDB sources
override SOURCES  += src/nickeldbus.cc src/nickel_dbus.cc src/adapter/nickel_dbus_adapter.cpp
# NM sources
override SOURCES  += NickelMenu/src/action.c NickelMenu/src/action_c.c NickelMenu/src/action_cc.cc NickelMenu/src/kfmon.c
override CFLAGS   += -Wall -Wextra -Werror
override CXXFLAGS += -Wall -Wextra -Werror -Wno-missing-field-initializers

override CFLAGS   += -DNDB_DBUS_IFACE_NAME='"$(DBUS_IFACE_NAME)"'
override CXXFLAGS += -DNDB_DBUS_IFACE_NAME='"$(DBUS_IFACE_NAME)"'

override PKGCONF  += Qt5DBus Qt5Widgets

override MOCS 	  += src/nickel_dbus.h src/adapter/nickel_dbus_adapter.h
override ADAPTERS := src/adapter/nickel_dbus_adapter.h src/adapter/nickel_dbus_adapter.cpp

override KOBOROOT += res/$(DBUS_IFACE_CFG):/etc/dbus-1/system.d/$(DBUS_IFACE_CFG)

override GENERATED += $(ADAPTERS) $(DBUS_IFACE_XML)
override GITIGNORE += ndb-cli/ndb-cli

.PHONY: adapter
adapter: $(ADAPTERS)

.PHONY: dbuscfg
dbuscfg:
	script/make-dbus-conf.sh res/$(DBUS_IFACE_CFG) $(DBUS_IFACE_NAME)

$(DBUS_IFACE_XML): src/nickel_dbus.h
	qdbuscpp2xml -S -M -o $@ $<

$(ADAPTERS) &: $(DBUS_IFACE_XML)
	cd src/adapter && qdbusxml2cpp -c NickelDBusAdapter -a nickel_dbus_adapter $(<F)

include NickelHook/NickelHook.mk
