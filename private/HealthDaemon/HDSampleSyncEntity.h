//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDataSyncEntity.h>

@interface HDSampleSyncEntity : HDDataSyncEntity
{
}

+ (_Bool)supportsSpeculativeNanoSyncChanges;
+ (id)_companionNanoSyncPredicateConjunctionForSession:(id)arg1;
+ (id)_appleWatchSamplesPredicateForSession:(id)arg1;
+ (id)_defaultCompanionNanoSyncSampleAgePredicateForSession:(id)arg1;
+ (id)nanoSyncPredicateForSession:(id)arg1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

@end

