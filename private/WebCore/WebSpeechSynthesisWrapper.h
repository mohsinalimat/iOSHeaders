//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVSpeechSynthesizerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate>
{
    struct PlatformSpeechSynthesizer *m_synthesizerObject;
    RefPtr_19433845 m_utterance;
    struct RetainPtr<AVSpeechSynthesizer> m_synthesizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)speakUtterance:(RefPtr_19433845 *)arg1;
- (float)mapSpeechRateToPlatformRate:(float)arg1;
- (id)initWithSpeechSynthesizer:(struct PlatformSpeechSynthesizer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

