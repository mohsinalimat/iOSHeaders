//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet;

@interface AXAlternativeVoices : NSObject
{
    NSDictionary *_voiceClassesMap;
    NSMutableDictionary *_voiceNameMap;
}

+ (_Bool)supportsAlex;
+ (_Bool)supportsSiri;
+ (id)sharedInstance;
+ (_Bool)inUnitTestMode;
+ (void)setInUnitTestMode:(_Bool)arg1;
@property(retain, nonatomic) NSMutableDictionary *voiceNameMap; // @synthesize voiceNameMap=_voiceNameMap;
@property(retain, nonatomic) NSDictionary *voiceClassesMap; // @synthesize voiceClassesMap=_voiceClassesMap;
- (void).cxx_destruct;
- (id)_siriBaseIdentifierFromIdentifier:(id)arg1;
- (id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(long long)arg3;
- (_Bool)_siriSupportsLanguage:(id)arg1;
- (id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (id)nameForVoiceIdentifier:(id)arg1;
- (id)alternativeVoiceIdentifiersForLangauge:(id)arg1;
- (_Bool)isAlexAvailableForLanguage:(id)arg1;
- (_Bool)isSiriVoiceIdentifier:(id)arg1;
- (_Bool)isOldSiriVoiceIdentifier:(id)arg1;
- (_Bool)isAlternativeVoice:(id)arg1;
- (_Bool)isAlternativeVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *supportedSiriLanguages;

@end

