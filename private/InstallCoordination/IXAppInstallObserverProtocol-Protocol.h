//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class IXAppInstallCoordinatorSeed, NSError, NSString;

@protocol IXAppInstallObserverProtocol <NSObject>
- (oneway void)_client_coordinatorWithSeed:(IXAppInstallCoordinatorSeed *)arg1 didCancelWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorWithSeed:(IXAppInstallCoordinatorSeed *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorShouldPauseWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorShouldResumeWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_shouldPrioritizeAppWithBundleID:(NSString *)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
@end

