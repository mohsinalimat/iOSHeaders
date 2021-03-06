//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMZoomDialDotsView, NSArray, UIImageView;

@interface CAMZoomDial : UIView
{
    _Bool _shouldShowLabelAt2x;
    _Bool _shouldDisableValuesBelow2x;
    _Bool _expanded;
    _Bool __backgroundViewUpdateNeeded;
    _Bool __labelAndDotUpdateNeeded;
    double _minimumZoomFactor;
    double _maximumZoomFactor;
    double _zoomFactor;
    double _contractionDistance;
    long long _orientation;
    UIImageView *__backgroundView;
    UIView *__dotAndLabelContainerView;
    NSArray *__labels;
    CAMZoomDialDotsView *__dotsFromMinimumZoomFactor;
    CAMZoomDialDotsView *__dotsFrom2x;
    double __spacingMultiplier;
}

@property(nonatomic, getter=_isLabelAndDotUpdateNeeded, setter=_setLabelAndDotUpdateNeeded:) _Bool _labelAndDotUpdateNeeded; // @synthesize _labelAndDotUpdateNeeded=__labelAndDotUpdateNeeded;
@property(nonatomic, getter=_isBackgroundViewUpdateNeeded, setter=_setBackgroundViewUpdateNeeded:) _Bool _backgroundViewUpdateNeeded; // @synthesize _backgroundViewUpdateNeeded=__backgroundViewUpdateNeeded;
@property(nonatomic, setter=_setSpacingMultiplier:) double _spacingMultiplier; // @synthesize _spacingMultiplier=__spacingMultiplier;
@property(readonly, nonatomic) CAMZoomDialDotsView *_dotsFrom2x; // @synthesize _dotsFrom2x=__dotsFrom2x;
@property(readonly, nonatomic) CAMZoomDialDotsView *_dotsFromMinimumZoomFactor; // @synthesize _dotsFromMinimumZoomFactor=__dotsFromMinimumZoomFactor;
@property(retain, nonatomic, setter=_setLabels:) NSArray *_labels; // @synthesize _labels=__labels;
@property(readonly, nonatomic) UIView *_dotAndLabelContainerView; // @synthesize _dotAndLabelContainerView=__dotAndLabelContainerView;
@property(readonly, nonatomic) UIImageView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) double contractionDistance; // @synthesize contractionDistance=_contractionDistance;
@property(nonatomic) _Bool shouldDisableValuesBelow2x; // @synthesize shouldDisableValuesBelow2x=_shouldDisableValuesBelow2x;
@property(nonatomic) _Bool shouldShowLabelAt2x; // @synthesize shouldShowLabelAt2x=_shouldShowLabelAt2x;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(nonatomic) double maximumZoomFactor; // @synthesize maximumZoomFactor=_maximumZoomFactor;
@property(nonatomic) double minimumZoomFactor; // @synthesize minimumZoomFactor=_minimumZoomFactor;
- (void).cxx_destruct;
- (double)_labelRotationAngleForOrientation;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (id)_createDotImage;
- (id)_createBackgroundImage;
- (void)_updateBackroundImageViewIfNeeded;
- (void)removeInternalAnimationsAndSetToCurrentPresentationValues:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGPoint)_dotCenterForOffsetAngle:(double)arg1 assumeExpanded:(_Bool)arg2;
- (struct CGPoint)_dotCenterForZoomFactor:(double)arg1 assumeExpanded:(_Bool)arg2 relativeToCurrentZoomFactor:(_Bool)arg3;
- (struct CGPoint)dotCenterForZoomFactor:(double)arg1 assumeExpanded:(_Bool)arg2;
- (double)offsetAngleForPoint:(struct CGPoint)arg1;
- (double)zoomFactorForOffsetAngle:(double)arg1;
- (double)_offsetAngleForZoomFactor:(double)arg1 relativeToCurrentZoomFactor:(_Bool)arg2;
- (double)offsetAngleForZoomFactor:(double)arg1;
- (double)_signedAngleDeltaForZoomRange;
- (double)_borderStrokeWidth;
@property(readonly, nonatomic) double dialBorderWidth;
@property(readonly, nonatomic) double dotCenterInset;
@property(readonly, nonatomic) struct CGPoint dialCenter;
- (double)_fullRadiusInset;
- (double)_fullRadius;
- (void)_updateDots;
- (void)_updateLabels;
- (void)_updateLabelsAndDotsIfNeeded;
@property(readonly, nonatomic) double _radiusDelta;
- (void)_updateViewVisibility;
- (double)zoomFactorForNormalizedValue:(double)arg1;
- (double)normalizedValueForZoomFactor:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

