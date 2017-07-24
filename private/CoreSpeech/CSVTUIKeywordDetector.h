//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSAsset, CSAudioCircularBuffer, CSKeywordAnalyzerNDAPI, NSString;

@interface CSVTUIKeywordDetector : NSObject
{
    NSString *_languageCode;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    float _lastKeywordScore;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _extraSamplesAtStart;
}

- (void).cxx_destruct;
- (unsigned long long)_sampleLengthFrom:(unsigned int)arg1 To:(unsigned int)arg2;
- (id)triggeredUtterance:(id)arg1;
- (id)analyze:(id)arg1;
- (void)reset;
- (id)initWithLanguageCode:(id)arg1;

@end

