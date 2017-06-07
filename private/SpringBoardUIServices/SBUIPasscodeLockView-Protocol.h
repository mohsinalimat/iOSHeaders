//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class NSString, UIColor;
@protocol SBFLegibilitySettingsProvider, SBUIPasscodeLockViewDelegate;

@protocol SBUIPasscodeLockView <NSObject>
@property(nonatomic) unsigned long long biometricMatchMode;
@property(nonatomic, getter=isScreenOn) _Bool screenOn;
@property(retain, nonatomic) id <SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider;
@property(retain, nonatomic) UIColor *customBackgroundColor;
@property(nonatomic) double backgroundAlpha;
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) _Bool showsEmergencyCallButton;
@property(nonatomic) _Bool showsStatusField;
@property(nonatomic) _Bool playsKeypadSounds;
@property(nonatomic, getter=isBiometricAuthenticationAllowed) _Bool biometricAuthenticationAllowed;
@property(readonly, nonatomic) NSString *passcode;
@property(readonly, nonatomic) int style;
@property(nonatomic) __weak id <SBUIPasscodeLockViewDelegate> delegate;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(_Bool)arg1;
- (void)updateStatusText:(NSString *)arg1 subtitle:(NSString *)arg2 animated:(_Bool)arg3;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(void (^)(void))arg1;
- (void)resetForFailedMesaAttemptWithStatusText:(NSString *)arg1 andSubtitle:(NSString *)arg2;
- (void)reset;
- (void)resetForScreenOff;
- (void)resetForFailedPasscode;
@end

