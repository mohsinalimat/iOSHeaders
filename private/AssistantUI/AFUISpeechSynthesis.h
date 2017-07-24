//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantUI/AFQueueDelegate-Protocol.h>
#import <AssistantUI/AFUISpeechSynthesis-Protocol.h>
#import <AssistantUI/AFUISpeechSynthesisElementDelegate-Protocol.h>
#import <AssistantUI/VSSpeechSynthesizerDelegate-Protocol.h>

@class AFQueue, AFVoiceInfo, NSMutableArray, NSMutableDictionary, NSString, VSSpeechSynthesizer;
@protocol AFUISpeechSynthesisDelegate, AFUISpeechSynthesisLocalDelegate, OS_dispatch_queue;

@interface AFUISpeechSynthesis : NSObject <AFQueueDelegate, AFUISpeechSynthesisElementDelegate, VSSpeechSynthesizerDelegate, AFUISpeechSynthesis>
{
    VSSpeechSynthesizer *_synthesizer;
    _Bool _sessionIDIsValid;
    unsigned int _sessionID;
    AFVoiceInfo *_outputVoice;
    NSMutableDictionary *_availableVoicesForLanguage;
    NSObject<OS_dispatch_queue> *_processingElementsQueue;
    id <AFUISpeechSynthesisDelegate> _delegate;
    id <AFUISpeechSynthesisLocalDelegate> _localDelegate;
    AFQueue *_elementQueue;
    NSMutableArray *_activeElements;
}

@property(readonly, nonatomic, getter=_activeElements) NSMutableArray *activeElements; // @synthesize activeElements=_activeElements;
@property(readonly, nonatomic, getter=_elementQueue) AFQueue *elementQueue; // @synthesize elementQueue=_elementQueue;
@property(retain, nonatomic) id <AFUISpeechSynthesisDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AFUISpeechSynthesisLocalDelegate> localDelegate; // @synthesize localDelegate=_localDelegate;
- (void).cxx_destruct;
- (void)_processProvisionalElements;
- (id)_filterVoices:(id)arg1 gender:(id)arg2;
- (long long)_genderForString:(id)arg1;
- (void)_findVoiceForLanguage:(id)arg1 gender:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_activeElementWithSpeechRequest:(id)arg1;
- (id)_activeElementWithPresynthesizedAudioRequest:(id)arg1;
- (void)_processElementQueue;
- (void)_handleText:(id)arg1;
- (void)_handleAudioData:(id)arg1;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enqueueText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 language:(id)arg4 gender:(id)arg5 isPhonetic:(_Bool)arg6 provisionally:(_Bool)arg7 eligibleAfterDuration:(double)arg8 preparationIdentifier:(id)arg9 completion:(CDUnknownBlockType)arg10 animationIdentifier:(id)arg11 analyticsContext:(id)arg12 speakableContextInfo:(id)arg13;
- (void)enqueueAudioData:(id)arg1 identifier:(id)arg2 provisionally:(_Bool)arg3 eligibleAfterDuration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 language:(id)arg3 gender:(id)arg4 isPhonetic:(_Bool)arg5 provisionally:(_Bool)arg6 eligibleAfterDuration:(double)arg7 preparationIdentifier:(id)arg8 completion:(CDUnknownBlockType)arg9 animationIdentifier:(id)arg10 analyticsContext:(id)arg11 speakableContextInfo:(id)arg12;
- (_Bool)_startSpeechPreSynthesisOfText:(id)arg1 error:(id *)arg2;
- (void)presynthesizeDialogStrings:(id)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishPresynthesizedAudioRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(_Bool)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)arg1;
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;
- (void)invalidate;
- (void)invalidateOnMainThread;
- (void)_cancelByCancellingActiveElementsOnly:(_Bool)arg1;
- (void)skipCurrentSynthesis;
- (void)cancel;
- (_Bool)isSynthesisQueueEmpty;
- (_Bool)isSpeaking;
- (void)prewarmIfNeeded;
- (void)_updateSynthesizerWithSessionID:(unsigned int)arg1;
- (id)_synthesizer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

