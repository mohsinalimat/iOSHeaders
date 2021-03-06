//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSKeywordAnalyzerNDAPIScoreDelegate-Protocol.h>
#import <CoreSpeech/CSSpeechManagerDelegate-Protocol.h>

@class CSAsset, CSSpeechManager, CSVoiceTriggerEnabledPolicyNonAOP, NSMutableArray, NSString;
@protocol CSVoiceTriggerFirstPassDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerFirstPass : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeechManagerDelegate>
{
    _Bool _voiceTriggerEnabled;
    _Bool _hasTriggerPending;
    float _firstPassThreshold;
    id <CSVoiceTriggerFirstPassDelegate> _delegate;
    CSSpeechManager *_speechManager;
    CSVoiceTriggerEnabledPolicyNonAOP *_voiceTriggerStartPolicy;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    NSMutableArray *_keywordAnalyzersNDAPI;
}

@property(nonatomic) float firstPassThreshold; // @synthesize firstPassThreshold=_firstPassThreshold;
@property(nonatomic) _Bool hasTriggerPending; // @synthesize hasTriggerPending=_hasTriggerPending;
@property(retain, nonatomic) NSMutableArray *keywordAnalyzersNDAPI; // @synthesize keywordAnalyzersNDAPI=_keywordAnalyzersNDAPI;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool voiceTriggerEnabled; // @synthesize voiceTriggerEnabled=_voiceTriggerEnabled;
@property(retain, nonatomic) CSVoiceTriggerEnabledPolicyNonAOP *voiceTriggerStartPolicy; // @synthesize voiceTriggerStartPolicy=_voiceTriggerStartPolicy;
@property(nonatomic) __weak CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(nonatomic) __weak id <CSVoiceTriggerFirstPassDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)_stopVoiceTrigger;
- (void)_startVoiceTrigger;
- (void)_transitVoiceTriggerStatus:(_Bool)arg1;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)_reset;
- (void)reset;
- (id)initWithManager:(id)arg1 asset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

