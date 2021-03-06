//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImageView, UILabel;

@interface SKStarRatingControl : UIControl
{
    UIImageView *_backgroundImageView;
    UILabel *_explanationLabel;
    UIImageView *_foregroundImageView;
    struct CGSize _hitPadding;
    double _starWidth;
    struct CGPoint _trackingLastPoint;
    struct CGPoint _trackingStartPoint;
    float _value;
}

@property(nonatomic) double starWidth; // @synthesize starWidth=_starWidth;
- (void)_updateValueForPoint:(struct CGPoint)arg1;
- (id)_newExplanationLabel;
- (struct CGRect)_foregroundImageClipBounds;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)canHandleSwipes;
- (_Bool)_alwaysHandleScrollerMouseEvent;
@property(nonatomic) float value;
@property(copy, nonatomic) NSString *explanationText;
- (void)setHitPadding:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2;

@end

