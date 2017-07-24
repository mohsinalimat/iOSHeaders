//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKChatController.h>

#import <ChatKit/CKBusinessInfoViewDelegate-Protocol.h>
#import <ChatKit/CKComposeRecipientSelectionControllerDelegate-Protocol.h>

@class CKBusinessInfoView, CKComposeNavbarManager, CKComposeRecipientSelectionController, CKComposition, NSArray, NSDictionary, NSString, UIBarButtonItem;
@protocol CKComposeChatControllerDelegate;

@interface CKComposeChatController : CKChatController <CKComposeRecipientSelectionControllerDelegate, CKBusinessInfoViewDelegate>
{
    _Bool _newComposeCancelled;
    CKComposeRecipientSelectionController *_composeRecipientSelectionController;
    NSArray *_prepopulatedRecipients;
    CKComposition *_prepopulatedComposition;
    UIBarButtonItem *_composeCancelItem;
    CKComposeNavbarManager *_navbarManager;
    NSDictionary *_bizIntent;
    CKBusinessInfoView *_businessInfoView;
    CDUnknownBlockType _deferredSendAnimationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType deferredSendAnimationBlock; // @synthesize deferredSendAnimationBlock=_deferredSendAnimationBlock;
@property(retain, nonatomic) CKBusinessInfoView *businessInfoView; // @synthesize businessInfoView=_businessInfoView;
@property(retain, nonatomic) NSDictionary *bizIntent; // @synthesize bizIntent=_bizIntent;
@property(retain, nonatomic) CKComposeNavbarManager *navbarManager; // @synthesize navbarManager=_navbarManager;
@property(retain, nonatomic) UIBarButtonItem *composeCancelItem; // @synthesize composeCancelItem=_composeCancelItem;
@property(nonatomic) _Bool newComposeCancelled; // @synthesize newComposeCancelled=_newComposeCancelled;
@property(retain, nonatomic) CKComposition *prepopulatedComposition; // @synthesize prepopulatedComposition=_prepopulatedComposition;
@property(retain, nonatomic) NSArray *prepopulatedRecipients; // @synthesize prepopulatedRecipients=_prepopulatedRecipients;
@property(retain, nonatomic) CKComposeRecipientSelectionController *composeRecipientSelectionController; // @synthesize composeRecipientSelectionController=_composeRecipientSelectionController;
- (void).cxx_destruct;
- (void)handleAddressBookChange:(id)arg1;
- (void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2;
- (void)layoutBusinessInfoViewIfNecessary;
- (void)setBusinessInfoViewInfoIfNecessary;
- (_Bool)_chatShowsUnexpectedlyLoggedOutNotification;
- (void)_saveDraftState;
- (_Bool)hasFailedRecipients;
- (_Bool)hasUnreachableEmergencyRecipient;
- (_Bool)isComposingRecipient;
- (struct UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2;
- (void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2;
- (_Bool)becomeFirstResponder;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)_passKitUIDismissed:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (_Bool)_shouldValidatePayloadBeforeSendingPayload:(id)arg1;
- (void)reloadEntryViewIfNeeded;
- (double)_entryViewTopInsetPadding;
- (id)inputAccessoryView;
- (void)cancelButtonTapped:(id)arg1;
- (void)_updateNavigationButtons;
- (_Bool)shouldUseNavigationBarCanvasView;
- (_Bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)_updateTitleAnimated:(_Bool)arg1;
- (double)topInsetPadding;
- (_Bool)isSafeToMarkAsRead;
- (id)outgoingComposeViewForSendAnimation;
- (void)addBizIntentToConversation:(id)arg1;
- (void)sendComposition:(id)arg1;
- (void)_setConversationDeferredSetup;
- (void)conversationLeft;
@property(readonly, nonatomic) NSString *unatomizedRecipientText;
@property(readonly, nonatomic) NSArray *proposedRecipients;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)prepareForSuspend;
- (id)initWithRecipientAddresses:(id)arg1 composition:(id)arg2 bizIntent:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CKComposeChatControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

