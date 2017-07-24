//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class LSRegistrationInfo, NSData, NSDictionary, NSString, NSURL;

@protocol _LSDModifyProtocol
- (void)uninstallApplication:(NSString *)arg1 withOptions:(NSDictionary *)arg2 uninstallType:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)installApplication:(NSString *)arg1 atURL:(NSURL *)arg2 withOptions:(NSDictionary *)arg3 installType:(unsigned long long)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)synchronizeWithMobileInstallation;
- (void)updateRecordForApp:(NSString *)arg1 withSINF:(NSDictionary *)arg2 iTunesMetadata:(NSDictionary *)arg3 placeholderMetadata:(NSDictionary *)arg4 sendNotification:(_Bool)arg5 completionHandler:(void (^)(_Bool, NSError *))arg6;
- (void)rebuildApplicationDatabasesForSystem:(_Bool)arg1 internal:(_Bool)arg2 user:(_Bool)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)resetServerStoreWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)removeHandlerForURLScheme:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)setHandler:(NSString *)arg1 version:(unsigned long long)arg2 forURLScheme:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)removeHandlerForContentType:(NSString *)arg1 roles:(unsigned int)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)setHandlerOptions:(unsigned int)arg1 forContentType:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)setHandler:(NSString *)arg1 version:(unsigned long long)arg2 roles:(unsigned int)arg3 forContentType:(NSString *)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;
- (void)unregisterExtensionPoint:(NSString *)arg1 withVersion:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)registerExtensionPoint:(NSString *)arg1 withInfo:(NSDictionary *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)updateContainerUnit:(unsigned int)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
- (void)registerContainerURL:(NSURL *)arg1 completionHandler:(void (^)(unsigned int, NSError *))arg2;
- (void)unregisterBundleUnit:(unsigned int)arg1 options:(unsigned int)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)registerItemInfo:(LSRegistrationInfo *)arg1 alias:(NSData *)arg2 diskImageAlias:(NSData *)arg3 bundleURL:(NSURL *)arg4 installationPlist:(NSDictionary *)arg5 completionHandler:(void (^)(_Bool, unsigned int, NSArray *, _Bool, NSError *))arg6;
- (void)setDatabaseIsSeeded:(_Bool)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@end

