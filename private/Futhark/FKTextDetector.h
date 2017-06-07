//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FKTextDetector : NSObject
{
    struct *_sessions[8];
    unsigned int _timeDownscale[8];
    unsigned int _timeBinarizer[8];
    unsigned int _timeConcomps[8];
    unsigned int _timeSequences[8];
    unsigned int _timeRecognizer[8];
    _Bool _detectDiacritics;
    _Bool _returnSubFeatures;
    _Bool _minimizeFalseDetections;
    _Bool _createFeaturesForAllConcomps;
    _Bool _enableBinarizerFiltering;
    int _minimumCharacterHeight;
    int _binarizerLimit;
    long long _thresholdingAlgorithm;
    NSString *_recognitionLanguage;
    CDStruct_74dcf1ab _mergeSettings;
}

@property(nonatomic) CDStruct_74dcf1ab mergeSettings; // @synthesize mergeSettings=_mergeSettings;
@property(nonatomic) _Bool enableBinarizerFiltering; // @synthesize enableBinarizerFiltering=_enableBinarizerFiltering;
@property(nonatomic) _Bool createFeaturesForAllConcomps; // @synthesize createFeaturesForAllConcomps=_createFeaturesForAllConcomps;
@property(nonatomic) _Bool minimizeFalseDetections; // @synthesize minimizeFalseDetections=_minimizeFalseDetections;
@property(nonatomic) _Bool returnSubFeatures; // @synthesize returnSubFeatures=_returnSubFeatures;
@property(copy, nonatomic) NSString *recognitionLanguage; // @synthesize recognitionLanguage=_recognitionLanguage;
@property(nonatomic) int binarizerLimit; // @synthesize binarizerLimit=_binarizerLimit;
@property(nonatomic) long long thresholdingAlgorithm; // @synthesize thresholdingAlgorithm=_thresholdingAlgorithm;
@property(nonatomic) int minimumCharacterHeight; // @synthesize minimumCharacterHeight=_minimumCharacterHeight;
@property(nonatomic) _Bool detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
- (id)detectFeaturesInBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)detectFeaturesInBuffer:(struct __CVBuffer *)arg1 withRegionOfInterest:(struct CGRect)arg2 error:(id *)arg3;
- (void)resetTimers;
- (void)runRecognizerOnFeatures:(id)arg1 roi:(struct CGRect)arg2 size:(struct CGSize)arg3 lastID:(long long *)arg4;
- (unsigned char)isValidPixelBuffer:(struct __CVBuffer *)arg1 regionOfInterest:(struct CGRect)arg2 error:(id *)arg3;
- (id)createFeaturesForROI:(struct CGRect)arg1 originalSize:(struct CGSize)arg2 lastID:(long long *)arg3;
- (void)mergeFeature:(id)arg1 withArray:(id)arg2;
- (id)createFeaturesForSessionScale:(int)arg1 roi:(struct CGRect)arg2 originalSize:(struct CGSize)arg3 startID:(long long *)arg4;
- (void)translatePropertiesToOptionsWithNumSessions:(int)arg1;
- (void)dealloc;
- (void)resetOptions;
- (id)initWithDimensions:(struct CGSize)arg1;

@end

