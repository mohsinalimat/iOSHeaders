//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, PGPlaybackProgress, PGTimer, _PGPlaybackProgressIndicatorRangesView;

@interface PGPlaybackProgressIndicator : UIView
{
    PGTimer *_playbackProgressTimer;
    double _currentProgress;
    UIView *_containerView;
    _PGPlaybackProgressIndicatorRangesView *_loadedTimeRangesView;
    _PGPlaybackProgressIndicatorRangesView *_playbackProgressView;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
}

@property(retain, nonatomic) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property(retain, nonatomic) PGPlaybackProgress *playbackProgress; // @synthesize playbackProgress=_playbackProgress;
- (void).cxx_destruct;
- (void)_updateLoadedTimeRangesMaskViewMaskRanges;
- (void)_updatePlaybackProgressMaskViewMaskRanges;
- (void)_updatePlaybackProgressTimer;
- (struct CGSize)intrinsicContentSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

