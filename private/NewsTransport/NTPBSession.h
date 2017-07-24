//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBSession : PBCodable <NSCopying>
{
    long long _appBuild;
    long long _appConfigTreatmentId;
    long long _lastAppOpenDate;
    long long _testBucket;
    long long _userStartDate;
    int _ageBracket;
    float _ageBracketConfidenceLevel;
    NSData *_appProcessLifetimeId;
    NSString *_appVersion;
    NSString *_browserLanguage;
    NSString *_campaignId;
    int _campaignType;
    NSString *_carrier;
    int _cellularRadioAccessTechnology;
    NSString *_clientName;
    NSString *_clientVersion;
    NSString *_countryCode;
    NSString *_deviceModel;
    NSString *_devicePlatform;
    int _ethnicity;
    float _ethnicityConfidenceLevel;
    int _gender;
    float _genderConfidenceLevel;
    int _incomeBracket;
    float _incomeBracketConfidenceLevel;
    NSString *_languageCode;
    int _newsWidgetModeGroup;
    NSString *_newsWidgetModeGroupId;
    NSString *_notwUserId;
    NSString *_originatingCampaignId;
    NSString *_originatingCampaignType;
    NSString *_originatingCreativeId;
    int _osInstallVariant;
    NSString *_osVersion;
    NSString *_personalizationPortraitVariantName;
    NSString *_previousAppVersion;
    NSString *_previousOsVersion;
    int _reachabilityStatus;
    NSData *_sessionId;
    NSData *_sessionIdWatch;
    int _textSize;
    NSString *_userId;
    NSString *_userStorefrontId;
    int _utcOffset;
    NSString *_watchSessionId;
    int _widgetDisplayMode;
    int _widgetModeType;
    NSData *_widgetSessionId;
    NSString *_widgetUserId;
    _Bool _iosSettingsNotificationsEnabled;
    _Bool _isNewUser;
    _Bool _isPaidSubscriber;
    _Bool _isPaidSubscriberFromAppStore;
    _Bool _isPaidSubscriberFromNews;
    _Bool _isPaidSubscriberFromThirdParty;
    _Bool _locationPermissionGranted;
    _Bool _notificationsEnabled;
    _Bool _privateDataEncrypted;
    _Bool _privateDataSyncOn;
    _Bool _progressivePersonalizationAllowed;
    _Bool _runningObsolete;
    _Bool _signedIntoIcloud;
    _Bool _upgradedFromObsolete;
    struct {
        unsigned int appBuild:1;
        unsigned int appConfigTreatmentId:1;
        unsigned int lastAppOpenDate:1;
        unsigned int testBucket:1;
        unsigned int userStartDate:1;
        unsigned int ageBracket:1;
        unsigned int ageBracketConfidenceLevel:1;
        unsigned int campaignType:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int ethnicity:1;
        unsigned int ethnicityConfidenceLevel:1;
        unsigned int gender:1;
        unsigned int genderConfidenceLevel:1;
        unsigned int incomeBracket:1;
        unsigned int incomeBracketConfidenceLevel:1;
        unsigned int newsWidgetModeGroup:1;
        unsigned int osInstallVariant:1;
        unsigned int reachabilityStatus:1;
        unsigned int textSize:1;
        unsigned int utcOffset:1;
        unsigned int widgetDisplayMode:1;
        unsigned int widgetModeType:1;
        unsigned int iosSettingsNotificationsEnabled:1;
        unsigned int isNewUser:1;
        unsigned int isPaidSubscriber:1;
        unsigned int isPaidSubscriberFromAppStore:1;
        unsigned int isPaidSubscriberFromNews:1;
        unsigned int isPaidSubscriberFromThirdParty:1;
        unsigned int locationPermissionGranted:1;
        unsigned int notificationsEnabled:1;
        unsigned int privateDataEncrypted:1;
        unsigned int privateDataSyncOn:1;
        unsigned int progressivePersonalizationAllowed:1;
        unsigned int runningObsolete:1;
        unsigned int signedIntoIcloud:1;
        unsigned int upgradedFromObsolete:1;
    } _has;
}

