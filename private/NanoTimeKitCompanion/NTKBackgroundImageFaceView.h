//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>

#import <NanoTimeKitCompanion/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, NTKDigitalTimeLabel, NTKEditOption, UIImageView, UIView;

@interface NTKBackgroundImageFaceView : NTKDigitalFaceView <UIGestureRecognizerDelegate>
{
    NTKEditOption *_editOptionFrom;
    UIView *_transitionViewFrom;
    NTKEditOption *_editOptionTo;
    UIView *_transitionViewTo;
    UIView *_animationView;
    UIImageView *_animationMaskImageView;
    _Bool _shouldAdjustLayoutForTimeTravel;
    UIView *_timeTravelDimmingOverlayView;
    UIView *_selectedContentView;
    NTKDigitalTimeLabel *_timeLabel;
    UIView *_zoomMaskView;
    UIImageView *_zoomVignette;
    UIView *_borrowedCircleView;
    UIView *_borrowedTimeView;
    struct CGPoint _timeViewZoomEndingCenter;
    struct CGRect _vignetteZoomStartingBounds;
    struct CGRect _maskZoomStartingBounds;
}

+ (void)animateFadeInLayers:(id)arg1;
+ (void)animateScaleInLayers:(id)arg1;
@property(retain, nonatomic) UIView *borrowedTimeView; // @synthesize borrowedTimeView=_borrowedTimeView;
@property(retain, nonatomic) UIView *borrowedCircleView; // @synthesize borrowedCircleView=_borrowedCircleView;
@property(nonatomic) struct CGRect maskZoomStartingBounds; // @synthesize maskZoomStartingBounds=_maskZoomStartingBounds;
@property(nonatomic) struct CGRect vignetteZoomStartingBounds; // @synthesize vignetteZoomStartingBounds=_vignetteZoomStartingBounds;
@property(nonatomic) struct CGPoint timeViewZoomEndingCenter; // @synthesize timeViewZoomEndingCenter=_timeViewZoomEndingCenter;
@property(retain, nonatomic) UIImageView *zoomVignette; // @synthesize zoomVignette=_zoomVignette;
@property(retain, nonatomic) UIView *zoomMaskView; // @synthesize zoomMaskView=_zoomMaskView;
@property(retain, nonatomic) NTKDigitalTimeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)_removeAllSubviewsFrom:(id)arg1;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_didTransitionToOptionView:(id)arg1;
- (void)_beginTransitionToOption;
- (id)_viewForEditOption:(id)arg1;
- (id)_selectedContentView;
- (_Bool)_timeLabelUsesLegibility;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (_Bool)_wantsTimeTravelStatusModule;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldAdjustLayoutForTimeTravel;
- (double)_timeTravelYAdjustment;
- (_Bool)_supportsTimeScrubbing;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_cleanupAfterOptionTransitionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)setViewMode:(long long)arg1;
- (void)_applyForegroundZoomAlpha:(double)arg1;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (_Bool)_needsVignette;
- (_Bool)_usesCustomZoom;
- (double)_parallaxScaleFactor;
- (id)_animationImageView;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (id)_digitalTimeLabelStyle;
- (id)_updateFontInStyle:(id)arg1 monospace:(_Bool)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_bringForegroundViewsToFront;
- (void)_layoutForegroundContainerView;
- (_Bool)_needsForegroundContainerView;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

