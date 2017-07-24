//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CKContextRequest, CKContextResult, NSString;

@protocol context_xpcProtocol
- (void)statusWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)logTransactionSuccessfulForResponseId:(NSString *)arg1 requestType:(long long)arg2 logType:(unsigned long long)arg3;
- (void)logResultsShownForResponseId:(NSString *)arg1 shown:(unsigned long long)arg2 couldHaveShown:(unsigned long long)arg3 serverOverride:(_Bool)arg4 requestType:(long long)arg5 logType:(unsigned long long)arg6;
- (void)logEngagementForResponseId:(NSString *)arg1 result:(CKContextResult *)arg2 rank:(unsigned long long)arg3 input:(NSString *)arg4 requestType:(long long)arg5 logType:(unsigned long long)arg6;
- (void)shutdownServiceWithReply:(void (^)(void))arg1;
- (void)pingServiceWithReply:(void (^)(void))arg1;
- (void)portraitBlacklistWithReply:(void (^)(NSSet *))arg1;
- (void)warmUpForRequestType:(long long)arg1 withReply:(void (^)(NSError *))arg2;
- (void)findResponseByID:(NSString *)arg1 reply:(void (^)(CKContextResponse *))arg2;
- (void)findResultsForRequest:(CKContextRequest *)arg1 withReply:(void (^)(CKContextResponse *))arg2;
@end

