//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSArray, NSNumber, NSString, RadioPlayEventCollection, SSURLConnectionRequest;

@interface RadioGetHistoryRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    _Bool _fetchForAccount;
    _Bool _includesAds;
    _Bool _aggregateSessions;
    _Bool _shouldProcessCategories;
    NSNumber *_accountUniqueIdentifier;
    unsigned long long _maxNumberOfTracks;
    long long _stationID;
    NSString *_stationHash;
    RadioPlayEventCollection *_playEventCollection;
    NSArray *_playActivityEvents;
}

@property(nonatomic) _Bool shouldProcessCategories; // @synthesize shouldProcessCategories=_shouldProcessCategories;
@property(copy, nonatomic) NSArray *playActivityEvents; // @synthesize playActivityEvents=_playActivityEvents;
@property(copy, nonatomic) RadioPlayEventCollection *playEventCollection; // @synthesize playEventCollection=_playEventCollection;
@property(nonatomic) _Bool aggregateSessions; // @synthesize aggregateSessions=_aggregateSessions;
@property(copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(nonatomic) _Bool includesAds; // @synthesize includesAds=_includesAds;
@property(nonatomic) _Bool fetchForAccount; // @synthesize fetchForAccount=_fetchForAccount;
@property(nonatomic) unsigned long long maxNumberOfTracks; // @synthesize maxNumberOfTracks=_maxNumberOfTracks;
@property(readonly, copy, nonatomic) NSNumber *accountUniqueIdentifier; // @synthesize accountUniqueIdentifier=_accountUniqueIdentifier;
- (void).cxx_destruct;
- (id)_newHistoryItemWithDictionary:(id)arg1;
- (id)_newHistoryCategoryWithDictionary:(id)arg1;
- (void)startWithHistoryCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)init;

@end

