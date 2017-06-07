//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSError, NSString;

@protocol SBFAuthenticationPolicy <NSObject>
- (void)wipeDeviceWithReason:(NSString *)arg1;
- (_Bool)usesSecureMode;
- (_Bool)shouldClearBlockStateOnSync;
- (_Bool)allowAuthenticationRevocation;

@optional
- (void)passcodeAuthenticationFailedWithError:(NSError *)arg1;
- (void)clearPasscodeCache;
- (void)cachePasscode:(NSString *)arg1;
@end

