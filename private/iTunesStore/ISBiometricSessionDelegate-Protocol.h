//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/NSObject-Protocol.h>

@class NSString;

@protocol ISBiometricSessionDelegate <NSObject>

@optional
- (void)sender:(id)arg1 willSendChallenge:(NSString *)arg2 andSignature:(NSString *)arg3;
- (void)sender:(id)arg1 shouldContinueTouchIDSession:(_Bool)arg2;
- (void)sender:(id)arg1 didFallbackToPassword:(_Bool)arg2;
@end

