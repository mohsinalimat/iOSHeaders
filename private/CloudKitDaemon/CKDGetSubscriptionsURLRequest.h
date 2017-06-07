//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDGetSubscriptionsURLRequest : CKDURLRequest
{
    NSMutableArray *_subscriptions;
    CDUnknownBlockType _subscriptionFetchedBlock;
    NSArray *_subscriptionIDs;
    NSMutableDictionary *_subscriptionIDByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID; // @synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID;
@property(retain, nonatomic) NSArray *subscriptionIDs; // @synthesize subscriptionIDs=_subscriptionIDs;
@property(copy, nonatomic) CDUnknownBlockType subscriptionFetchedBlock; // @synthesize subscriptionFetchedBlock=_subscriptionFetchedBlock;
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithSubscriptionIDs:(id)arg1;

@end

