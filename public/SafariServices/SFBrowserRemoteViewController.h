//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SafariServices/SFRemoteViewControllerProtocol-Protocol.h>

@class NSString;
@protocol SFBrowserRemoveViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFBrowserRemoteViewController : _UIRemoteViewController <SFRemoteViewControllerProtocol>
{
    id <SFBrowserRemoveViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <SFBrowserRemoveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willOpenURLInHostApplication:(id)arg1;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (void)didFinishInitialLoad:(_Bool)arg1;
- (void)setRemoteSwipeGestureEnabled:(_Bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)willDismissServiceViewController;
- (void)didLoadWebView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
