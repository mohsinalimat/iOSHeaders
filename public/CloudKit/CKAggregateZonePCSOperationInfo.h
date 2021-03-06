//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZone, NSArray;

@interface CKAggregateZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_sourceZoneIDs;
    CKRecordZone *_targetZone;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CKRecordZone *targetZone; // @synthesize targetZone=_targetZone;
@property(retain, nonatomic) NSArray *sourceZoneIDs; // @synthesize sourceZoneIDs=_sourceZoneIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

