//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, RadioStation;
@protocol OS_dispatch_queue;

@interface RadioGetTracksResponse : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_tracksByStationKey;
    NSDate *_expirationDate;
    RadioStation *_station;
    NSDictionary *_responseDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain, nonatomic) RadioStation *station; // @synthesize station=_station;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void).cxx_destruct;
- (id)_tracksForStationKey:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *unusedKBSyncStrings;
- (id)tracksForStationStringID:(id)arg1;
- (id)tracksForStationHash:(id)arg1;
- (id)tracksForStationID:(long long)arg1;
- (id)tracksForStation:(id)arg1;
@property(readonly, nonatomic) long long tracklistActionType;
@property(readonly, nonatomic) NSDate *skipDate;
@property(readonly, nonatomic) _Bool shouldIncrementSkipCount;
@property(readonly, nonatomic) unsigned long long globalVersion;
@property(readonly, copy, nonatomic) NSDictionary *dialogDictionary;
- (id)initWithResponseDictionary:(id)arg1;
- (id)init;

@end

