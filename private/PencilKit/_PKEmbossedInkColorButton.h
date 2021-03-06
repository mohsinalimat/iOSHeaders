//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <PencilKit/PKInkColorButton-Protocol.h>

@class UIColor, UIImageView;

@interface _PKEmbossedInkColorButton : UIButton <PKInkColorButton>
{
    _Bool _isCompact;
    _Bool _isUsedOnDarkBackground;
    UIColor *_color;
    UIImageView *_colorImageView;
    UIImageView *_embossImageView;
}

+ (id)embossOverlayImageForColor:(id)arg1 selected:(_Bool)arg2 isCompact:(_Bool)arg3;
+ (id)colorFillImageIsCompact:(_Bool)arg1;
+ (_Bool)isColorBlack:(id)arg1;
+ (_Bool)isColorWhite:(id)arg1;
+ (id)buttonWithColor:(id)arg1 isCompact:(_Bool)arg2;
@property(retain, nonatomic) UIImageView *embossImageView; // @synthesize embossImageView=_embossImageView;
@property(retain, nonatomic) UIImageView *colorImageView; // @synthesize colorImageView=_colorImageView;
@property(nonatomic) _Bool isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property(nonatomic) _Bool isCompact; // @synthesize isCompact=_isCompact;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end

