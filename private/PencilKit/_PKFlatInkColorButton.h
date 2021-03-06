//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <PencilKit/PKInkColorButton-Protocol.h>

@class CAShapeLayer, UIColor;

@interface _PKFlatInkColorButton : UIButton <PKInkColorButton>
{
    _Bool _isCompact;
    _Bool _isUsedOnDarkBackground;
    UIColor *_color;
    CAShapeLayer *_fillShapeLayer;
    CAShapeLayer *_strokeShapeLayer;
}

+ (_Bool)isColorBlack:(id)arg1;
+ (_Bool)isColorWhite:(id)arg1;
+ (id)strokeColorForColor:(id)arg1 isUsedOnDarkBackground:(_Bool)arg2;
+ (id)pathForStrokeShapeLayerWithSwatchRect:(struct CGRect)arg1 selected:(_Bool)arg2 color:(id)arg3 isUsedOnDarkBackground:(_Bool)arg4;
+ (id)pathForFillShapeLayerWithSwatchRect:(struct CGRect)arg1 selected:(_Bool)arg2;
+ (id)buttonWithColor:(id)arg1 isCompact:(_Bool)arg2;
@property(retain, nonatomic) CAShapeLayer *strokeShapeLayer; // @synthesize strokeShapeLayer=_strokeShapeLayer;
@property(retain, nonatomic) CAShapeLayer *fillShapeLayer; // @synthesize fillShapeLayer=_fillShapeLayer;
@property(nonatomic) _Bool isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property(nonatomic) _Bool isCompact; // @synthesize isCompact=_isCompact;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end

