//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PETDeviceInfo : NSObject
{
    int _batterySaverModeToken;
}

+ (_Bool)shouldIncludePredictionLogs;
+ (_Bool)isBetaBuild;
+ (_Bool)isInternalBuild;
+ (_Bool)isDemoModeEnabled;
+ (_Bool)isBatterySaverEnabled;
+ (_Bool)isLowEndHardware;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;

@end

