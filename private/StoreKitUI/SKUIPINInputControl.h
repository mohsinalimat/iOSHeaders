//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>
#import <StoreKitUI/UIKeyInput-Protocol.h>

@class NSMutableArray, NSMutableString, NSString, SKUIViewElement, UIColor, UIFont;

@interface SKUIPINInputControl : UIControl <SKUIViewElementView, UIKeyInput>
{
    UIColor *_boxBackgroundColor;
    UIColor *_boxBorderColor;
    UIFont *_font;
    long long _keyboardType;
    NSMutableArray *_labels;
    _Bool _needsLabelReload;
    long long _numberOfCharacters;
    _Bool _secureTextEntry;
    NSMutableString *_text;
    UIColor *_textColor;
    SKUIViewElement *_viewElement;
}

+ (double)_defaultBoxSizeForFont:(id)arg1;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) long long numberOfCharacters; // @synthesize numberOfCharacters=_numberOfCharacters;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) UIColor *boxBorderColor; // @synthesize boxBorderColor=_boxBorderColor;
@property(copy, nonatomic) UIColor *boxBackgroundColor; // @synthesize boxBackgroundColor=_boxBackgroundColor;
- (void).cxx_destruct;
- (void)_setNeedsReloadLayout;
- (void)_sendValueChangeEvents;
- (void)_reloadLabelSubviews;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocorrectionType;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (void)deleteBackward;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long returnKeyType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

