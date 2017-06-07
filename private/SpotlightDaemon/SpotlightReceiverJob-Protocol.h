//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightDaemon/NSObject-Protocol.h>

@class INInteraction, NSArray, NSData, NSDate, NSString;

@protocol SpotlightReceiverJob <NSObject>
- (void)deleteAllInteractionsWithBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)deleteInteractionsWithGroupIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3 completionHandler:(void (^)(void))arg4;
- (void)deleteInteractionsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3 completionHandler:(void (^)(void))arg4;
- (void)addInteraction:(INInteraction *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3 completionHandler:(void (^)(void))arg4;
- (void)addUserActions:(NSData *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3 completionHandler:(void (^)(void))arg4;
- (void)purgeFromBundle:(NSString *)arg1 identifiers:(NSData *)arg2 completionHandler:(void (^)(void))arg3;
- (void)deleteFromBundle:(NSString *)arg1 sinceDate:(NSDate *)arg2 domains:(NSData *)arg3 deletes:(NSData *)arg4 completionHandler:(void (^)(void))arg5;
- (void)indexFromBundle:(NSString *)arg1 protectionClass:(NSString *)arg2 items:(NSData *)arg3 itemsContent:(NSData *)arg4 completionHandler:(void (^)(void))arg5;
- (void)fetchSetupInfoWithCompletionHandler:(void (^)(SpotlightReceiverSetupInfo *))arg1;
@end

