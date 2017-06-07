//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceServices/VSRecognitionAction.h>

@class NSArray, NSString;

@interface VSRecognitionRecognizeAction : VSRecognitionAction
{
    NSString *_modelIdentifier;
    NSArray *_keywords;
    void *_recognition;
    NSArray *_results;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    double _levelInterval;
    struct {
        unsigned int debugDumpEnabled:1;
        unsigned int preferredEngine:2;
        unsigned int resetEngine:1;
        unsigned int bluetoothAllowed:1;
        unsigned int hasStarted:1;
    } _recognizeFlags;
}

- (void)_handledThreadedResults:(id)arg1 nextAction:(id)arg2;
- (void)_handleRecognitionCompleted:(struct __VSRecognition *)arg1 withResults:(struct __CFArray *)arg2 error:(struct __CFError *)arg3;
- (void)_handleRecognitionStarted:(struct __VSRecognition *)arg1;
- (void)_handleRecognitionPrepared:(struct __VSRecognition *)arg1;
- (void)_reset;
- (void)_setResults:(id)arg1;
- (id)_actionForEmptyResults;
- (void)_continueAfterDeferredStart;
- (void)_releaseFromPrepare;
- (id)cancel;
- (id)perform;
- (void)_configureNewRecognitionInstance;
- (struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(CDStruct_90f67059 *)arg1 info:(void *)arg2;
- (_Bool)_setEngineResetRequired:(_Bool)arg1;
- (_Bool)_setAudioInputPath:(id)arg1;
- (_Bool)_setPreferredEngine:(int)arg1;
- (id)_debugDumpPath;
- (_Bool)_setDebugDumpPath:(id)arg1;
- (_Bool)_setDebugDumpEnabled:(_Bool)arg1;
- (_Bool)_setDebugDumpEnabled:(_Bool)arg1 dumpPath:(id)arg2;
- (_Bool)_keywordIndexChanged;
- (long long)_keywordCount;
- (id)_keywordAtIndex:(long long)arg1;
- (id)_keywords;
- (float)_inputLevelDB;
- (float)_inputLevel;
- (_Bool)_setInputLevelUpdateInterval:(double)arg1;
- (_Bool)_setBluetoothInputAllowed:(_Bool)arg1;
- (_Bool)_hasDeferredStartCallback;
- (_Bool)_isActivelyRecognizing;
- (_Bool)_isRecognizing;
- (id)modelIdentifier;
- (int)completionType;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)arg1;

@end

