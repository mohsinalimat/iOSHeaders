//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFUISpeechSynthesis;

@protocol AFUISpeechSynthesisLocalDelegate <NSObject>
- (_Bool)speechSynthesisConnectionIsRecording:(AFUISpeechSynthesis *)arg1;
- (void)speechSynthesisWillStartSpeaking:(AFUISpeechSynthesis *)arg1;
- (void)stopCurrentRecordingForSpeechSynthesis:(AFUISpeechSynthesis *)arg1;
@end

