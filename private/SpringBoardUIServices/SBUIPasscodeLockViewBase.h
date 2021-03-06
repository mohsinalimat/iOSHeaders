//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/SBFLegibilitySettingsProviderDelegate-Protocol.h>
#import <SpringBoardUIServices/SBUIBiometricResourceObserver-Protocol.h>
#import <SpringBoardUIServices/SBUIPasscodeLockView-Protocol.h>
#import <SpringBoardUIServices/SBUIPasscodeLockView_Internal-Protocol.h>

@class NSMutableSet, NSString, NSTimer, PKGlyphView, SBUIButton, SBUIPasscodeEntryField, UIColor, UILabel, UINotificationFeedbackGenerator, _UIKeyboardFeedbackGenerator, _UILegibilitySettings;
@protocol BSInvalidatable, SBFLegibilitySettingsProvider, SBUIBiometricResource, SBUIPasscodeLockViewDelegate;

@interface SBUIPasscodeLockViewBase : UIView <SBUIBiometricResourceObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeLockView_Internal, SBUIPasscodeLockView>
{
    _Bool _needStatusTextUpdate;
    _Bool _playsKeypadSounds;
    _Bool _showsEmergencyCallButton;
    _Bool _showsCancelButton;
    _Bool _showsStatusField;
    _Bool _becameVisible;
    _Bool _usesBiometricPresentation;
    double _backgroundAlpha;
    UIColor *_customBackgroundColor;
    NSString *_unlockDestination;
    id <SBFLegibilitySettingsProvider> _backgroundLegibilitySettingsProvider;
    double _currentBacklightLevel;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _allowsStatusTextUpdatingOnResignFirstResponder;
    long long _passcodeLockViewState;
    _Bool _isBiometricAuthenticationAllowed;
    unsigned long long _biometricMatchingState;
    id <BSInvalidatable> _biometricMatchingAssertion;
    NSMutableSet *_biometricMatchingEnabledOverrideReasons;
    _Bool _deviceHasBeenUnlockedOnceSinceBoot;
    _Bool _pendingBioUnlock;
    int _currentPendingBioUnlockToken;
    UIView *_passcodeAuthenticationView;
    UIView *_biometricAuthenticationView;
    SBUIButton *_usePasscodeButton;
    PKGlyphView *_touchIDGlyphView;
    SBUIButton *_emergencyCallButton;
    SBUIButton *_cancelButton;
    UILabel *_biometricReason;
    _Bool _screenOn;
    _Bool _shouldResetForFailedPasscodeAttempt;
    int _style;
    id <SBUIPasscodeLockViewDelegate> _delegate;
    SBUIPasscodeEntryField *_entryField;
    double _luminanceBoost;
    id <SBUIBiometricResource> _biometricResource;
    _UIKeyboardFeedbackGenerator *_keyboardFeedbackBehavior;
    unsigned long long _statusState;
    NSTimer *_screenBrightnessChangedTimer;
    UINotificationFeedbackGenerator *_authenticationFeedbackBehavior;
    NSString *_statusText;
    NSString *_statusSubtitleText;
}

