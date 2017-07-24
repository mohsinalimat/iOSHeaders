//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface PLPhotoEditModel : NSObject <NSCopying>
{
    NSString *_effectFilterName;
    long long _effectFilterVersion;
    _Bool _smartToneEnabled;
    double _smartToneLevel;
    double _autoSmartToneLevel;
    NSString *_autoSmartToneIdentifier;
    double _brightnessLevelOffset;
    double _contrastLevelOffset;
    double _exposureLevelOffset;
    double _shadowsLevelOffset;
    double _blackPointLevelOffset;
    double _localLightLevelOffset;
    double _highlightsLevelOffset;
    _Bool _smartColorEnabled;
    double _autoSmartColorLevel;
    NSString *_autoSmartColorIdentifier;
    double _smartColorLevel;
    double _colorContrastLevelOffset;
    double _colorVibrancyLevelOffset;
    double _colorCastLevelOffset;
    _Bool _smartBWEnabled;
    double _smartBWLevel;
    double _bwStrengthLevelOffset;
    double _bwNeutralGammaLevelOffset;
    double _bwToneLevelOffset;
    double _bwHueLevelOffset;
    double _bwGrainLevelOffset;
    _Bool _whiteBalanceEnabled;
    double _whiteBalanceFaceI;
    double _whiteBalanceFaceQ;
    double _whiteBalanceFaceStrength;
    double _whiteBalanceFaceWarmth;
    double _straightenAngleRadiansCW;
    struct CGRect _cropRect;
    long long _cropConstraintWidth;
    long long _cropConstraintHeight;
    long long _userOrientation;
    _Bool _autoCropped;
    NSDictionary *_smartToneStatistics;
    NSDictionary *_smartColorStatistics;
    NSDictionary *_smartBWStatistics;
    NSDictionary *_autoWhiteBalanceSettings;
    NSString *_autoWhiteBalanceIdentifier;
    NSArray *_redEyeCorrections;
    NSArray *_autoRedEyeCorrections;
    NSArray *_legacyAutoEnhanceFilters;
    _Bool _legacyAutoEnhanceIsOn;
    _Bool _trimEnabled;
    CDStruct_1b6d18a9 _trimStartTime;
    CDStruct_1b6d18a9 _trimEndTime;
    CDStruct_1b6d18a9 _stillPhotoTime;
    NSNumber *_muted;
    _Bool _autoLoopEnabled;
    NSDictionary *_autoLoopRecipe;
    NSString *_autoLoopFlavor;
    _Bool _fusionEnabled;
    NSDictionary *_fusionParameters;
    _Bool _depthEffectEnabled;
    NSDictionary *_depthEffectSettings;
    long long _inputOrientation;
    struct CGSize _inputSize;
}

