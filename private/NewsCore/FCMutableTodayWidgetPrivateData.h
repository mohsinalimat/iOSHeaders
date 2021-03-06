//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCTodayWidgetPrivateData.h>

#import <NewsCore/FCMutableTodayWidgetPrivateData-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet, NSString;
@protocol FCDerivedPersonalizationData><NSCoding;

@interface FCMutableTodayWidgetPrivateData : FCTodayWidgetPrivateData <FCMutableTodayWidgetPrivateData>
{
}

- (void)_deleteObjectsForOldKeys;
- (void)setFeldsparID:(id)arg1;
- (void)setRecentlySeenHistoryItems:(id)arg1;
- (void)setRecentlyReadHistoryItems:(id)arg1;
- (void)setRankedSubscribedTagIDs:(id)arg1;
- (void)setPurchasedTagIDs:(id)arg1;
- (void)setMutedTagIDs:(id)arg1;
- (void)setDerivedPersonalizationData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSMutableDictionary *dictionary; // @dynamic dictionary;
@property(readonly, copy, nonatomic) NSString *feldsparID;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property(readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property(readonly, copy, nonatomic) NSArray *rankedSubscribedTagIDs;
@property(readonly, copy, nonatomic) NSArray *recentlyReadHistoryItems;
@property(readonly, copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property(readonly) Class superclass;

@end

