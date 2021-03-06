//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class AKAccountRecoveryContext, NSError, NSString;

@protocol AKAppleIDAuthenticationLimitedUIProvider <NSObject>
- (void)dismissNativeRecoveryUIWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)presentNativeRecoveryUIWithContext:(AKAccountRecoveryContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)presentSecondFactorAlertWithError:(NSError *)arg1 title:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(NSNumber *, NSError *))arg4;
- (void)dismissSecondFactorUIWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)presentSecondFactorUIWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)presentLoginAlertWithError:(NSError *)arg1 title:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg4;
- (void)dismissBasicLoginUIWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)presentBasicLoginUIWithCompletion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg1;
@end

