//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSLayoutConstraint, UIImage, UIView;

@interface MPUArtworkView : UIImageView
{
    NSLayoutConstraint *_aspectConstraint;
    UIImage *_externalImage;
    UIView *_highlightView;
    _Bool _isDeallocating;
    _Bool _automaticallyApplyAspectConstraints;
    _Bool _dimsWhenHighlighted;
    _Bool _forcesAnimatedUnhighlighting;
    _Bool _displayingPlaceholder;
    UIImage *_placeholderImage;
}

@property(nonatomic, getter=isDisplayingPlaceholder) _Bool displayingPlaceholder; // @synthesize displayingPlaceholder=_displayingPlaceholder;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool forcesAnimatedUnhighlighting; // @synthesize forcesAnimatedUnhighlighting=_forcesAnimatedUnhighlighting;
@property(nonatomic) _Bool dimsWhenHighlighted; // @synthesize dimsWhenHighlighted=_dimsWhenHighlighted;
@property(nonatomic) _Bool automaticallyApplyAspectConstraints; // @synthesize automaticallyApplyAspectConstraints=_automaticallyApplyAspectConstraints;
@property(readonly, nonatomic) UIImage *_externalImage; // @synthesize _externalImage;
- (void).cxx_destruct;
- (void)_updateHighlightViewAnimated:(_Bool)arg1;
- (_Bool)_shouldShowHighlightView;
- (void)_setPlaceholderHidden:(_Bool)arg1;
- (void)_imageDidChange;
@property(nonatomic, getter=_aspectConstraintMultiplier, setter=_setAspectConstraintMultiplier:) double aspectConstraintMultiplier;
@property(readonly, nonatomic) _Bool shouldDisplayPlaceholder;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setImage:(id)arg1;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;

@end

