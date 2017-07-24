//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/CAAnimationDelegate-Protocol.h>

@class CAGradientLayer, NSMutableArray, NSString, NSTimer, SBUILegibilityLabel, _UILegibilitySettings;

@interface SBUICallToActionLabel : UIView <CAAnimationDelegate>
{
    _Bool _disablesGradientFadeInAnimation;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_text;
    SBUILegibilityLabel *_label;
    CAGradientLayer *_gradientLayer;
    unsigned long long _state;
    NSTimer *_animationTimer;
    NSMutableArray *_animationCompletionBlocks;
}

@property(retain, nonatomic) NSMutableArray *animationCompletionBlocks; // @synthesize animationCompletionBlocks=_animationCompletionBlocks;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) SBUILegibilityLabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)_executePostAnimationCompletionBlocks;
- (void)_addAnimationCompletionBlockIfNecessary:(CDUnknownBlockType)arg1;
- (void)_fadeInImmediately:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetGradientAndLabelBefore:(_Bool)arg1;
- (void)_runFadeAnimationForFadingOut:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_actuallyRunGradientAnimation;
- (void)_timerTriggered;
- (void)_invalidateGradientAnimationTimer;
- (void)_runGradientAnimation:(_Bool)arg1;
- (void)_preferredTextSizeChanged:(id)arg1;
- (void)_createGradientLayer;
- (id)_fontWithTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 withMaximumFontSizeCategory:(id)arg3;
- (id)_callToActionFont;
- (void)_createLabel;
- (void)_updateLabelTextWithLanguage:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setText:(id)arg1 forLanguage:(id)arg2 animated:(_Bool)arg3;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)cancelFadeInTimerIfNecessary;
- (void)fadeOut;
- (void)fadeInImmediately:(_Bool)arg1;
- (void)fadeIn;
- (double)baselineOffset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

