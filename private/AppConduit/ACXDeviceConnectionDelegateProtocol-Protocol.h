//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppConduit/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol ACXDeviceConnectionDelegateProtocol <NSObject>
- (void)updateInstallProgressForApplication:(NSString *)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
- (void)updatedInstallStateForApplicationsWithInfo:(NSDictionary *)arg1;
@end

