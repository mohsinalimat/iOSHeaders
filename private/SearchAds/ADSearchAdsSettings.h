//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class ADClientSettingsResponse, NSArray, NSString, NSURL;

@interface ADSearchAdsSettings : ADSingleton
{
    _Bool _isTest;
    _Bool _isBaseline;
    _Bool _isCustomTemplate;
    _Bool _isRequestedImage;
    _Bool _isRequestedRating;
    NSURL *_defaultToroServerURL;
    NSURL *_defaultAdTargetingServerURL;
    NSString *_storefrontLocalizationLanguage;
    NSString *_algoID;
    NSArray *_userKeyboards;
    double _requestedLocationAccuracy;
    double _locationGridSpacing;
    double _reverseGeolocationRefreshThresholdInMeters;
    double _clickExpirationThresholdInSeconds;
    double _frequencyCapExpirationInSeconds;
    unsigned long long _maxFrequencyCapElements;
    unsigned long long _maxClickCapElements;
    ADClientSettingsResponse *_clientSettings;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ADClientSettingsResponse *clientSettings; // @synthesize clientSettings=_clientSettings;
@property(nonatomic) unsigned long long maxClickCapElements; // @synthesize maxClickCapElements=_maxClickCapElements;
@property(nonatomic) unsigned long long maxFrequencyCapElements; // @synthesize maxFrequencyCapElements=_maxFrequencyCapElements;
@property(nonatomic) double frequencyCapExpirationInSeconds; // @synthesize frequencyCapExpirationInSeconds=_frequencyCapExpirationInSeconds;
@property(nonatomic) double clickExpirationThresholdInSeconds; // @synthesize clickExpirationThresholdInSeconds=_clickExpirationThresholdInSeconds;
@property(nonatomic) double reverseGeolocationRefreshThresholdInMeters; // @synthesize reverseGeolocationRefreshThresholdInMeters=_reverseGeolocationRefreshThresholdInMeters;
@property(nonatomic) _Bool isRequestedRating; // @synthesize isRequestedRating=_isRequestedRating;
@property(nonatomic) _Bool isRequestedImage; // @synthesize isRequestedImage=_isRequestedImage;
@property(nonatomic) _Bool isCustomTemplate; // @synthesize isCustomTemplate=_isCustomTemplate;
@property(nonatomic) _Bool isBaseline; // @synthesize isBaseline=_isBaseline;
@property(nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(nonatomic) double locationGridSpacing; // @synthesize locationGridSpacing=_locationGridSpacing;
@property(nonatomic) double requestedLocationAccuracy; // @synthesize requestedLocationAccuracy=_requestedLocationAccuracy;
@property(retain, nonatomic) NSArray *userKeyboards; // @synthesize userKeyboards=_userKeyboards;
@property(retain, nonatomic) NSString *algoID; // @synthesize algoID=_algoID;
@property(retain, nonatomic) NSString *storefrontLocalizationLanguage; // @synthesize storefrontLocalizationLanguage=_storefrontLocalizationLanguage;
@property(retain, nonatomic) NSURL *defaultAdTargetingServerURL; // @synthesize defaultAdTargetingServerURL=_defaultAdTargetingServerURL;
@property(retain, nonatomic) NSURL *defaultToroServerURL; // @synthesize defaultToroServerURL=_defaultToroServerURL;
- (void).cxx_destruct;
- (void)overrideRevGeoThreshold:(double)arg1;
- (void)overrideMaxToroClickElements:(unsigned long long)arg1;
- (void)overrideToroClickExpiration:(double)arg1;
- (void)overrideMaxFrequencyCapElements:(unsigned long long)arg1;
- (void)overrideFrequencyCapExpiration:(double)arg1;
- (void)checkForInternalSettingsOverrides;
- (void)applyClientSettings;
- (void)refreshClientSettings:(CDUnknownBlockType)arg1;
- (void)restoreClientSettings;
- (void)refresh;
- (double)clientSettingsExpirationDate;
- (void)expireClientSettings;
- (id)init;

@end

