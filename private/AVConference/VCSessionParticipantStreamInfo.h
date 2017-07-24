//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCAudioRuleCollection, VCAudioStream, VCAudioStreamConfig;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantStreamInfo : NSObject
{
    VCAudioStream *_audioStream;
    VCAudioStreamConfig *_audioStreamConfig;
    VCAudioRuleCollection *_audioRules;
    VCAudioRuleCollection *_audioRulesNegotiated;
    unsigned int _maxAudioBitrate;
    unsigned short _idsStreamID;
}

@property(nonatomic) unsigned short idsStreamID; // @synthesize idsStreamID=_idsStreamID;
@property(retain, nonatomic) VCAudioRuleCollection *audioRulesNegotiated; // @synthesize audioRulesNegotiated=_audioRulesNegotiated;
@property(nonatomic) unsigned int maxAudioBitrate; // @synthesize maxAudioBitrate=_maxAudioBitrate;
@property(retain, nonatomic) VCAudioRuleCollection *audioRules; // @synthesize audioRules=_audioRules;
@property(retain, nonatomic) VCAudioStreamConfig *audioStreamConfig; // @synthesize audioStreamConfig=_audioStreamConfig;
@property(retain, nonatomic) VCAudioStream *audioStream; // @synthesize audioStream=_audioStream;
- (void)dealloc;

@end