@property(retain, nonatomic) NSString *widgetUserId; // @synthesize widgetUserId=_widgetUserId;
@property(nonatomic) long long testBucket; // @synthesize testBucket=_testBucket;
@property(retain, nonatomic) NSData *appProcessLifetimeId; // @synthesize appProcessLifetimeId=_appProcessLifetimeId;
@property(retain, nonatomic) NSString *personalizationPortraitVariantName; // @synthesize personalizationPortraitVariantName=_personalizationPortraitVariantName;
@property(retain, nonatomic) NSData *widgetSessionId; // @synthesize widgetSessionId=_widgetSessionId;
@property(retain, nonatomic) NSData *sessionIdWatch; // @synthesize sessionIdWatch=_sessionIdWatch;
@property(retain, nonatomic) NSString *watchSessionId; // @synthesize watchSessionId=_watchSessionId;
@property(nonatomic) _Bool progressivePersonalizationAllowed; // @synthesize progressivePersonalizationAllowed=_progressivePersonalizationAllowed;
@property(nonatomic) _Bool privateDataEncrypted; // @synthesize privateDataEncrypted=_privateDataEncrypted;
@property(retain, nonatomic) NSString *notwUserId; // @synthesize notwUserId=_notwUserId;
@property(retain, nonatomic) NSString *browserLanguage; // @synthesize browserLanguage=_browserLanguage;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(nonatomic) long long appConfigTreatmentId; // @synthesize appConfigTreatmentId=_appConfigTreatmentId;
@property(nonatomic) float ethnicityConfidenceLevel; // @synthesize ethnicityConfidenceLevel=_ethnicityConfidenceLevel;
@property(nonatomic) int ethnicity; // @synthesize ethnicity=_ethnicity;
@property(nonatomic) float incomeBracketConfidenceLevel; // @synthesize incomeBracketConfidenceLevel=_incomeBracketConfidenceLevel;
@property(nonatomic) int incomeBracket; // @synthesize incomeBracket=_incomeBracket;
@property(nonatomic) float genderConfidenceLevel; // @synthesize genderConfidenceLevel=_genderConfidenceLevel;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(nonatomic) float ageBracketConfidenceLevel; // @synthesize ageBracketConfidenceLevel=_ageBracketConfidenceLevel;
@property(nonatomic) int ageBracket; // @synthesize ageBracket=_ageBracket;
@property(retain, nonatomic) NSString *newsWidgetModeGroupId; // @synthesize newsWidgetModeGroupId=_newsWidgetModeGroupId;
@property(nonatomic) _Bool locationPermissionGranted; // @synthesize locationPermissionGranted=_locationPermissionGranted;
@property(nonatomic) _Bool iosSettingsNotificationsEnabled; // @synthesize iosSettingsNotificationsEnabled=_iosSettingsNotificationsEnabled;
@property(retain, nonatomic) NSString *originatingCreativeId; // @synthesize originatingCreativeId=_originatingCreativeId;
@property(retain, nonatomic) NSString *originatingCampaignType; // @synthesize originatingCampaignType=_originatingCampaignType;
@property(retain, nonatomic) NSString *originatingCampaignId; // @synthesize originatingCampaignId=_originatingCampaignId;
@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(nonatomic) _Bool isPaidSubscriberFromThirdParty; // @synthesize isPaidSubscriberFromThirdParty=_isPaidSubscriberFromThirdParty;
@property(nonatomic) _Bool isPaidSubscriberFromAppStore; // @synthesize isPaidSubscriberFromAppStore=_isPaidSubscriberFromAppStore;
@property(nonatomic) _Bool isPaidSubscriberFromNews; // @synthesize isPaidSubscriberFromNews=_isPaidSubscriberFromNews;
@property(nonatomic) _Bool isPaidSubscriber; // @synthesize isPaidSubscriber=_isPaidSubscriber;
@property(nonatomic) _Bool privateDataSyncOn; // @synthesize privateDataSyncOn=_privateDataSyncOn;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) _Bool signedIntoIcloud; // @synthesize signedIntoIcloud=_signedIntoIcloud;
@property(retain, nonatomic) NSString *previousOsVersion; // @synthesize previousOsVersion=_previousOsVersion;
@property(retain, nonatomic) NSString *previousAppVersion; // @synthesize previousAppVersion=_previousAppVersion;
@property(nonatomic) _Bool upgradedFromObsolete; // @synthesize upgradedFromObsolete=_upgradedFromObsolete;
@property(nonatomic) _Bool runningObsolete; // @synthesize runningObsolete=_runningObsolete;
@property(nonatomic) long long lastAppOpenDate; // @synthesize lastAppOpenDate=_lastAppOpenDate;
@property(nonatomic) long long userStartDate; // @synthesize userStartDate=_userStartDate;
@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(retain, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int textSize; // @synthesize textSize=_textSize;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) int utcOffset; // @synthesize utcOffset=_utcOffset;
@property(nonatomic) long long appBuild; // @synthesize appBuild=_appBuild;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasWidgetUserId;
@property(nonatomic) _Bool hasTestBucket;
@property(readonly, nonatomic) _Bool hasAppProcessLifetimeId;
@property(readonly, nonatomic) _Bool hasPersonalizationPortraitVariantName;
- (int)StringAsWidgetDisplayMode:(id)arg1;
- (id)widgetDisplayModeAsString:(int)arg1;
@property(nonatomic) _Bool hasWidgetDisplayMode;
@property(nonatomic) int widgetDisplayMode; // @synthesize widgetDisplayMode=_widgetDisplayMode;
@property(readonly, nonatomic) _Bool hasWidgetSessionId;
@property(readonly, nonatomic) _Bool hasSessionIdWatch;
@property(readonly, nonatomic) _Bool hasWatchSessionId;
@property(nonatomic) _Bool hasProgressivePersonalizationAllowed;
@property(nonatomic) _Bool hasPrivateDataEncrypted;
@property(readonly, nonatomic) _Bool hasNotwUserId;
@property(readonly, nonatomic) _Bool hasBrowserLanguage;
@property(readonly, nonatomic) _Bool hasClientVersion;
@property(readonly, nonatomic) _Bool hasClientName;
@property(nonatomic) _Bool hasAppConfigTreatmentId;
@property(nonatomic) _Bool hasEthnicityConfidenceLevel;
@property(nonatomic) _Bool hasEthnicity;
@property(nonatomic) _Bool hasIncomeBracketConfidenceLevel;
@property(nonatomic) _Bool hasIncomeBracket;
@property(nonatomic) _Bool hasGenderConfidenceLevel;
@property(nonatomic) _Bool hasGender;
@property(nonatomic) _Bool hasAgeBracketConfidenceLevel;
@property(nonatomic) _Bool hasAgeBracket;
@property(readonly, nonatomic) _Bool hasNewsWidgetModeGroupId;
- (int)StringAsNewsWidgetModeGroup:(id)arg1;
- (id)newsWidgetModeGroupAsString:(int)arg1;
@property(nonatomic) _Bool hasNewsWidgetModeGroup;
@property(nonatomic) int newsWidgetModeGroup; // @synthesize newsWidgetModeGroup=_newsWidgetModeGroup;
@property(nonatomic) _Bool hasLocationPermissionGranted;
- (int)StringAsWidgetModeType:(id)arg1;
- (id)widgetModeTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasWidgetModeType;
@property(nonatomic) int widgetModeType; // @synthesize widgetModeType=_widgetModeType;
@property(nonatomic) _Bool hasIosSettingsNotificationsEnabled;
@property(readonly, nonatomic) _Bool hasOriginatingCreativeId;
@property(readonly, nonatomic) _Bool hasOriginatingCampaignType;
@property(readonly, nonatomic) _Bool hasOriginatingCampaignId;
@property(nonatomic) _Bool hasNotificationsEnabled;
@property(nonatomic) _Bool hasIsPaidSubscriberFromThirdParty;
@property(nonatomic) _Bool hasIsPaidSubscriberFromAppStore;
@property(nonatomic) _Bool hasIsPaidSubscriberFromNews;
@property(nonatomic) _Bool hasIsPaidSubscriber;
@property(nonatomic) _Bool hasPrivateDataSyncOn;
- (int)StringAsCampaignType:(id)arg1;
- (id)campaignTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCampaignType;
@property(nonatomic) int campaignType; // @synthesize campaignType=_campaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
- (int)StringAsOsInstallVariant:(id)arg1;
- (id)osInstallVariantAsString:(int)arg1;
@property(nonatomic) _Bool hasOsInstallVariant;
@property(nonatomic) int osInstallVariant; // @synthesize osInstallVariant=_osInstallVariant;
@property(nonatomic) _Bool hasSignedIntoIcloud;
@property(readonly, nonatomic) _Bool hasPreviousOsVersion;
@property(readonly, nonatomic) _Bool hasPreviousAppVersion;
@property(nonatomic) _Bool hasUpgradedFromObsolete;
@property(nonatomic) _Bool hasRunningObsolete;
@property(nonatomic) _Bool hasLastAppOpenDate;
@property(nonatomic) _Bool hasUserStartDate;
@property(nonatomic) _Bool hasIsNewUser;
@property(readonly, nonatomic) _Bool hasUserStorefrontId;
@property(readonly, nonatomic) _Bool hasUserId;
@property(readonly, nonatomic) _Bool hasSessionId;
@property(nonatomic) _Bool hasTextSize;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
@property(nonatomic) _Bool hasCellularRadioAccessTechnology;
@property(nonatomic) int cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
- (int)StringAsReachabilityStatus:(id)arg1;
- (id)reachabilityStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasReachabilityStatus;
@property(nonatomic) int reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
@property(readonly, nonatomic) _Bool hasCarrier;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(nonatomic) _Bool hasUtcOffset;
@property(nonatomic) _Bool hasAppBuild;
@property(readonly, nonatomic) _Bool hasAppVersion;
@property(readonly, nonatomic) _Bool hasOsVersion;
@property(readonly, nonatomic) _Bool hasDevicePlatform;
@property(readonly, nonatomic) _Bool hasDeviceModel;

@end

