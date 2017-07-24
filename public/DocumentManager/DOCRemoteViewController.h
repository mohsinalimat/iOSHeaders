//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <DocumentManager/DOCRemoteContextInterface-Protocol.h>

@class DOCAppearance, DOCConfiguration, DOCRemoteContext;
@protocol DOCRemoteViewControllerDelegate;

@interface DOCRemoteViewController : _UIRemoteViewController <DOCRemoteContextInterface>
{
    DOCAppearance *_lastAppearance;
    _Bool _isBrowserViewController;
    id <DOCRemoteViewControllerDelegate> _delegate;
    DOCRemoteContext *_hostContext;
    DOCConfiguration *_configuration;
}

+ (id)serviceExtension;
+ (id)instantiateRemoteBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)instantiateRemoteSourceViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)instantiateRemoteInfoViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (struct _UIResilientRemoteViewContainerViewController *)instantiateRemoteTargetSelectionBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (struct _UIResilientRemoteViewContainerViewController *)instantiateRemoteDocumentBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (struct _UIResilientRemoteViewContainerViewController *)instantiateTransparent:(_Bool)arg1 remoteViewControllerWithConfiguration:(id)arg2 errorHandler:(CDUnknownBlockType)arg3 hostProxy:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property _Bool isBrowserViewController; // @synthesize isBrowserViewController=_isBrowserViewController;
@property(retain) DOCConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) DOCRemoteContext *hostContext; // @synthesize hostContext=_hostContext;
@property __weak id <DOCRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)fetchAllSourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateEditingTo:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateAppearance:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;

@end

