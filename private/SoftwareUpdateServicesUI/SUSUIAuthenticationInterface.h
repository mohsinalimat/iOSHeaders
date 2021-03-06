//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServicesUI/SUKeybagInterfaceObserver-Protocol.h>

@class NSString, NSUserDefaults, SUKeybagInterface;

@interface SUSUIAuthenticationInterface : NSObject <SUKeybagInterfaceObserver>
{
    NSUserDefaults *_defaults;
    SUKeybagInterface *_keybag;
    _Bool _isController;
    _Bool _isPasscodeLocked;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isController; // @synthesize isController=_isController;
- (void).cxx_destruct;
- (void)_incrementFailedAttemptsCount;
- (unsigned long long)_currentFailedAttemptsCount;
- (void)keybagInterface:(id)arg1 passcodeLockedStateDidChange:(_Bool)arg2;
- (void)_setPasscodeLocked:(_Bool)arg1;
@property(nonatomic, getter=_numberOfFailedAuthenticationAttempts, setter=_setNumberOfFailedAuthenticationAttempts:) unsigned long long numberOfFailedAuthenticationAttempts;
- (void)resetAttempts;
- (_Bool)attemptAuthentication:(id)arg1 outBlocked:(_Bool *)arg2;
@property(readonly, nonatomic) _Bool isBlocked;
- (id)initWithKeybag:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

