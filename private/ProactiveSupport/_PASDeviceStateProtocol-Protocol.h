//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveSupport/NSObject-Protocol.h>

@class NSString;

@protocol _PASDeviceStateProtocol <NSObject>
+ (NSString *)currentOsBuild;
+ (_Bool)isConstrainedDevice;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(void (^)(void))arg1;
+ (void)blockUntilFirstUnlock;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;
+ (id)registerForLockStateChangeNotifications:(void (^)(int))arg1;
+ (_Bool)isDeviceFormattedForProtection;
+ (_Bool)isUnlocked;
+ (_Bool)isClassCLocked;
+ (int)lockState;
@end
