//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/SFPasswordRemoteViewControllerDelegate-Protocol.h>

@class NSString, SFPasswordRemoteViewController, _UIAsyncInvocation;
@protocol _SFAppAutoFillPasswordViewControllerDelegate;

@interface _SFAppAutoFillPasswordViewController : UIViewController <SFPasswordRemoteViewControllerDelegate>
{
    _UIAsyncInvocation *_cancelViewServiceRequest;
    SFPasswordRemoteViewController *_remoteViewController;
    id <_SFAppAutoFillPasswordViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_SFAppAutoFillPasswordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)_addRemoteView;
- (void)_connectToService;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

