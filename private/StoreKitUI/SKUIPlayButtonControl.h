//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString, SKUIButtonViewElement, SKUIPlayButtonGradientView, SKUIPlayButtonShapeView, UIColor, UIImage, UIImageView, UIView, _UIBackdropView;

@interface SKUIPlayButtonControl : UIControl
{
    _UIBackdropView *_backdropView;
    UIColor *_backgroundColor;
    long long _backgroundType;
    SKUIPlayButtonShapeView *_borderLayer;
    UIView *_backgroundView;
    UIColor *_bufferProgressIndicatorColor;
    UIColor *_controlForeGroundColor;
    id _bufferProgressIndicatorCompositingFilter;
    UIImage *_customPlayImage;
    UIImage *_customToggleImage;
    _Bool _didInitialHighlightForTouch;
    SKUIPlayButtonGradientView *_gradientBackgroundView;
    NSArray *_gradientColors;
    long long _gradientType;
    UIImageView *_imageView;
    SKUIPlayButtonShapeView *_innerProgressLayer;
    _Bool _indeterminate;
    SKUIPlayButtonShapeView *_outerProgressLayer;
    float _progress;
    SKUIPlayButtonShapeView *_selectedLayer;
    _Bool _showingProgress;
    UIColor *_progressIndicatorColor;
    id _progressIndicatorCompositingFilter;
    _Bool _usesBlurredBackground;
    _Bool _showingPlayIndicator;
    _Bool _showBorder;
    _Bool _showOuterBorder;
    _Bool _disabledButSelectable;
    NSString *_backdropGroupName;
    UIImage *_backgroundImageForBlurring;
    SKUIButtonViewElement *_element;
    struct UIEdgeInsets _bigHitInsets;
}

+ (CDStruct_afa449f9)_calculateStatistics:(struct CGImage *)arg1 withSize:(struct CGSize)arg2;
+ (id)blurColorForImage:(id)arg1 forButtonSize:(struct CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4;
+ (id)blurColorForColor:(id)arg1;
@property(retain, nonatomic) SKUIButtonViewElement *element; // @synthesize element=_element;
@property(nonatomic, getter=isDisabledButSelectable) _Bool disabledButSelectable; // @synthesize disabledButSelectable=_disabledButSelectable;
@property(nonatomic) __weak UIImage *backgroundImageForBlurring; // @synthesize backgroundImageForBlurring=_backgroundImageForBlurring;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) struct UIEdgeInsets bigHitInsets; // @synthesize bigHitInsets=_bigHitInsets;
@property(readonly, nonatomic) _Bool showingProgress; // @synthesize showingProgress=_showingProgress;
@property(copy, nonatomic) UIColor *progressIndicatorColor; // @synthesize progressIndicatorColor=_progressIndicatorColor;
@property(readonly, nonatomic) _Bool showingPlayIndicator; // @synthesize showingPlayIndicator=_showingPlayIndicator;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *customToggleImage; // @synthesize customToggleImage=_customToggleImage;
@property(retain, nonatomic) UIImage *customPlayImage; // @synthesize customPlayImage=_customPlayImage;
@property(readonly, nonatomic) UIColor *controlForeGroundColor; // @synthesize controlForeGroundColor=_controlForeGroundColor;
@property(readonly, nonatomic) long long backgroundType; // @synthesize backgroundType=_backgroundType;
- (void).cxx_destruct;
- (void)_updateEnabledState;
- (void)_updateInnerProgressLayerStroke;
- (void)_useBlurredBackground:(_Bool)arg1;
- (void)_updateBackgroundBlur:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (void)_updateBackdropView;
- (void)_toggleToPlayState;
- (void)_showPlayIndicator:(_Bool)arg1;
- (id)_selectedLayer;
- (id)_simpleBackdrop;
- (id)_playImage;
- (id)_outerProgressLayer;
- (id)_innerProgressLayer;
- (void)_prepareForReuse;
- (id)_newShapeViewWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;
- (id)_imageView;
- (id)_gradientBackgroundView;
- (_Bool)_renderAsEnabled;
- (id)_defaultBackgroundView;
- (id)_classicBackdropView;
- (void)_createGradient:(id)arg1 withGradientType:(long long)arg2;
- (id)_cancelImage;
- (id)_borderLayer;
- (void)_beginIndeterminateAnimation;
- (id)_backgroundView;
- (void)updateOuterProgressLayerStroke;
- (void)showPlayIndicator:(_Bool)arg1 force:(_Bool)arg2;
- (void)showPlayIndicator:(_Bool)arg1;
@property(nonatomic) _Bool showOuterBorder; // @synthesize showOuterBorder=_showOuterBorder;
- (void)setShowBorder:(_Bool)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)setControlForegroundColor:(id)arg1;
- (void)setControlColor:(id)arg1;
- (void)setBufferProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setBackgroundGradientColors:(id)arg1 withGradientType:(long long)arg2;
- (void)setBackgroundType:(long long)arg1;
- (void)setBackgroundImageForBlurring:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (void)refresh;
- (float)playButtonDefaultAlpha;
- (void)playIndicatorDidChange:(_Bool)arg1;
- (id)playImage;
- (id)outerBorderColor;
- (void)hideProgressAnimated:(_Bool)arg1;
- (void)endIndeterminateAnimation;
- (id)defaultBackgroundColor;
- (id)cancelImage;
- (float)buttonCornerRadius;
- (struct CGSize)buttonSize;
- (void)beginIndeterminateAnimation;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)hitRect;
- (struct CGSize)intrinsicContentSize;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

