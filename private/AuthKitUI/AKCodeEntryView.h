//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AuthKitUI/UIKeyInput-Protocol.h>

@class NSArray, NSMutableString, NSString, UILabel, UITapGestureRecognizer;

@interface AKCodeEntryView : UIView <UIKeyInput>
{
    NSMutableString *_stringValue;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _passcodeFieldDisabled;
    NSArray *_generatorFields;
    NSArray *_activeConstraints;
}

@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) NSArray *generatorFields; // @synthesize generatorFields=_generatorFields;
- (void).cxx_destruct;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
- (void)setPasscodeFieldDisabled:(_Bool)arg1;
- (void)passcodeFieldTapped:(id)arg1;
- (void)deleteBackward;
@property(readonly, nonatomic) _Bool hasText;
- (void)insertText:(id)arg1;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
@property(copy, nonatomic) NSString *stringValue;
- (void)emitCodeEnteredNotification;
@property(readonly, nonatomic) UILabel *firstGeneratorField;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)updateConstraints;
- (void)_syncStringValueToLabels;
- (void)_updateFonts:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

