//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneLibrary/NSObject-Protocol.h>

@class NSArray, TLAlert;

@protocol TLAlertPlaybackBackEndController <NSObject>
- (void)stopPlayingAlerts:(NSArray *)arg1 withOptions:(CDStruct_2418a849)arg2 playbackCompletionType:(long long)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)playAlert:(TLAlert *)arg1 withCompletionHandler:(void (^)(long long, NSError *))arg2;

@optional
- (void)updateAudioVolumeDynamicallyForAlert:(TLAlert *)arg1 toValue:(float)arg2;
- (void)handleActivationAssertionStatusChangeForAlert:(TLAlert *)arg1 updatedStatus:(_Bool)arg2;
@end

