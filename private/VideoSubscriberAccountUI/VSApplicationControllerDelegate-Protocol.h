//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class NSError, VSApplicationController, VSApplicationControllerRequest, VSApplicationControllerResponse, VSViewModel;

@protocol VSApplicationControllerDelegate <NSObject>
- (void)applicationController:(VSApplicationController *)arg1 request:(VSApplicationControllerRequest *)arg2 didFailWithError:(NSError *)arg3;
- (void)applicationController:(VSApplicationController *)arg1 request:(VSApplicationControllerRequest *)arg2 didCompleteWithResponse:(VSApplicationControllerResponse *)arg3;
- (void)applicationController:(VSApplicationController *)arg1 didReceiveViewModelError:(NSError *)arg2;
- (void)applicationController:(VSApplicationController *)arg1 didReceiveViewModel:(VSViewModel *)arg2;
- (void)applicationController:(VSApplicationController *)arg1 startDidFailWithError:(NSError *)arg2;
- (void)applicationControllerDidStart:(VSApplicationController *)arg1;

@optional
- (void)applicationControllerDidStop:(VSApplicationController *)arg1;
@end

