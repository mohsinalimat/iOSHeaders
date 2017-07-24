//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <IntentsUI/INUIExtensionHostContextDelegate-Protocol.h>
#import <IntentsUI/_INUIRemoteViewControllerHosting-Protocol.h>

@class NSExtension, NSString, _INUIExtensionHostContext;
@protocol INUIRemoteViewControllerDelegate, NSCopying;

@interface INUIRemoteViewController : _UIRemoteViewController <_INUIRemoteViewControllerHosting, INUIExtensionHostContextDelegate>
{
    id <INUIRemoteViewControllerDelegate> _delegate;
    _INUIExtensionHostContext *_extensionHostContext;
    NSExtension *_activeExtension;
    id <NSCopying> _currentRequestIdentifier;
}

+ (void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(retain, nonatomic) id <NSCopying> currentRequestIdentifier; // @synthesize currentRequestIdentifier=_currentRequestIdentifier;
@property(retain, nonatomic) NSExtension *activeExtension; // @synthesize activeExtension=_activeExtension;
@property(retain, nonatomic) _INUIExtensionHostContext *extensionHostContext; // @synthesize extensionHostContext=_extensionHostContext;
@property(nonatomic) __weak id <INUIRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)extensionHostContext:(id)arg1 wantsToHandleIntent:(id)arg2;
- (void)serviceViewControllerDesiresConstrainedSize:(struct CGSize)arg1;
- (id)_errorHandlingServiceViewControllerProxy;
- (void)_queryRepresentedPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateExtensionContextStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 context:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(CDUnknownBlockType)arg3;
- (id)disconnect;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

