//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class UIImageView;

@interface CKSimpleAcknowledgementGlyphView : CKAcknowledgmentGlyphView
{
    UIImageView *_glyph;
}

@property(retain, nonatomic) UIImageView *glyph; // @synthesize glyph=_glyph;
- (void).cxx_destruct;
- (void)setGlyphColor:(id)arg1;
- (void)layoutSubviews;
- (double)animationDuration;
- (struct CGPoint)glyphOffset;
- (id)glyphImageForType:(long long)arg1 color:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;

@end

