//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString, NSUUID;

@protocol UABestAppSuggestionManagerResponseProtocol <NSObject>

@optional
- (void)notifyBestAppChanged:(NSUUID *)arg1 type:(unsigned long long)arg2 options:(NSDictionary *)arg3 bundleIdentifier:(NSString *)arg4 activityType:(NSString *)arg5 dynamicIdentifier:(NSString *)arg6 when:(NSDate *)arg7 confidence:(double)arg8 deviceName:(NSString *)arg9 deviceIdentifier:(NSString *)arg10 deviceType:(NSString *)arg11;
@end

