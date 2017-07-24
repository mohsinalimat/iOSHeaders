//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/_MSMessageComposeExtensionImplProtocol-Protocol.h>

@class MSConversation, NSData, NSString, UIViewController;
@protocol _MSMessageComposeExtensionImplProtocol, _MSMessageComposeHostImplProtocol;

@interface _MSMessageAppBundleContext : NSObject <_MSMessageComposeExtensionImplProtocol>
{
    NSData *_conversationStateData;
    _Bool _wantsLiveView;
    id <_MSMessageComposeExtensionImplProtocol> _containingContext;
    UIViewController *_viewController;
    MSConversation *_activeConversation;
    unsigned long long _presentationStyle;
    id <_MSMessageComposeHostImplProtocol> _hostContext;
}

@property(retain, nonatomic) id <_MSMessageComposeHostImplProtocol> hostContext; // @synthesize hostContext=_hostContext;
@property(nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(readonly, nonatomic) MSConversation *activeConversation; // @synthesize activeConversation=_activeConversation;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> containingContext; // @synthesize containingContext=_containingContext;
- (void).cxx_destruct;
- (void)dismiss;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stageRichLink:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stageMediaItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stageAppItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentationDidChangeToPresentationState:(id)arg1;
- (void)_presentationWillChangeToPresentationState:(id)arg1;
- (void)_conversationDidChangeWithConversationState:(id)arg1;
- (void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2;
- (void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_canSendMessage:(id)arg1 conversationState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resignActive;
- (void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2;
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
- (void)_hostDidBeginDeferredTeardown;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (struct CGRect)initialFrameOfHostView;
- (void)_sendWillBecomeActiveMessage;
@property(readonly, nonatomic) __weak UIViewController *stickerViewController;
- (id)initWithViewController:(id)arg1 conversationStateData:(id)arg2 wantsLiveView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

