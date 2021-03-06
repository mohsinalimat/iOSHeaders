//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;

@interface SXVideoProgressView : UIView
{
    double _timeElapsed;
    double _duration;
    double _loadingProgress;
    UIView *_loadingProgressView;
    UIVisualEffectView *_playbackProgressView;
}

@property(readonly, nonatomic) UIVisualEffectView *playbackProgressView; // @synthesize playbackProgressView=_playbackProgressView;
@property(readonly, nonatomic) UIView *loadingProgressView; // @synthesize loadingProgressView=_loadingProgressView;
@property(nonatomic) double loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timeElapsed; // @synthesize timeElapsed=_timeElapsed;
- (void).cxx_destruct;
- (void)animatePlaybackProgressWithFrame:(struct CGRect)arg1;
- (void)animateToStart;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)frameForProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

