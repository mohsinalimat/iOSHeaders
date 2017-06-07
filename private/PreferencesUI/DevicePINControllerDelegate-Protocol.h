//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PreferencesUI/NSObject-Protocol.h>

@class DevicePINController, NSError, NSString;

@protocol DevicePINControllerDelegate <NSObject>

@optional
- (void)devicePINControllerDidDismissPINPane:(DevicePINController *)arg1;
- (void)devicePINController:(DevicePINController *)arg1 didFailToChangePinWithError:(NSError *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 didAcceptChangedPIN:(NSString *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 didFailToSetPinWithError:(NSError *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 didAcceptSetPIN:(NSString *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 shouldAcceptPIN:(NSString *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)didAcceptSetPIN;
- (void)didAcceptRemovePIN;
- (void)didAcceptChangedPIN;
- (void)didCancelEnteringPIN;
- (void)willCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(NSString *)arg1;
- (void)didAcceptEnteredPIN;
- (void)willAcceptEnteredPIN;
@end

