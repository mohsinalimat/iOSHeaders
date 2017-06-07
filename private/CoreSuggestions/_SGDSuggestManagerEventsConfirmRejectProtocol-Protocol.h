//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSString, SGRealtimeEvent, SGRecordId;

@protocol _SGDSuggestManagerEventsConfirmRejectProtocol
- (void)waitForEventWithIdentifier:(NSString *)arg1 toAppearInEventStoreWithLastModificationDate:(NSDate *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)rejectEventByRecordId:(SGRecordId *)arg1 completion:(void (^)(NSError *))arg2;
- (void)confirmEventByRecordId:(SGRecordId *)arg1 completion:(void (^)(NSError *))arg2;
- (void)rejectEvent:(SGRealtimeEvent *)arg1 completion:(void (^)(NSError *))arg2;
- (void)confirmEvent:(SGRealtimeEvent *)arg1 completion:(void (^)(NSError *))arg2;
@end

