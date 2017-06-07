//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface SFNavigationBarReaderButton : UIButton
{
    UIImageView *_defaultStateImageView;
    UIImageView *_selectedStateImageView;
    UIImageView *_selectedStateGlyphImageView;
    UIColor *_glyphTintColor;
    _Bool _useStandaloneAppearance;
    _Bool _drawsLightGlyph;
    _Bool _prefersResizableBackground;
}

+ (struct CGSize)glyphSize;
@property(nonatomic) _Bool prefersResizableBackground; // @synthesize prefersResizableBackground=_prefersResizableBackground;
@property(nonatomic) _Bool drawsLightGlyph; // @synthesize drawsLightGlyph=_drawsLightGlyph;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setGlyphTintColor:(id)arg1;
- (void)_updateImageViews;
- (_Bool)_usesResizableBackground;
@property(readonly, nonatomic) struct CGSize visibleSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 useStandaloneAppearance:(_Bool)arg2 prefersResizableBackground:(_Bool)arg3;

@end
