//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UITableViewCellActionButton.h>

@class CKAudioProgressView, UILabel;

@interface CKAudioProgressTableViewActionButton : _UITableViewCellActionButton
{
    CKAudioProgressView *_progressView;
    double _duration;
    double _currentProgress;
    double _lastProgress;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) double lastProgress; // @synthesize lastProgress=_lastProgress;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) CKAudioProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)didStop:(id)arg1;
- (void)didFinish:(id)arg1;
- (void)_updateTime:(id)arg1;
- (void)_playButtonHit:(id)arg1;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)labelSizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

