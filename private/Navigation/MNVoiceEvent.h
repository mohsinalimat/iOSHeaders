//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MNVoiceEvent : NSObject
{
    unsigned long long _options;
    NSString *_textToSpeak;
    unsigned long long _shortPromptType;
    CDUnknownBlockType _completion;
}

+ (_Bool)isValidShortPromptType:(unsigned long long)arg1;
+ (id)eventWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) unsigned long long shortPromptType; // @synthesize shortPromptType=_shortPromptType;
@property(readonly, copy, nonatomic) NSString *textToSpeak; // @synthesize textToSpeak=_textToSpeak;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (_Bool)isEqualToEvent:(id)arg1;
- (id)description;
- (id)initWithPrompt:(unsigned long long)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

