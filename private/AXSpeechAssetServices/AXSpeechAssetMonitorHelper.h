//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXSpeechAssetMonitorHelper : NSObject
{
    double _lastVoiceAssetUpdateTime;
}

+ (id)sharedInstance;
- (void)_checkForAssetUpdatesNowAndNextWeek;
- (void)_monitorSpeechAssetChanges;
- (void)updateAvailableSpeechAssets;
- (void)_clientUpdateAvailableSpeechAssets;
- (void)_checkClientForUpdates:(_Bool)arg1;
- (id)_speechAssetUpdaterClient;
- (id)speechAssetUpdaterClient;
- (id)init;

@end

