//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface PARBag : NSObject <NSSecureCoding>
{
    NSString *_userAgent;
    NSString *_clientName;
    NSDictionary *_rawBag;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *rawBag; // @synthesize rawBag=_rawBag;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)urlForIdentifier:(id)arg1;
- (id)bag_URLForKey:(id)arg1;
- (id)bag_dictionaryForKey:(id)arg1;
- (id)bag_arrayForKey:(id)arg1;
- (id)bag_numberForKey:(id)arg1;
- (id)bag_stringForKey:(id)arg1;
- (_Bool)bag_boolForKey:(id)arg1;
- (id)_bag_objectOfClass:(Class)arg1 forKey:(id)arg2 override:(_Bool)arg3;
- (id)_bag_objectOfClass:(Class)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *tuscanyConfiguration;
@property(readonly, nonatomic) NSArray *anonymousMetadataPreference;
@property(readonly, nonatomic) _Bool collectAnonymousMetadata;
@property(readonly, nonatomic) _Bool collectScores;
@property(readonly, nonatomic) _Bool sampleFeatures;
@property(readonly, nonatomic) double timeoutIntervalForRequest;
@property(readonly, copy, nonatomic) NSString *firstUseContinueText;
@property(readonly, copy, nonatomic) NSString *firstUseLearnMoreURL;
@property(readonly, copy, nonatomic) NSString *firstUseLearnMoreText;
@property(readonly, copy, nonatomic) NSString *firstUseDescriptionText;
@property(readonly, copy, nonatomic) NSArray *enabledDomains;
@property(readonly, copy, nonatomic) NSArray *recentlyUsedAppIdentifierWhitelist;
@property(readonly, nonatomic) _Bool feedbackEnabled;
@property(readonly, nonatomic) unsigned long long maximumCachedQueriesToSend;
@property(readonly, nonatomic) unsigned long long maximumCachedResultsToSend;
@property(readonly, nonatomic) unsigned long long minimumQueryLength;
@property(readonly, copy, nonatomic) NSString *customFlight;
- (id)personalizationParameters;
@property(readonly, nonatomic) NSURL *crowdsourcingURL;
@property(readonly, nonatomic) NSURL *feedbackURL;
@property(readonly, nonatomic) NSURL *searchURL;
@property(readonly, nonatomic) NSURL *warmURL;
@property(readonly, nonatomic) double minimumIntervalBetweenQueriesFromBag;
@property(readonly, nonatomic) double subscriptionTTL;
@property(readonly, nonatomic) NSArray *subscriptionProviderBundleIdentifierWhitelist;
@property(readonly, nonatomic) NSArray *subscriptionProviderDomainWhitelist;
@property(readonly, nonatomic) _Bool sendGeoEnvironmentHeader;
@property(readonly, nonatomic) NSArray *downloadResourcesList;
@property(readonly, nonatomic) NSArray *supportedGeoLocationSources;
@property(readonly, nonatomic) NSNumber *otherRenderTimeout;
@property(readonly, nonatomic) NSNumber *minSearchRenderTimeout;
@property(readonly, nonatomic) NSNumber *searchRenderTimeout;
@property(readonly, copy, nonatomic) NSDictionary *resources;
@property(readonly, copy, nonatomic) NSString *version;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithDictionary:(id)arg1 userAgent:(id)arg2;

@end

