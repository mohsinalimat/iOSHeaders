//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKRecordZoneDelegate-Protocol.h>

@class FCAsyncSerialQueue, FCCKPrivateDatabase, NSArray, NSDictionary, NSString;

@interface FCCKRecordZoneManager : NSObject <FCCKRecordZoneDelegate>
{
    FCCKPrivateDatabase *_database;
    NSArray *_recordZoneIDs;
    NSDictionary *_fcRecordZonesByName;
    NSDictionary *_ckRecordZonesByID;
    FCAsyncSerialQueue *_serialQueue;
}

@property(retain, nonatomic) FCAsyncSerialQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSDictionary *ckRecordZonesByID; // @synthesize ckRecordZonesByID=_ckRecordZonesByID;
@property(retain, nonatomic) NSDictionary *fcRecordZonesByName; // @synthesize fcRecordZonesByName=_fcRecordZonesByName;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)ensureRecordZoneExistsWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareRecordZonesForUseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)recordZoneWithName:(id)arg1;
- (id)initWithDatabase:(id)arg1 recordZoneNames:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

