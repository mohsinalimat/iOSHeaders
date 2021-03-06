//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKGlyphViewDelegate-Protocol.h>

@class NSString, PKGlyphView, UILabel;
@protocol PKPassPaymentPayStateViewDelegate;

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate>
{
    long long _style;
    double _glyphViewPadding;
    double _labelTopPadding;
    _Bool _touchRecognizingHint;
    _Bool _persistentEmulationHint;
    _Bool _accessPass;
    long long _state;
    PKGlyphView *_glyph;
    UILabel *_label;
    double _labelAlpha;
    id <PKPassPaymentPayStateViewDelegate> _delegate;
}

@property(nonatomic) id <PKPassPaymentPayStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool accessPass; // @synthesize accessPass=_accessPass;
@property(nonatomic) _Bool persistentEmulationHint; // @synthesize persistentEmulationHint=_persistentEmulationHint;
@property(nonatomic) _Bool touchRecognizingHint; // @synthesize touchRecognizingHint=_touchRecognizingHint;
@property(nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) PKGlyphView *glyph; // @synthesize glyph=_glyph;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)glyphView:(id)arg1 revealingCheckmark:(_Bool)arg2;
- (void)_configureLayoutMetrics;
- (id)_attributedTextWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)_attributedTextWithTitle:(id)arg1;
- (id)_textForState:(long long)arg1 textOverride:(id)arg2;
- (_Bool)_canEmphasizeState:(long long)arg1;
- (void)emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2;
- (void)_applyStatePreservingGlyphState:(_Bool)arg1 overridingText:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setState:(long long)arg1 preservingGlyphState:(_Bool)arg2 overridingText:(id)arg3 animated:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_canPreserveGlyphForState:(long long)arg1;
- (long long)_defaultGlyphStateForState:(long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

