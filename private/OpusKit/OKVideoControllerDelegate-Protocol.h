//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class AVPlayerItem, OKVideoPlayerController;

@protocol OKVideoControllerDelegate <NSObject>
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 didFailToPlayItem:(AVPlayerItem *)arg2;
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 didFinishPlayingItem:(AVPlayerItem *)arg2;
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 didStartPlayingItem:(AVPlayerItem *)arg2;

@optional
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 bufferingStateDidChange:(unsigned long long)arg2;
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 stateDidChange:(unsigned long long)arg2;
- (void)videoPlayerControllerIsReadyToPlay:(OKVideoPlayerController *)arg1;
@end

