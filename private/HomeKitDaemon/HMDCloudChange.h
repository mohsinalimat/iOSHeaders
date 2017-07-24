//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKRecord, CKRecordID, HMDCloudRecord, NSArray, NSMutableSet, NSUUID;

@interface HMDCloudChange : HMFObject
{
    NSUUID *_objectID;
    HMDCloudRecord *_cloudRecord;
    unsigned long long _changeType;
    unsigned long long _replayType;
    NSMutableSet *_rowIDsSet;
}

+ (id)shortDescription;
@property(readonly, nonatomic) NSMutableSet *rowIDsSet; // @synthesize rowIDsSet=_rowIDsSet;
@property(nonatomic) unsigned long long replayType; // @synthesize replayType=_replayType;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) HMDCloudRecord *cloudRecord; // @synthesize cloudRecord=_cloudRecord;
@property(readonly, nonatomic) NSUUID *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (void)replayChange:(id)arg1 stagedChange:(id)arg2;
- (void)updateChangeWithRecord:(id)arg1;
@property(readonly, nonatomic) CKRecordID *recordID;
@property(readonly, nonatomic) CKRecord *record;
- (void)updateCloudRecord:(id)arg1;
- (void)forceChangeToInvalid;
- (void)forceChangeToDelete;
@property(readonly, nonatomic) NSArray *rowIDs;
@property(readonly, nonatomic, getter=isUpdateAfterReplay) _Bool updateAfterReplay;
@property(readonly, nonatomic, getter=isDropAfterRelay) _Bool dropAfterRelay;
@property(readonly, nonatomic, getter=isInvalid) _Bool invalidChange;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleteChange;
@property(readonly, nonatomic, getter=isUpdated) _Bool updateChange;
@property(readonly, nonatomic, getter=isAdded) _Bool addChange;
- (id)change;
- (id)description;
- (id)shortDescription;
- (id)_initWithChangeType:(unsigned long long)arg1 cloudRecord:(id)arg2;
- (id)init;

@end

