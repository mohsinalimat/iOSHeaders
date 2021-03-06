//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXSpeechAssetServices/AVSpeechSynthesizerDelegate-Protocol.h>

@class AVSpeechSynthesizer, NSPointerArray, NSString;

@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate>
{
    struct __SCNetworkReachability *_reachability;
    NSPointerArray *_delegates;
    AVSpeechSynthesizer *_samplePlayer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)playSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (_Bool)allowedToDownloadVoiceAssets;
- (void)_updateAllowedToDownload;
- (void)clientUpdateAvailableSpeechAssets;
- (id)_speechAssetUpdaterClient;
- (void)deleteDownloadAlternateVoice:(id)arg1;
- (void)stopDownloadingAlternateVoice:(id)arg1;
- (void)_requestVoiceAlternateVoiceDownloadProgress:(id)arg1;
- (void)requestVoiceAlternateVoiceDownloadProgress:(id)arg1;
- (void)_startDownloadingAlternateVoice:(id)arg1;
- (long long)diskSizeForAsset:(id)arg1;
- (void)_setProgressHandlerIfNecessary:(id)arg1 voiceId:(id)arg2;
- (id)_cachedAssetForVoiceId:(id)arg1;
- (_Bool)_voiceIdIsVocalizerVoice:(id)arg1;
- (void)_handleAssetProgress:(id)arg1 error:(id)arg2 voiceId:(id)arg3 diskSize:(long long)arg4 asset:(id)arg5;
- (void)startDownloadingAlternateVoice:(id)arg1;
- (id)assetForVoiceId:(id)arg1;
- (id)_currentDelegates;
- (id)_assetForVoiceId:(id)arg1 forDeletion:(_Bool)arg2;
- (id)_mobileAssetDownloadOptions;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