+ (double)referenceStraightenAngleOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceWarmthLevelOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceStrengthLevelOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceQLevelOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceILevelOfType:(long long)arg1;
+ (double)referenceBWGrainLevelOfType:(long long)arg1;
+ (double)referenceBWHueLevelOfType:(long long)arg1;
+ (double)referenceBWToneLevelOfType:(long long)arg1;
+ (double)referenceBWNeutralGammaLevelOfType:(long long)arg1;
+ (double)referenceBWStrengthLevelOfType:(long long)arg1;
+ (double)_referenceValueOfType:(long long)arg1 fromLevels:(CDStruct_39925896)arg2;
+ (double)referenceSmartBWLevelOfType:(long long)arg1;
+ (double)referenceColorCastLevelOfType:(long long)arg1;
+ (double)referenceColorVibrancyLevelOfType:(long long)arg1;
+ (double)referenceColorContrastLevelOfType:(long long)arg1;
+ (double)referenceSmartColorLevelOfType:(long long)arg1;
+ (double)referenceLocalLightLevelOfType:(long long)arg1;
+ (double)referenceBlackPointLevelOfType:(long long)arg1;
+ (double)referenceShadowsLevelOfType:(long long)arg1;
+ (double)referenceHighlightsLevelOfType:(long long)arg1;
+ (double)referenceExposureLevelOfType:(long long)arg1;
+ (double)referenceContrastLevelOfType:(long long)arg1;
+ (double)referenceBrightnessLevelOfType:(long long)arg1;
+ (double)referenceSmartToneLevelOfType:(long long)arg1;
+ (long long)identityCropConstraint;
+ (long long)identityOrientation;
+ (void)_loadReferenceLevelsFromCIFilterWithName:(id)arg1 attributeKeys:(id)arg2 intoLevelStructs:(CDStruct_183601bc **)arg3;
+ (void)_loadSubfilterReferenceLevelsIfNeeded;
+ (id)identityModel;
@property(readonly, nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(readonly, nonatomic) long long inputOrientation; // @synthesize inputOrientation=_inputOrientation;
@property(readonly, nonatomic) NSDictionary *depthEffectSettings; // @synthesize depthEffectSettings=_depthEffectSettings;
@property(readonly, nonatomic, getter=isDepthEffectEnabled) _Bool depthEffectEnabled; // @synthesize depthEffectEnabled=_depthEffectEnabled;
@property(readonly, nonatomic) NSDictionary *fusionParameters; // @synthesize fusionParameters=_fusionParameters;
@property(readonly, nonatomic, getter=isFusionEnabled) _Bool fusionEnabled; // @synthesize fusionEnabled=_fusionEnabled;
@property(readonly, nonatomic) NSNumber *muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) CDStruct_1b6d18a9 stillPhotoTime; // @synthesize stillPhotoTime=_stillPhotoTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 trimEndTime; // @synthesize trimEndTime=_trimEndTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 trimStartTime; // @synthesize trimStartTime=_trimStartTime;
@property(readonly, nonatomic, getter=isTrimEnabled) _Bool trimEnabled; // @synthesize trimEnabled=_trimEnabled;
@property(readonly, nonatomic) NSString *autoLoopFlavor; // @synthesize autoLoopFlavor=_autoLoopFlavor;
@property(readonly, nonatomic) NSDictionary *autoLoopRecipe; // @synthesize autoLoopRecipe=_autoLoopRecipe;
@property(readonly, nonatomic, getter=isAutoLoopEnabled) _Bool autoLoopEnabled; // @synthesize autoLoopEnabled=_autoLoopEnabled;
@property(readonly, nonatomic) _Bool legacyAutoEnhanceIsOn; // @synthesize legacyAutoEnhanceIsOn=_legacyAutoEnhanceIsOn;
@property(readonly, copy, nonatomic) NSArray *legacyAutoEnhanceFilters; // @synthesize legacyAutoEnhanceFilters=_legacyAutoEnhanceFilters;
@property(readonly, copy, nonatomic) NSArray *autoRedEyeCorrections; // @synthesize autoRedEyeCorrections=_autoRedEyeCorrections;
@property(readonly, copy, nonatomic) NSArray *redEyeCorrections; // @synthesize redEyeCorrections=_redEyeCorrections;
@property(readonly, copy, nonatomic) NSString *autoWhiteBalanceIdentifier; // @synthesize autoWhiteBalanceIdentifier=_autoWhiteBalanceIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *autoWhiteBalanceSettings; // @synthesize autoWhiteBalanceSettings=_autoWhiteBalanceSettings;
@property(readonly, nonatomic, getter=isAutoCropped) _Bool autoCropped; // @synthesize autoCropped=_autoCropped;
@property(readonly, nonatomic) double straightenAngleRadiansCW; // @synthesize straightenAngleRadiansCW=_straightenAngleRadiansCW;
@property(readonly, nonatomic) long long cropConstraintHeight; // @synthesize cropConstraintHeight=_cropConstraintHeight;
@property(readonly, nonatomic) long long cropConstraintWidth; // @synthesize cropConstraintWidth=_cropConstraintWidth;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) long long userOrientation; // @synthesize userOrientation=_userOrientation;
@property(readonly, nonatomic) double whiteBalanceFaceWarmth; // @synthesize whiteBalanceFaceWarmth=_whiteBalanceFaceWarmth;
@property(readonly, nonatomic) double whiteBalanceFaceStrength; // @synthesize whiteBalanceFaceStrength=_whiteBalanceFaceStrength;
@property(readonly, nonatomic) double whiteBalanceFaceQ; // @synthesize whiteBalanceFaceQ=_whiteBalanceFaceQ;
@property(readonly, nonatomic) double whiteBalanceFaceI; // @synthesize whiteBalanceFaceI=_whiteBalanceFaceI;
@property(readonly, nonatomic, getter=isWhiteBalanceEnabled) _Bool whiteBalanceEnabled; // @synthesize whiteBalanceEnabled=_whiteBalanceEnabled;
@property(readonly, nonatomic) double bwGrainLevelOffset; // @synthesize bwGrainLevelOffset=_bwGrainLevelOffset;
@property(readonly, nonatomic) double bwHueLevelOffset; // @synthesize bwHueLevelOffset=_bwHueLevelOffset;
@property(readonly, nonatomic) double bwToneLevelOffset; // @synthesize bwToneLevelOffset=_bwToneLevelOffset;
@property(readonly, nonatomic) double bwNeutralGammaLevelOffset; // @synthesize bwNeutralGammaLevelOffset=_bwNeutralGammaLevelOffset;
@property(readonly, nonatomic) double bwStrengthLevelOffset; // @synthesize bwStrengthLevelOffset=_bwStrengthLevelOffset;
@property(readonly, nonatomic) double smartBWLevel; // @synthesize smartBWLevel=_smartBWLevel;
@property(readonly, copy, nonatomic) NSDictionary *smartBWStatistics; // @synthesize smartBWStatistics=_smartBWStatistics;
@property(readonly, nonatomic, getter=isSmartBWEnabled) _Bool smartBWEnabled; // @synthesize smartBWEnabled=_smartBWEnabled;
@property(readonly, nonatomic) double colorCastLevelOffset; // @synthesize colorCastLevelOffset=_colorCastLevelOffset;
@property(readonly, nonatomic) double colorVibrancyLevelOffset; // @synthesize colorVibrancyLevelOffset=_colorVibrancyLevelOffset;
@property(readonly, nonatomic) double colorContrastLevelOffset; // @synthesize colorContrastLevelOffset=_colorContrastLevelOffset;
@property(readonly, nonatomic) double smartColorLevel; // @synthesize smartColorLevel=_smartColorLevel;
@property(readonly, copy, nonatomic) NSString *autoSmartColorIdentifier; // @synthesize autoSmartColorIdentifier=_autoSmartColorIdentifier;
@property(readonly, nonatomic) double autoSmartColorLevel; // @synthesize autoSmartColorLevel=_autoSmartColorLevel;
@property(readonly, copy, nonatomic) NSDictionary *smartColorStatistics; // @synthesize smartColorStatistics=_smartColorStatistics;
@property(readonly, nonatomic, getter=isSmartColorEnabled) _Bool smartColorEnabled; // @synthesize smartColorEnabled=_smartColorEnabled;
@property(readonly, nonatomic) double localLightLevelOffset; // @synthesize localLightLevelOffset=_localLightLevelOffset;
@property(readonly, nonatomic) double blackPointLevelOffset; // @synthesize blackPointLevelOffset=_blackPointLevelOffset;
@property(readonly, nonatomic) double shadowsLevelOffset; // @synthesize shadowsLevelOffset=_shadowsLevelOffset;
@property(readonly, nonatomic) double highlightsLevelOffset; // @synthesize highlightsLevelOffset=_highlightsLevelOffset;
@property(readonly, nonatomic) double exposureLevelOffset; // @synthesize exposureLevelOffset=_exposureLevelOffset;
@property(readonly, nonatomic) double contrastLevelOffset; // @synthesize contrastLevelOffset=_contrastLevelOffset;
@property(readonly, nonatomic) double brightnessLevelOffset; // @synthesize brightnessLevelOffset=_brightnessLevelOffset;
@property(readonly, nonatomic) double smartToneLevel; // @synthesize smartToneLevel=_smartToneLevel;
@property(readonly, copy, nonatomic) NSString *autoSmartToneIdentifier; // @synthesize autoSmartToneIdentifier=_autoSmartToneIdentifier;
@property(readonly, nonatomic) double autoSmartToneLevel; // @synthesize autoSmartToneLevel=_autoSmartToneLevel;
@property(readonly, copy, nonatomic) NSDictionary *smartToneStatistics; // @synthesize smartToneStatistics=_smartToneStatistics;
@property(readonly, nonatomic, getter=isSmartToneEnabled) _Bool smartToneEnabled; // @synthesize smartToneEnabled=_smartToneEnabled;
@property(readonly, nonatomic) long long effectFilterVersion; // @synthesize effectFilterVersion=_effectFilterVersion;
@property(readonly, copy, nonatomic) NSString *effectFilterName; // @synthesize effectFilterName=_effectFilterName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)loggableDictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic, getter=canRenderDepth) _Bool canRenderDepth;
@property(readonly, nonatomic) _Bool hasStillPhotoTime;
@property(readonly, nonatomic) _Bool hasAnyAutoEnhancement;
@property(readonly, nonatomic) _Bool hasRedEyeCorrections;
@property(readonly, nonatomic) _Bool hasIdentityCrop;
@property(readonly, nonatomic, getter=isCropConstrained) _Bool cropConstrained;
- (struct CGRect)inputImageExtent;
- (_Bool)isGeometryIdentity;
- (_Bool)isIdentityModel;
- (_Bool)isDepthEffectEqualToPhotoEditModel:(id)arg1;
- (_Bool)isTrimEqualToPhotoEditModel:(id)arg1;
- (_Bool)isCropConstraintEqualToPhotoEditModel:(id)arg1;
- (_Bool)isRedEyeCorrectionEqualToPhotoEditModel:(id)arg1;
- (_Bool)isSmartBWPrecisionEqualToPhotoEditModel:(id)arg1;
- (_Bool)isSmartColorPrecisionEqualToPhotoEditModel:(id)arg1;
- (_Bool)isSmartTonePrecisionEqualToPhotoEditModel:(id)arg1;
- (_Bool)isEffectFilterEqualToPhotoEditModel:(id)arg1;
- (_Bool)isFilterName:(id)arg1 equalToOtherFilterName:(id)arg2;
- (_Bool)isDictionary:(id)arg1 equalToOtherDictionary:(id)arg2;
- (_Bool)isGeometryEqualToPhotoEditModel:(id)arg1;
- (_Bool)isVisuallyEqualToPhotoEditModel:(id)arg1 excludingTimesAndMute:(_Bool)arg2;
- (_Bool)isVisuallyEqualToPhotoEditModelExcludingVariations:(id)arg1;
- (_Bool)isVisuallyEqualToPhotoEditModel:(id)arg1;
- (_Bool)isEqualToPhotoEditModel:(id)arg1;
- (_Bool)_shouldEarlyExitComparisonToModel:(id)arg1 returnValue:(_Bool *)arg2;
- (void)_copyValuesFromModel:(id)arg1 interpolationStartModel:(id)arg2 progress:(double)arg3;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)pl_aggregateKeysForPreviousPhotoEditModel:(id)arg1;
- (id)pl_aggregateNameForEffectFilter;

@end

