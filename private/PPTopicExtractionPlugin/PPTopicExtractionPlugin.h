//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PPTopicExtractionPlugin/FIAPPlugin-Protocol.h>

@class NSString, PPMTopicDonation, PPMTopicDonationError, PPMTopicItemDonation, PPMTopicUniqueItems;

@interface PPTopicExtractionPlugin : NSObject <FIAPPlugin>
{
    PPMTopicDonation *topicDonationTracker;
    PPMTopicItemDonation *topicItemDonationTracker;
    PPMTopicUniqueItems *topicUniqueItemsTracker;
    PPMTopicDonationError *errorTracker;
    unsigned long long blacklistHash;
    _Bool started;
    _Bool donated;
    NSString *_identifier;
}

+ (id)quantizeAndFilterEntities:(id)arg1 withLimit:(int)arg2;
+ (id)quantizeTopics:(id)arg1;
+ (_Bool)yesWithProbability:(double)arg1;
+ (id)sharedInstance;
+ (void)_registerDataCollection;
+ (void)_registerDailyMetricsLogging;
+ (void)_registerContextBlacklistCheck;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)processSearchableItem:(id)arg1;
- (void)extractAndDonateTopicsForText:(id)arg1 isReader:(_Bool)arg2 bundleId:(id)arg3 groupId:(id)arg4 documentId:(id)arg5 weight:(double)arg6;
- (_Bool)logDailyMetricsWithError:(id *)arg1;
- (_Bool)logPerplexityWithError:(id *)arg1;
- (_Bool)logUniqueTopicsWithError:(id *)arg1;
- (void)checkBlacklist;
- (unsigned long long)hashForBlacklist:(id)arg1;
- (void)logDonationErrorForReason:(struct PPMTopicDonationErrorReason_)arg1;
- (void)logDonationForTopics:(id)arg1 isReader:(_Bool)arg2 bundleId:(id)arg3;
- (id)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

