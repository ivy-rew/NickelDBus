/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c NDBProxy -p ndb_proxy com.github.shermp.nickeldbus.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef NDB_PROXY_H_1714266534
#define NDB_PROXY_H_1714266534

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.github.shermp.nickeldbus
 */
class NDBProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.github.shermp.nickeldbus"; }

public:
    NDBProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~NDBProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> bwmOpenBrowser()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("bwmOpenBrowser"), argumentList);
    }

    inline QDBusPendingReply<> bwmOpenBrowser(bool modal)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(modal);
        return asyncCallWithArgumentList(QLatin1String("bwmOpenBrowser"), argumentList);
    }

    inline QDBusPendingReply<> bwmOpenBrowser(bool modal, const QString &url)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(modal) << QVariant::fromValue(url);
        return asyncCallWithArgumentList(QLatin1String("bwmOpenBrowser"), argumentList);
    }

    inline QDBusPendingReply<> bwmOpenBrowser(bool modal, const QString &url, const QString &css)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(modal) << QVariant::fromValue(url) << QVariant::fromValue(css);
        return asyncCallWithArgumentList(QLatin1String("bwmOpenBrowser"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmAccept(const QString &title, const QString &body, const QString &acceptText)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(title) << QVariant::fromValue(body) << QVariant::fromValue(acceptText);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmAccept"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmAcceptReject(const QString &title, const QString &body, const QString &acceptText, const QString &rejectText)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(title) << QVariant::fromValue(body) << QVariant::fromValue(acceptText) << QVariant::fromValue(rejectText);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmAcceptReject"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmClose()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmClose"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmCreate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmCreate"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmCreate(bool createLineEdit)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(createLineEdit);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmCreate"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmNoBtn(const QString &title, const QString &body)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(title) << QVariant::fromValue(body);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmNoBtn"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmReject(const QString &title, const QString &body, const QString &rejectText)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(title) << QVariant::fromValue(body) << QVariant::fromValue(rejectText);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmReject"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmSetAccept(const QString &acceptText)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(acceptText);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmSetAccept"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmSetBody(const QString &body)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(body);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmSetBody"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmSetLEPassword(bool password)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(password);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmSetLEPassword"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmSetLEPlaceholder(const QString &placeholder)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(placeholder);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmSetLEPlaceholder"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmSetModal(bool modal)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(modal);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmSetModal"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmSetProgress(int min, int max, int val)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(min) << QVariant::fromValue(max) << QVariant::fromValue(val);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmSetProgress"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmSetProgress(int min, int max, int val, const QString &format)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(min) << QVariant::fromValue(max) << QVariant::fromValue(val) << QVariant::fromValue(format);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmSetProgress"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmSetReject(const QString &rejectText)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(rejectText);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmSetReject"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmSetTitle(const QString &title)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(title);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmSetTitle"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmShow()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmShow"), argumentList);
    }

    inline QDBusPendingReply<> dlgConfirmShowClose(bool show)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(show);
        return asyncCallWithArgumentList(QLatin1String("dlgConfirmShowClose"), argumentList);
    }

    inline QDBusPendingReply<QString> imgSizeForType(const QString &type)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(type);
        return asyncCallWithArgumentList(QLatin1String("imgSizeForType"), argumentList);
    }

    inline QDBusPendingReply<> mwcHome()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("mwcHome"), argumentList);
    }

    inline QDBusPendingReply<> mwcToast(int toastDuration, const QString &msgMain)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(toastDuration) << QVariant::fromValue(msgMain);
        return asyncCallWithArgumentList(QLatin1String("mwcToast"), argumentList);
    }

    inline QDBusPendingReply<> mwcToast(int toastDuration, const QString &msgMain, const QString &msgSub)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(toastDuration) << QVariant::fromValue(msgMain) << QVariant::fromValue(msgSub);
        return asyncCallWithArgumentList(QLatin1String("mwcToast"), argumentList);
    }

    inline QDBusPendingReply<> n3fssSyncBoth()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("n3fssSyncBoth"), argumentList);
    }

    inline QDBusPendingReply<> n3fssSyncOnboard()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("n3fssSyncOnboard"), argumentList);
    }

    inline QDBusPendingReply<> n3fssSyncSD()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("n3fssSyncSD"), argumentList);
    }

    inline QDBusPendingReply<QString> ndbCurrentView()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ndbCurrentView"), argumentList);
    }

    inline QDBusPendingReply<QString> ndbFirmwareVersion()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ndbFirmwareVersion"), argumentList);
    }

    inline QDBusPendingReply<QString> ndbNickelClassDetails(const QString &staticMmetaobjectSymbol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(staticMmetaobjectSymbol);
        return asyncCallWithArgumentList(QLatin1String("ndbNickelClassDetails"), argumentList);
    }

    inline QDBusPendingReply<QString> ndbNickelWidgets()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ndbNickelWidgets"), argumentList);
    }

    inline QDBusPendingReply<bool> ndbSignalConnected(const QString &signalName)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(signalName);
        return asyncCallWithArgumentList(QLatin1String("ndbSignalConnected"), argumentList);
    }

    inline QDBusPendingReply<QString> ndbVersion()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ndbVersion"), argumentList);
    }

    inline QDBusPendingReply<> ndbWifiKeepalive(bool keepalive)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(keepalive);
        return asyncCallWithArgumentList(QLatin1String("ndbWifiKeepalive"), argumentList);
    }

    inline QDBusPendingReply<> nsAutoUSBGadget(const QString &action)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action);
        return asyncCallWithArgumentList(QLatin1String("nsAutoUSBGadget"), argumentList);
    }

    inline QDBusPendingReply<> nsDarkMode(const QString &action)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action);
        return asyncCallWithArgumentList(QLatin1String("nsDarkMode"), argumentList);
    }

    inline QDBusPendingReply<> nsForceWifi(const QString &action)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action);
        return asyncCallWithArgumentList(QLatin1String("nsForceWifi"), argumentList);
    }

    inline QDBusPendingReply<> nsInvert(const QString &action)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action);
        return asyncCallWithArgumentList(QLatin1String("nsInvert"), argumentList);
    }

    inline QDBusPendingReply<> nsLockscreen(const QString &action)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action);
        return asyncCallWithArgumentList(QLatin1String("nsLockscreen"), argumentList);
    }

    inline QDBusPendingReply<> nsScreenshots(const QString &action)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action);
        return asyncCallWithArgumentList(QLatin1String("nsScreenshots"), argumentList);
    }

    inline QDBusPendingReply<> pfmRescanBooks()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("pfmRescanBooks"), argumentList);
    }

    inline QDBusPendingReply<> pfmRescanBooksFull()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("pfmRescanBooksFull"), argumentList);
    }

    inline QDBusPendingReply<> pwrReboot()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("pwrReboot"), argumentList);
    }

    inline QDBusPendingReply<> pwrShutdown()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("pwrShutdown"), argumentList);
    }

    inline QDBusPendingReply<> pwrSleep()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("pwrSleep"), argumentList);
    }

    inline QDBusPendingReply<> wfmConnectWireless()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("wfmConnectWireless"), argumentList);
    }

    inline QDBusPendingReply<> wfmConnectWirelessSilently()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("wfmConnectWirelessSilently"), argumentList);
    }

    inline QDBusPendingReply<> wfmSetAirplaneMode(const QString &action)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action);
        return asyncCallWithArgumentList(QLatin1String("wfmSetAirplaneMode"), argumentList);
    }

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

namespace com {
  namespace github {
    namespace shermp {
      typedef ::NDBProxy nickeldbus;
    }
  }
}
#endif
