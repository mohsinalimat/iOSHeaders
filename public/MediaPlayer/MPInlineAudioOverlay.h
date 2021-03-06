//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPPlaybackControlsView.h>

@class MPInlineAudioTransportControls, NSString, UILabel, UIView;
@protocol MPVideoControllerProtocol;

@interface MPInlineAudioOverlay : MPPlaybackControlsView
{
    id <MPVideoControllerProtocol> _videoViewController;
    long long _style;
    UIView *_backgroundView;
    MPInlineAudioTransportControls *_transportControls;
    UILabel *_streamingLabel;
    NSString *_playbackErrorDescription;
    UILabel *_playbackErrorDescriptionLabel;
}

@property(nonatomic) __weak id <MPVideoControllerProtocol> videoViewController; // @synthesize videoViewController=_videoViewController;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *playbackErrorDescription; // @synthesize playbackErrorDescription=_playbackErrorDescription;
- (void).cxx_destruct;
- (struct CGRect)_frameInBackgroundViewForDescriptionLabel:(id)arg1;
- (id)_newDescriptionLabel;
- (void)_updateVisiblePartsForAvailableRoutes;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)setPlayer:(id)arg1;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1;
- (void)reloadView;
- (void)setItem:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (id)newProgressIndicator;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

