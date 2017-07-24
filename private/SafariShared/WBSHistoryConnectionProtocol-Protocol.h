//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate;

@protocol WBSHistoryConnectionProtocol
- (void)debugGetDatabaseURLWithCompletionHandler:(void (^)(NSURL *, NSError *))arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)getVisitedLinksWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)beginHistoryAccessSession:(void (^)(id <WBSHistoryAccessSessionProtocol>, NSError *))arg1;
- (void)beginURLCompletionSession:(void (^)(id <WBSURLCompletionSessionProtocol>, NSError *))arg1;
- (void)getServiceInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)ensureConnected:(void (^)(NSError *))arg1;
@end

