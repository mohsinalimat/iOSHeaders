//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/AVAudioPlayerDelegate-Protocol.h>

@class AVAudioPlayer, AVPlayer, AVPlayerItem, NSString;
@protocol CKInternalAudioPlayerDelegate;

@interface CKInternalAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_avAudioPlayer;
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    long long _avPlayerState;
    _Bool _avPlayerPrepareRequested;
    _Bool _avPlayerPlayRequested;
    long long _playerType;
    id <CKInternalAudioPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <CKInternalAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long playerType; // @synthesize playerType=_playerType;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)_notifyPlayerDidPrepareAudioFileSuccessfully:(_Bool)arg1;
- (void)_notifyPlayerDidFinishSuccessfully:(_Bool)arg1;
- (void)_handleAVPlayerItemStateChange;
- (void)_playerItemDidEndNotification:(id)arg1;
- (void)dealloc;
- (void)prepareToPlay;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) float volume;
- (void)pause;
- (void)stop;
@property(readonly) double deviceCurrentTime;
- (_Bool)_playAtTime:(double)arg1;
- (_Bool)playAtTime:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithContentsOfURL:(id)arg1 playerType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

