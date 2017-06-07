//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIImageView;

@interface CCUIControlCenterSlider : UISlider
{
    UIImageView *_minValueHighlightedImageView;
    UIImageView *_maxValueHighlightedImageView;
    _Bool _adjusting;
}

+ (id)_knobImage;
+ (struct UIEdgeInsets)_edgeInsetsForSliderKnob;
+ (id)_resizableTrackImage;
+ (id)_trackImage;
@property(nonatomic, getter=isAdjusting) _Bool adjusting; // @synthesize adjusting=_adjusting;
- (void).cxx_destruct;
- (void)_updateEffects;
- (void)layoutSubviews;
- (void)_configureHighlightedValueImagesLikeRegularValueImages;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (double)rightValueImageOriginForBounds:(struct CGRect)arg1 andSize:(struct CGSize)arg2;
- (double)leftValueImageOriginForBounds:(struct CGRect)arg1 andSize:(struct CGSize)arg2;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (void)setMaximumValueImage:(id)arg1 cacheKey:(id)arg2;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumValueImage:(id)arg1 cacheKey:(id)arg2;
- (void)setMinimumValueImage:(id)arg1;
- (void)_setTrackImage:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets)_thumbHitEdgeInsets;
- (_Bool)ccuiSupportsDelayedTouchesByContainingScrollViewForGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

