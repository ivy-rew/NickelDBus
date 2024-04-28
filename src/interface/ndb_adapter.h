/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c NDBAdapter -a ndb_adapter com.github.shermp.nickeldbus.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef NDB_ADAPTER_H_1714266534
#define NDB_ADAPTER_H_1714266534

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.github.shermp.nickeldbus
 */
class NDBAdapter: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.github.shermp.nickeldbus")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.github.shermp.nickeldbus\">\n"
"    <signal name=\"dlgConfirmResult\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"result\"/>\n"
"    </signal>\n"
"    <signal name=\"dlgConfirmTextInput\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"input\"/>\n"
"    </signal>\n"
"    <signal name=\"pfmDoneProcessing\"/>\n"
"    <signal name=\"pfmAboutToConnect\"/>\n"
"    <signal name=\"fssFinished\"/>\n"
"    <signal name=\"fssGotNumFilesToProcess\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"num\"/>\n"
"    </signal>\n"
"    <signal name=\"fssParseProgress\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"progress\"/>\n"
"    </signal>\n"
"    <signal name=\"wmTryingToConnect\"/>\n"
"    <signal name=\"wmNetworkConnected\"/>\n"
"    <signal name=\"wmNetworkDisconnected\"/>\n"
"    <signal name=\"wmNetworkForgotten\"/>\n"
"    <signal name=\"wmNetworkFailedToConnect\"/>\n"
"    <signal name=\"wmScanningStarted\"/>\n"
"    <signal name=\"wmScanningFinished\"/>\n"
"    <signal name=\"wmScanningAborted\"/>\n"
"    <signal name=\"wmWifiEnabled\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"enabled\"/>\n"
"    </signal>\n"
"    <signal name=\"wmLinkQualityForConnectedNetwork\">\n"
"      <arg direction=\"out\" type=\"d\" name=\"quality\"/>\n"
"    </signal>\n"
"    <signal name=\"wmMacAddressAvailable\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"mac\"/>\n"
"    </signal>\n"
"    <signal name=\"ndbViewChanged\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"newView\"/>\n"
"    </signal>\n"
"    <signal name=\"rvPageChanged\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"pageNum\"/>\n"
"    </signal>\n"
"    <method name=\"ndbVersion\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"ndbNickelClassDetails\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"staticMmetaobjectSymbol\"/>\n"
"    </method>\n"
"    <method name=\"ndbNickelWidgets\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"ndbCurrentView\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"ndbFirmwareVersion\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"ndbSignalConnected\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"signalName\"/>\n"
"    </method>\n"
"    <method name=\"mwcToast\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"toastDuration\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"msgMain\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"msgSub\"/>\n"
"    </method>\n"
"    <method name=\"mwcToast\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"toastDuration\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"msgMain\"/>\n"
"    </method>\n"
"    <method name=\"mwcHome\"/>\n"
"    <method name=\"dlgConfirmNoBtn\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"title\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"body\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmAccept\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"title\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"body\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"acceptText\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmReject\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"title\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"body\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"rejectText\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmAcceptReject\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"title\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"body\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"acceptText\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"rejectText\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmCreate\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"createLineEdit\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmCreate\"/>\n"
"    <method name=\"dlgConfirmSetTitle\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"title\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmSetBody\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"body\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmSetAccept\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"acceptText\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmSetReject\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"rejectText\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmSetModal\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"modal\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmShowClose\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"show\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmSetProgress\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"min\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"max\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"val\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"format\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmSetProgress\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"min\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"max\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"val\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmSetLEPassword\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"password\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmSetLEPlaceholder\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"placeholder\"/>\n"
"    </method>\n"
"    <method name=\"dlgConfirmShow\"/>\n"
"    <method name=\"dlgConfirmClose\"/>\n"
"    <method name=\"pfmRescanBooks\"/>\n"
"    <method name=\"pfmRescanBooksFull\"/>\n"
"    <method name=\"n3fssSyncOnboard\"/>\n"
"    <method name=\"n3fssSyncSD\"/>\n"
"    <method name=\"n3fssSyncBoth\"/>\n"
"    <method name=\"wfmConnectWireless\"/>\n"
"    <method name=\"wfmConnectWirelessSilently\"/>\n"
"    <method name=\"wfmSetAirplaneMode\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"action\"/>\n"
"    </method>\n"
"    <method name=\"ndbWifiKeepalive\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"keepalive\"/>\n"
"    </method>\n"
"    <method name=\"bwmOpenBrowser\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"modal\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"css\"/>\n"
"    </method>\n"
"    <method name=\"bwmOpenBrowser\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"modal\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\"/>\n"
"    </method>\n"
"    <method name=\"bwmOpenBrowser\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"modal\"/>\n"
"    </method>\n"
"    <method name=\"bwmOpenBrowser\"/>\n"
"    <method name=\"nsInvert\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"action\"/>\n"
"    </method>\n"
"    <method name=\"nsDarkMode\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"action\"/>\n"
"    </method>\n"
"    <method name=\"nsLockscreen\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"action\"/>\n"
"    </method>\n"
"    <method name=\"nsScreenshots\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"action\"/>\n"
"    </method>\n"
"    <method name=\"nsForceWifi\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"action\"/>\n"
"    </method>\n"
"    <method name=\"nsAutoUSBGadget\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"action\"/>\n"
"    </method>\n"
"    <method name=\"pwrShutdown\"/>\n"
"    <method name=\"pwrReboot\"/>\n"
"    <method name=\"pwrSleep\"/>\n"
"    <method name=\"imgSizeForType\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"type\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    NDBAdapter(QObject *parent);
    virtual ~NDBAdapter();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void bwmOpenBrowser();
    void bwmOpenBrowser(bool modal);
    void bwmOpenBrowser(bool modal, const QString &url);
    void bwmOpenBrowser(bool modal, const QString &url, const QString &css);
    void dlgConfirmAccept(const QString &title, const QString &body, const QString &acceptText);
    void dlgConfirmAcceptReject(const QString &title, const QString &body, const QString &acceptText, const QString &rejectText);
    void dlgConfirmClose();
    void dlgConfirmCreate();
    void dlgConfirmCreate(bool createLineEdit);
    void dlgConfirmNoBtn(const QString &title, const QString &body);
    void dlgConfirmReject(const QString &title, const QString &body, const QString &rejectText);
    void dlgConfirmSetAccept(const QString &acceptText);
    void dlgConfirmSetBody(const QString &body);
    void dlgConfirmSetLEPassword(bool password);
    void dlgConfirmSetLEPlaceholder(const QString &placeholder);
    void dlgConfirmSetModal(bool modal);
    void dlgConfirmSetProgress(int min, int max, int val);
    void dlgConfirmSetProgress(int min, int max, int val, const QString &format);
    void dlgConfirmSetReject(const QString &rejectText);
    void dlgConfirmSetTitle(const QString &title);
    void dlgConfirmShow();
    void dlgConfirmShowClose(bool show);
    QString imgSizeForType(const QString &type);
    void mwcHome();
    void mwcToast(int toastDuration, const QString &msgMain);
    void mwcToast(int toastDuration, const QString &msgMain, const QString &msgSub);
    void n3fssSyncBoth();
    void n3fssSyncOnboard();
    void n3fssSyncSD();
    QString ndbCurrentView();
    QString ndbFirmwareVersion();
    QString ndbNickelClassDetails(const QString &staticMmetaobjectSymbol);
    QString ndbNickelWidgets();
    bool ndbSignalConnected(const QString &signalName);
    QString ndbVersion();
    void ndbWifiKeepalive(bool keepalive);
    void nsAutoUSBGadget(const QString &action);
    void nsDarkMode(const QString &action);
    void nsForceWifi(const QString &action);
    void nsInvert(const QString &action);
    void nsLockscreen(const QString &action);
    void nsScreenshots(const QString &action);
    void pfmRescanBooks();
    void pfmRescanBooksFull();
    void pwrReboot();
    void pwrShutdown();
    void pwrSleep();
    void wfmConnectWireless();
    void wfmConnectWirelessSilently();
    void wfmSetAirplaneMode(const QString &action);
Q_SIGNALS: // SIGNALS
    void dlgConfirmResult(int result);
    void dlgConfirmTextInput(const QString &input);
    void fssFinished();
    void fssGotNumFilesToProcess(int num);
    void fssParseProgress(int progress);
    void ndbViewChanged(const QString &newView);
    void pfmAboutToConnect();
    void pfmDoneProcessing();
    void rvPageChanged(int pageNum);
    void wmLinkQualityForConnectedNetwork(double quality);
    void wmMacAddressAvailable(const QString &mac);
    void wmNetworkConnected();
    void wmNetworkDisconnected();
    void wmNetworkFailedToConnect();
    void wmNetworkForgotten();
    void wmScanningAborted();
    void wmScanningFinished();
    void wmScanningStarted();
    void wmTryingToConnect();
    void wmWifiEnabled(bool enabled);
};

#endif