//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSString;

@protocol HDProcessStateObserver <NSObject>

@optional
- (void)processDidEnterForeground:(NSString *)arg1;
- (void)processDidEnterBackground:(NSString *)arg1;
- (void)processTerminated:(NSString *)arg1;
- (void)processResumed:(NSString *)arg1;
- (void)processSuspended:(NSString *)arg1;
@end

