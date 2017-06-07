//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NCNotificationAction, UIButton, UIStackView, UITextField;
@protocol NCNotificationTextInputViewDelegate;

@interface NCNotificationTextInputView : UIView
{
    id <NCNotificationTextInputViewDelegate> _delegate;
    NCNotificationAction *_action;
    UIStackView *_horizontalStack;
    UITextField *_textField;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIStackView *horizontalStack; // @synthesize horizontalStack=_horizontalStack;
@property(retain, nonatomic) NCNotificationAction *action; // @synthesize action=_action;
@property(nonatomic) __weak id <NCNotificationTextInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)setPlaceholder:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

