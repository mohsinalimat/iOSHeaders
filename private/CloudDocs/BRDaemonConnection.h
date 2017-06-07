//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection
{
    NSUUID *_uuid;
    _Bool _isUsingTokenService;
}

+ (void)invalidateCachedURLProperties;
+ (id)cloudDocsCachesURL;
+ (id)cloudDocsAppSupportURL;
+ (id)syncedRootURLs;
+ (id)syncedDocumentsURL;
+ (id)syncedDesktopURL;
+ (id)mobileDocumentsURL;
+ (id)homeDirectoryURL;
+ (void)t_setMobileDocumentsURL:(id)arg1;
+ (void)t_setDefaultConnection:(id)arg1;
+ (id)t_connectionForUUID:(id)arg1;
+ (id)secondaryConnection;
+ (id)secondaryConnectionIfExists;
+ (id)defaultConnection;
+ (id)defaultConnectionIfExists;
+ (void)initialize;
- (void).cxx_destruct;
- (struct BRXPCSyncProxy *)newSyncTokenProxy;
- (struct BRXPCSyncProxy *)newSyncProxy;
- (void)_setupAndResume;
- (id)initUsingUserLocalDaemonTokenService;
- (id)initUsingUserLocalDaemon;

@end

