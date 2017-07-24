//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCJobIdentifying-Protocol.h>

@class BRCZoneRowID, NSString;

__attribute__((visibility("hidden")))
@interface BRCIntAndZoneJobIdentifier : NSObject <BRCJobIdentifying>
{
    long long _intID;
    BRCZoneRowID *_zoneRowID;
}

@property(readonly, nonatomic) BRCZoneRowID *zoneRowID; // @synthesize zoneRowID=_zoneRowID;
@property(readonly, nonatomic) long long intID; // @synthesize intID=_intID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToIntAndZoneJobIdentifier:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)columnsValues;
- (id)columns;
- (id)matchingJobsWhereSQLClause;
@property(readonly, copy) NSString *description;
- (id)jobsDescription;
- (id)initWithIntID:(long long)arg1 zoneRowID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

