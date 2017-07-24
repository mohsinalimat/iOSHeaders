//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIView;
@protocol CAMZoomButtonDelegate;

@interface CAMZoomButton : UIControl
{
    id <CAMZoomButtonDelegate> _delegate;
    double _zoomFactor;
    long long _orientation;
    long long __buttonSize;
    UIView *__contentContainerView;
    UILabel *__zoomFactorLabel;
    UIImageView *__circleImageView;
    UIImageView *__backgroundImageView;
    struct UIEdgeInsets _tappableEdgeInsets;
    struct CGAffineTransform _highlightingTransform;
}

+ (id)textForZoomFactor:(double)arg1;
@property(readonly, nonatomic) UIImageView *_backgroundImageView; // @synthesize _backgroundImageView=__backgroundImageView;
@property(readonly, nonatomic) UIImageView *_circleImageView; // @synthesize _circleImageView=__circleImageView;
@property(readonly, nonatomic) UILabel *_zoomFactorLabel; // @synthesize _zoomFactorLabel=__zoomFactorLabel;
@property(readonly, nonatomic) UIView *_contentContainerView; // @synthesize _contentContainerView=__contentContainerView;
@property(nonatomic, setter=_setButtonSize:) long long _buttonSize; // @synthesize _buttonSize=__buttonSize;
@property(nonatomic, setter=_setHighlightingTransform:) struct CGAffineTransform highlightingTransform; // @synthesize highlightingTransform=_highlightingTransform;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(nonatomic) __weak id <CAMZoomButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_fontSizeForButtonSize:(long long)arg1;
- (double)_backgroundImageDiameterForButtonSize:(long long)arg1;
- (double)_circleLineWidthForButtonSize:(long long)arg1;
- (double)_circleImageDiameterForButtonSize:(long long)arg1;
- (long long)_buttonSizeForContentSize:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (id)_createCircleImageForButtonSize:(long long)arg1;
- (id)_createBackgroundImageForButtonSize:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateZoomFactorLabel;
- (void)_performHighlightAnimation;
- (struct CGAffineTransform)_targetTransformForHighlighted:(_Bool)arg1 orientation:(long long)arg2;
- (struct CGAffineTransform)_highlightingTransformForHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateForButtonSize;
- (void)_commonCAMZoomButtonInitialization;

@end