@property(copy, nonatomic, getter=_statusSubtitleText, setter=_setStatusSubtitleText:) NSString *statusSubtitleText; // @synthesize statusSubtitleText=_statusSubtitleText;
@property(copy, nonatomic, getter=_statusText, setter=_setStatusText:) NSString *statusText; // @synthesize statusText=_statusText;
@property(retain, nonatomic) UINotificationFeedbackGenerator *authenticationFeedbackBehavior; // @synthesize authenticationFeedbackBehavior=_authenticationFeedbackBehavior;
@property(retain, nonatomic) NSTimer *screenBrightnessChangedTimer; // @synthesize screenBrightnessChangedTimer=_screenBrightnessChangedTimer;
@property(nonatomic, getter=_statusState, setter=_setStatusState:) unsigned long long statusState; // @synthesize statusState=_statusState;
@property(nonatomic) _Bool shouldResetForFailedPasscodeAttempt; // @synthesize shouldResetForFailedPasscodeAttempt=_shouldResetForFailedPasscodeAttempt;
@property(retain, nonatomic) _UIKeyboardFeedbackGenerator *keyboardFeedbackBehavior; // @synthesize keyboardFeedbackBehavior=_keyboardFeedbackBehavior;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) id <SBUIBiometricResource> biometricResource; // @synthesize biometricResource=_biometricResource;
@property(retain, nonatomic) UIView *biometricAuthenticationView; // @synthesize biometricAuthenticationView=_biometricAuthenticationView;
@property(retain, nonatomic) UIView *passcodeAuthenticationView; // @synthesize passcodeAuthenticationView=_passcodeAuthenticationView;
@property(readonly, nonatomic) long long passcodeLockViewState; // @synthesize passcodeLockViewState=_passcodeLockViewState;
@property(copy, nonatomic) NSString *unlockDestination; // @synthesize unlockDestination=_unlockDestination;
@property(nonatomic, getter=isBiometricAuthenticationAllowed) _Bool biometricAuthenticationAllowed; // @synthesize biometricAuthenticationAllowed=_isBiometricAuthenticationAllowed;
@property(nonatomic, getter=isScreenOn) _Bool screenOn; // @synthesize screenOn=_screenOn;
@property(nonatomic, getter=_luminosityBoost, setter=_setLuminosityBoost:) double luminosityBoost; // @synthesize luminosityBoost=_luminanceBoost;
@property(retain, nonatomic) id <SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider; // @synthesize backgroundLegibilitySettingsProvider=_backgroundLegibilitySettingsProvider;
@property(retain, nonatomic, getter=_entryField, setter=_setEntryField:) SBUIPasscodeEntryField *_entryField; // @synthesize _entryField;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) _Bool usesBiometricPresentation; // @synthesize usesBiometricPresentation=_usesBiometricPresentation;
@property(nonatomic) _Bool showsStatusField; // @synthesize showsStatusField=_showsStatusField;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) _Bool showsEmergencyCallButton; // @synthesize showsEmergencyCallButton=_showsEmergencyCallButton;
@property(nonatomic) __weak id <SBUIPasscodeLockViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)biometricResource:(id)arg1 matchingEnabledDidChange:(_Bool)arg2;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)_updateStatusTextForBioEvent:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_notifyDelegatePasscodeEnteredViaMesa;
- (void)_handleBiometricAuthentication;
- (void)_resetForFailedBiometricAttempt;
- (void)_resetStatusText;
- (void)_evaluateLuminance;
- (double)_luminanceBoostFromDisplayBrightness;
- (double)_luminanceBoostFromLegibility;
- (void)_screenBrightnessReallyDidChange;
- (void)_clearBrightnessChangeTimer;
- (void)_noteScreenBrightnessDidChange;
- (void)_playAuthenticationFeedbackForSuccess:(_Bool)arg1 jiggleLock:(_Bool)arg2;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(_Bool)arg1;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (id)_defaultStatusText;
- (void)_setStatusState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)_statusStateForLockoutState:(unsigned long long)arg1;
- (void)updateStatusTextAnimated:(_Bool)arg1;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(_Bool)arg3;
- (void)setNeedsStatusTextUpdate;
- (void)_updateStatusStateForLockoutIfNecessaryAnimatedly:(_Bool)arg1;
- (void)_sendDelegateKeypadKeyUp;
- (void)_sendDelegateKeypadKeyDown;
- (void)_luminanceBoostDidChange;
- (void)_setLegibilitySettings:(id)arg1;
- (_Bool)_isBoundsPortraitOriented;
- (long long)_orientation;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)resignFirstResponder;
- (void)becomeActiveWithAnimationSettings:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)_overrideBiometricMatchingEnabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_setBiometricMatchingState:(unsigned long long)arg1;
- (void)_evaluateBiometricMatchingState;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
- (void)setKeypadVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool playsKeypadSounds; // @dynamic playsKeypadSounds;
@property(readonly, nonatomic) NSString *passcode; // @dynamic passcode;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(_Bool)arg1;
- (void)reset;
- (void)resetForScreenOff;
- (void)resetForFailedPasscode;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (void)_emergencyCallButtonHit;
- (void)_cancelButtonHit;
- (void)_usePasscodeButtonHit;
- (void)updateForTransitionToPasscodeView:(_Bool)arg1;
- (void)willTransitionToPasscodeView;
- (void)_setPasscodeLockViewState:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

