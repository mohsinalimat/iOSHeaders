//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSyncSession.h>

@class NSDictionary, NSSet;

@interface HDCloudSyncSession : HDSyncSession
{
    NSSet *_excludedSyncStores;
    NSDictionary *_anchorClockForExcludedStores;
}

@property(readonly, nonatomic) NSDictionary *anchorClockForExcludedStores; // @synthesize anchorClockForExcludedStores=_anchorClockForExcludedStores;
- (void).cxx_destruct;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)predicateForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (void)setExcludedSyncStores:(id)arg1;
- (id)excludedSyncStores;

@end

