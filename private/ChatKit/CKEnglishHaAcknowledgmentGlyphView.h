//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class UIImageView;

@interface CKEnglishHaAcknowledgmentGlyphView : CKAcknowledgmentGlyphView
{
    UIImageView *_h1;
    UIImageView *_a1;
    UIImageView *_h2;
    UIImageView *_a2;
}

@property(retain, nonatomic) UIImageView *a2; // @synthesize a2=_a2;
@property(retain, nonatomic) UIImageView *h2; // @synthesize h2=_h2;
@property(retain, nonatomic) UIImageView *a1; // @synthesize a1=_a1;
@property(retain, nonatomic) UIImageView *h1; // @synthesize h1=_h1;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)animateWithDelay:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGPoint)glyphOffset;
- (long long)acknowledgmentType;
- (void)setGlyphColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

