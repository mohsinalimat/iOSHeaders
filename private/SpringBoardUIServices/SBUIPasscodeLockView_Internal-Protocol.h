//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockView-Protocol.h>

@class NSString;

@protocol SBUIPasscodeLockView_Internal <SBUIPasscodeLockView>
- (void)_overrideBiometricMatchingEnabled:(_Bool)arg1 forReason:(NSString *)arg2;

@optional
- (void)_noteAppearingForSmartCoverUnlock:(_Bool)arg1;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(_Bool)arg1;
@end

