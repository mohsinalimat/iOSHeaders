//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>

#import <SpringBoardUIServices/SBUIPasscodeEntryFieldDelegate-Protocol.h>

@class NSString, SBPasscodeKeyboard, SBUIAlphanumericPasscodeEntryField, SBUIRingViewLabelButton, UILabel, UIView;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate>
{
    SBPasscodeKeyboard *_keyboard;
    SBUIAlphanumericPasscodeEntryField *_alphaEntryField;
    UIView *_statusFieldBackground;
    SBUIRingViewLabelButton *_emergencyCallButton;
    _Bool _wasMinimizedWhenAnimationStarted;
    _Bool _previousKeyboardShowedInlineCandidates;
    _Bool _disableAnimationsDuringMinMax;
    _Bool _triedToMinMaxWhileRotating;
    _Bool _isAnimating;
    _Bool _usesLightStyle;
    UILabel *_statusField;
    UILabel *_statusSubtitleView;
}

@property(retain, nonatomic) UILabel *statusSubtitleView; // @synthesize statusSubtitleView=_statusSubtitleView;
@property(retain, nonatomic) UILabel *statusField; // @synthesize statusField=_statusField;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateFont;
- (void)_layoutStatusView;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(_Bool)arg3;
- (void)_handleDidRotateNotification:(id)arg1;
- (void)_handleWillAnimateNotification:(id)arg1;
- (void)_handleWillRotateNotification:(id)arg1;
- (double)_largeTextEmergencyButtonMaxWidth;
- (double)_statusTitleWidth;
- (double)_statusFieldHeightWithWidth:(double)arg1;
- (double)_keyboardToEntryFieldOffset;
- (struct CGRect)_keyboardFrameForInterfaceOrientation:(long long)arg1;
- (void)_maximize;
- (void)_minimize;
- (void)_setMinimized:(_Bool)arg1;
- (_Bool)_isMinimized;
- (_Bool)_canMinMaxKeyboard;
- (void)_layoutForMinimizationState:(_Bool)arg1;
- (void)_toggleForStatusField;
- (void)_toggleForEmergencyCall;
- (void)_acceptOrCancelReturnKeyPress;
- (id)_newStatusSubtitleView;
- (id)_newStatusField;
- (id)_alphanumericPasscodeEntryField;
- (id)_statusSubtitleView;
- (id)_statusTitleView;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (_Bool)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (void)_notifyDelegatePasscodeEntered;
- (void)_hardwareReturnKeyPressed:(id)arg1;
- (void)_geometryChanged:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (void)transitioningToPasscodeView;
- (void)setShowsStatusField:(_Bool)arg1;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (id)passcode;
- (void)_luminanceBoostDidChange;
- (void)dealloc;
- (id)initWithLightStyle:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

