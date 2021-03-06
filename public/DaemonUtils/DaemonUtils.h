//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject
{
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSString *_daemonDir;
}

+ (_Bool)deviceHasSEP;
+ (_Bool)isSiriPlugin:(id)arg1;
+ (id)callerDisplayNameWithPid:(int)arg1 bundleId:(id *)arg2;
+ (id)_pluginDisplayNameForUUID:(id)arg1 bundleId:(id *)arg2;
+ (id)_pluginDisplayNameForPID:(int)arg1 bundleId:(id *)arg2;
+ (id)_callerUUID;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *daemonDir; // @synthesize daemonDir=_daemonDir;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
- (void).cxx_destruct;
- (id)init;

@end

