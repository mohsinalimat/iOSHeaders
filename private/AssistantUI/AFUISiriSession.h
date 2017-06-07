//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantUI/AFAssistantUIService-Protocol.h>
#import <AssistantUI/AFSpeechDelegate-Protocol.h>
#import <AssistantUI/AFUISiriSession-Protocol.h>
#import <AssistantUI/AFUISpeechSynthesisLocalDelegate-Protocol.h>
#import <AssistantUI/AFUIStateMachineDelegate-Protocol.h>

@class AFConnection, AFUISpeechSynthesis, AFUIStateMachine, NSMutableSet, NSString;
@protocol AFUISiriSessionDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface AFUISiriSession : NSObject <AFAssistantUIService, AFSpeechDelegate, AFUIStateMachineDelegate, AFUISpeechSynthesisLocalDelegate, AFUISiriSession>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _Bool _currentRequestDidPresent;
    AFUIStateMachine *_stateMachine;
    AFUISpeechSynthesis *_speechSynthesis;
    NSMutableSet *_speechRequestGroupGraveyard;
    CDUnknownBlockType _continuePendingRequest;
    _Bool _sendContextBeforeContinuingSpeechRequest;
    _Bool _eyesFree;
    _Bool _isProcessingAcousticIdRequest;
    id <AFUISiriSessionDelegate> _delegate;
    id <AFUISiriSessionLocalDataSource> _localDataSource;
    id <AFUISiriSessionLocalDelegate> _localDelegate;
    AFConnection *_connection;
    NSObject<OS_dispatch_group> *_currentSpeechRequestGroup;
}

+ (id)effectiveCoreLocationBundle;
+ (void)beginMonitoringSiriAvailability;
+ (unsigned long long)availabilityState;
@property(retain, nonatomic, getter=_currentSpeechRequestGroup, setter=_setCurrentSpeechRequestGroup:) NSObject<OS_dispatch_group> *currentSpeechRequestGroup; // @synthesize currentSpeechRequestGroup=_currentSpeechRequestGroup;
@property(readonly, nonatomic, getter=_connection) AFConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) _Bool isProcessingAcousticIdRequest; // @synthesize isProcessingAcousticIdRequest=_isProcessingAcousticIdRequest;
@property(nonatomic, getter=isEyesFree) _Bool eyesFree; // @synthesize eyesFree=_eyesFree;
@property(nonatomic) __weak id <AFUISiriSessionLocalDelegate> localDelegate; // @synthesize localDelegate=_localDelegate;
@property(nonatomic) __weak id <AFUISiriSessionLocalDataSource> localDataSource; // @synthesize localDataSource=_localDataSource;
@property(retain, nonatomic) id <AFUISiriSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)underlyingConnection;
- (float)recordingPowerLevel;
- (_Bool)isListening;
- (_Bool)isPreventingActivationGesture;
- (void)end;
- (void)_discardCurrentSpeechGroup;
- (void)performAceCommands:(id)arg1;
- (void)performAceCommand:(id)arg1;
- (void)performAceCommand:(id)arg1 conflictHandler:(CDUnknownBlockType)arg2;
- (void)_handleRequestUpdateViewsCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAceCommand:(id)arg1 forRequestUpdateViewsCommand:(id)arg2 afterDelay:(double)arg3;
- (void)_handleUnlockDeviceCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLockState:(unsigned long long)arg1;
- (void)setIsStark:(_Bool)arg1;
- (void)rollbackClearContext;
- (void)resetContextTypes:(long long)arg1;
- (void)clearContext;
- (void)setApplicationContext;
- (void)setAlertContext;
- (void)telephonyRequestCompleted;
- (void)sendReplyCommand:(id)arg1;
- (void)resultDidChangeForAceCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resultDidChangeForAceCommand:(id)arg1;
- (void)startCorrectedRequestWithText:(id)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(id)arg3;
- (void)_startRequestWithText:(id)arg1;
- (void)_startRequestWithInfo:(id)arg1;
- (void)_startContinuityRequestWithInfo:(id)arg1;
- (void)_startDirectActionRequestWithString:(id)arg1 appID:(id)arg2 withContext:(id)arg3;
- (void)recordMetricsContext:(id)arg1 forDisambiguatedAppWIthBundleIdentifier:(id)arg2;
- (void)recordRequestMetricEvent:(id)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(id)arg1;
- (void)requestDidPresentViewForErrorCommand:(id)arg1;
- (void)requestDidPresentViewForUICommand:(id)arg1;
- (void)cancelSpeechRequest;
- (void)stopRecordingSpeech;
- (void)_startSpeechPronunciationRequestWithContext:(id)arg1 options:(id)arg2;
- (void)_startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)_startSpeechRequestWithOptions:(id)arg1;
- (void)_requestContextWithCompletion:(CDUnknownBlockType)arg1;
- (id)_preparedSpeechRequestWithRequestOptions:(id)arg1;
- (_Bool)_hasActiveRequest;
- (void)_startRequestWithBlock:(CDUnknownBlockType)arg1;
- (void)_requestWillStart;
- (void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2;
- (void)assistantConnection:(id)arg1 recognitionUpdateWithPhrases:(id)arg2 utterances:(id)arg3 refId:(id)arg4;
- (void)assistantConnection:(id)arg1 recognizedAdditionalSpeechInterpretation:(id)arg2 refId:(id)arg3;
- (void)assistantConnection:(id)arg1 speechRecognized:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)assistantConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg1;
- (void)assistantConnectionDidChangeAudioRecordingPower:(id)arg1;
- (void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
- (void)assistantConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)assistantConnection:(id)arg1 wantsToCacheImage:(id)arg2;
- (void)assistantConnectionDidDetectMusic:(id)arg1;
- (void)assistantConnectionDismissAssistant:(id)arg1;
- (void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned int)arg2;
- (void)assistantConnection:(id)arg1 shouldSpeak:(_Bool)arg2;
- (void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnectionRequestFinished:(id)arg1;
- (void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
- (void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(_Bool)arg2;
- (void)assistantConnectionWillStartAcousticIDRequest:(id)arg1;
- (void)_requestDidFinishWithError:(id)arg1;
- (void)assistantConnection:(id)arg1 startUIRequestWithText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)safeWrapResponseCompletion:(CDUnknownBlockType)arg1;
- (void)assistantConnectionRequestWillStart:(id)arg1;
- (_Bool)speechSynthesisConnectionIsRecording:(id)arg1;
- (void)speechSynthesisWillStartSpeaking:(id)arg1;
- (void)stopCurrentRecordingForSpeechSynthesis:(id)arg1;
- (id)speechSynthesis;
- (void)_continuePendingSpeechRequest;
- (void)updateRequestOptions:(id)arg1;
- (void)stopRequestWithOptions:(id)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (void)_startRequestWithFinalOptions:(id)arg1;
- (void)_didChangeDialogPhase:(id)arg1;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionActive;
- (void)preheat;
- (void)_performBlockWithDelegate:(CDUnknownBlockType)arg1;
- (void)_performTransitionForEvent:(long long)arg1;
- (id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2;
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;
- (long long)_state;
- (id)_stateMachine;
- (void)_siriNetworkAvailabilityDidChange:(id)arg1;
- (void)_voiceOverStatusDidChange:(id)arg1;
- (void)_outputVoiceDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 delegateQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

