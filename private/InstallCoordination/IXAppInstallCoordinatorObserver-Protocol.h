//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class IXAppInstallCoordinator, NSError;

@protocol IXAppInstallCoordinatorObserver <NSObject>

@optional
- (void)coordinator:(IXAppInstallCoordinator *)arg1 configuredPromisePromiseDidBeginFulfillment:(unsigned long long)arg2;
- (void)promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 canceledWithReason:(NSError *)arg2;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 canceledWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorDidInstallPlaceholder:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldBeginRestoringUserData:(IXAppInstallCoordinator *)arg1;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (void)coordinatorShouldPause:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldResume:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldPrioritize:(IXAppInstallCoordinator *)arg1;
@end

