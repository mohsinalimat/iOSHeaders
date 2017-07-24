//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

#import <ChatKit/ISWrappedAVPlayerDelegate-Protocol.h>

@class CKMovieMediaObject, ISVideoPlayerUIView, ISWrappedAVPlayer, NSString, UIImageView;

@interface CKAutoloopMovieBalloonView : CKImageBalloonView <ISWrappedAVPlayerDelegate>
{
    _Bool _isMuted;
    CKMovieMediaObject *_mediaObject;
    ISVideoPlayerUIView *_videoPlayer;
    ISWrappedAVPlayer *_avPlayer;
    UIImageView *_muteButton;
}

+ (_Bool)isEnabled;
+ (Class)VideoPlayerUIViewClass;
+ (Class)AVPlayerClass;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(retain, nonatomic) UIImageView *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) ISWrappedAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) ISVideoPlayerUIView *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) CKMovieMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void).cxx_destruct;
- (void)avPlayerDidDeallocate;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (void)tapGestureRecognized:(id)arg1;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

