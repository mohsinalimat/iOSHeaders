//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAFilter, CAShapeLayer, PKShapeView, UILabel, UIView;

@interface PKPaymentButton : UIButton
{
    CAShapeLayer *_layer;
    long long _style;
    long long _type;
    UIView *_container;
    UILabel *_buyLabel;
    CAFilter *_highlightFilter;
    _Bool _highlighted;
    struct CGSize _boundsSize;
    PKShapeView *_maskView;
    double _fontRatio;
}

+ (id)titleForType:(long long)arg1;
+ (id)buttonWithType:(long long)arg1 style:(long long)arg2;
+ (Class)layerClass;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)_createHighlightFilterIfNecessary;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)applyAccessibilityValues;
- (id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

