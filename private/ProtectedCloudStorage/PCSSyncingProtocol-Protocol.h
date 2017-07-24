//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol PCSSyncingProtocol
- (void)fetchStats:(void (^)(UserRegistryStats *))arg1;
- (void)escrowRecordIDs:(NSDictionary *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)deleteThisDevice:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)triggerUserRegistryCheck:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)fetchAllDeviceKeys:(NSDictionary *)arg1 withReply:(void (^)(NSString *, NSData *, NSData *, NSArray *, NSError *))arg2;
- (void)manateeStatus:(NSString *)arg1 complete:(void (^)(unsigned int))arg2;
- (void)createIdentity:(NSString *)arg1 roll:(_Bool)arg2 complete:(void (^)(NSData *, NSError *))arg3;
- (void)triggerSyncingWithEscrowProxy:(NSString *)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)triggerWatchSyncing:(void (^)(void))arg1;
- (void)triggerDaily:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestKeys:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)syncKeys:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getAllClients:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getPCSKeyHash:(void (^)(NSData *, NSError *))arg1;
@end

