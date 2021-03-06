//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKBackgroundImageFaceView.h>

#import <NanoTimeKitCompanion/CLKVideoPlayerViewDelegate-Protocol.h>

@class CLKVideoPlayerView, NSString, UIImageView;

@interface NTKAVFaceBaseView : NTKBackgroundImageFaceView <CLKVideoPlayerViewDelegate>
{
    UIImageView *_posterImageView;
    CLKVideoPlayerView *_videoPlayerView;
}

@property(retain, nonatomic) CLKVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
- (void).cxx_destruct;
- (void)videoPlayerViewDidFinishPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (id)_posterImageView;
- (void)_reset;
- (void)_createVideoPlayerViewIfNeeded;
- (void)pauseVideoPlayerViewIfItExists;
- (void)layoutSubviews;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_beginTransitionToOption;
- (void)_prepareForEditing;
- (void)_transitionToPosterView:(id)arg1;
- (id)_selectedContentView;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

