//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/UITextFieldDelegate-Protocol.h>

@class NSString, UIFont;
@protocol PSPINEntryViewDelegate;

@protocol PINEntryView <UITextFieldDelegate>
- (void)setShowsOptionsButton:(_Bool)arg1;
- (void)setBlocked:(_Bool)arg1;
- (void)hideFailedAttempts;
- (void)showFailedAttempts:(long long)arg1;
- (void)setDelegate:(id <PSPINEntryViewDelegate>)arg1;
- (_Bool)becomeFirstResponder;
- (void)hidePasscodeField:(_Bool)arg1;
- (void)appendString:(NSString *)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(NSString *)arg1;
- (NSString *)stringValue;
- (double)getCurrentTitleFontSize;
- (void)setTitle:(NSString *)arg1 font:(UIFont *)arg2;
- (void)hideError;
- (void)setPINPolicyString:(NSString *)arg1 visible:(_Bool)arg2;
- (void)showError:(NSString *)arg1 animate:(_Bool)arg2;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;
@end

