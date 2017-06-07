//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, NSString;

@interface HMDPredicateUtilities : HMFObject <HMFLogging>
{
    HMDHome *_home;
    NSString *_logString;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (_Bool)containsPresenceEvents:(id)arg1;
- (id)rewritePredicate:(id)arg1 forDaemon:(_Bool)arg2;
- (id)rewritePredicateForDaemon:(id)arg1;
- (id)rewritePredicateForClient:(id)arg1;
- (id)dateTodayMatchingComponents:(id)arg1;
- (id)addDeltaToNow:(id)arg1;
- (id)rewriteNowAdjustedForHomeTimeZone:(id)arg1;
- (id)updatePredicate:(id)arg1 removedUser:(id)arg2 conditionModified:(_Bool *)arg3;
- (id)updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id *)arg2 conditionModified:(_Bool *)arg3 removedAccessory:(id)arg4;
- (id)comparePresence:(id)arg1 operatorType:(id)arg2;
- (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;
- (id)rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id *)arg2 characteristicsToRead:(id)arg3;
- (id)sunset;
- (id)sunrise;
- (id)logIdentifier;
- (id)initWithHome:(id)arg1 logIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
