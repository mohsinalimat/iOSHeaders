//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSString, WKGeolocationProviderIOS, _WKProcessPoolConfiguration;
@protocol _WKAutomationDelegate, _WKDownloadDelegate, _WKGeolocationCoreLocationProvider;

@interface WKProcessPool : NSObject <WKObject, NSCoding>
{
    struct ObjectStorage<WebKit::WebProcessPool> _processPool;
    struct WeakObjCPtr<id<_WKAutomationDelegate>> _automationDelegate;
    struct WeakObjCPtr<id<_WKDownloadDelegate>> _downloadDelegate;
    struct RetainPtr<_WKAutomationSession> _automationSession;
    struct RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> _coreLocationProvider;
}

+ (void)_forceGameControllerFramework;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1 bundleIdentifierIfNotInContainer:(id)arg2;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1;
+ (id)_sharedProcessPool;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) _WKProcessPoolConfiguration *_configuration;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithConfiguration:(id)arg1;
@property(nonatomic, setter=_setCoreLocationProvider:) id <_WKGeolocationCoreLocationProvider> _coreLocationProvider;
@property(nonatomic, getter=_isCookieStoragePartitioningEnabled, setter=_setCookieStoragePartitioningEnabled:) _Bool _cookieStoragePartitioningEnabled;
- (unsigned long long)_webProcessCount;
- (void)_syncNetworkProcessCookies;
- (int)_networkProcessIdentifier;
- (void)_terminateNetworkProcess;
- (void)_terminateDatabaseProcess;
- (void)_setAutomationSession:(id)arg1;
- (void)_automationCapabilitiesDidChange;
- (void)_warmInitialProcess;
@property(nonatomic, setter=_setAutomationDelegate:) __weak id <_WKAutomationDelegate> _automationDelegate;
@property(nonatomic, setter=_setDownloadDelegate:) __weak id <_WKDownloadDelegate> _downloadDelegate;
- (void)_setObjectsForBundleParametersWithDictionary:(id)arg1;
- (void)_setObject:(id)arg1 forBundleParameter:(id)arg2;
- (id)_objectForBundleParameter:(id)arg1;
- (void)_setCookieAcceptPolicy:(unsigned long long)arg1;
- (void)_setCanHandleHTTPSServerTrustEvaluation:(_Bool)arg1;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

