//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class AVTimeFormatter, CADisplayLink, MPCPlayerResponse, NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel, UILayoutGuide, UIView;

@interface MediaControlsTimeControl : UIControl
{
    NSArray *_defaultConstraints;
    NSArray *_trackingConstraints;
    NSArray *_initialConstraints;
    NSLayoutConstraint *_knobViewXConstraint;
    CADisplayLink *_displayLink;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    double _lastRecordedTime;
    double _currentTimeInTrack;
    NSString *_elapsedTime;
    NSString *_remainingTime;
    _Bool _transitioning;
    _Bool _empty;
    _Bool _timeControlOnScreen;
    _Bool _currentlyTracking;
    _Bool _live;
    long long _style;
    MPCPlayerResponse *_response;
    UIView *_elapsedTrack;
    UIView *_remainingTrack;
    UIView *_knobView;
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    UILabel *_liveLabel;
    UIImageView *_liveBackground;
    UILayoutGuide *_trackLayoutGuide;
    double _sliderValue;
    CDStruct_98c298d5 _durationSnapshot;
}

@property(nonatomic, getter=isLive) _Bool live; // @synthesize live=_live;
@property(nonatomic, getter=isCurrentlyTracking) _Bool currentlyTracking; // @synthesize currentlyTracking=_currentlyTracking;
@property(nonatomic) double sliderValue; // @synthesize sliderValue=_sliderValue;
@property(retain, nonatomic) UILayoutGuide *trackLayoutGuide; // @synthesize trackLayoutGuide=_trackLayoutGuide;
@property(retain, nonatomic) UIImageView *liveBackground; // @synthesize liveBackground=_liveBackground;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(retain, nonatomic) UIView *knobView; // @synthesize knobView=_knobView;
@property(retain, nonatomic) UIView *remainingTrack; // @synthesize remainingTrack=_remainingTrack;
@property(retain, nonatomic) UIView *elapsedTrack; // @synthesize elapsedTrack=_elapsedTrack;
@property(nonatomic, getter=isTimeControlOnScreen) _Bool timeControlOnScreen; // @synthesize timeControlOnScreen=_timeControlOnScreen;
@property(nonatomic) CDStruct_98c298d5 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateDisplayLinkPause;
- (void)_displayLinkTick:(id)arg1;
- (void)_updateStyle;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)updateLabelAvoidance;
- (void)_updateLabels:(double)arg1 withRemainingDuration:(double)arg2;
- (void)_updateLabels:(CDStruct_98c298d5)arg1 withTargetTimestamp:(double)arg2;
- (void)_updateSliderPosition;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

