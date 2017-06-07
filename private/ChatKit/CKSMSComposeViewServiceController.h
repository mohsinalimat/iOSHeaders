//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <ChatKit/CKComposeChatControllerDelegate-Protocol.h>
#import <ChatKit/CKSMSComposeViewServiceProtocol-Protocol.h>

@class CKModalTranscriptController, NSString;

@interface CKSMSComposeViewServiceController : UINavigationController <CKComposeChatControllerDelegate, CKSMSComposeViewServiceProtocol>
{
    _Bool _canEditRecipients;
    _Bool _supportsAttachments;
    _Bool _supportsMessageInspection;
    _Bool _forceMMS;
    _Bool _disableCameraAttachments;
    CKModalTranscriptController *_modalTranscriptController;
    CDUnknownBlockType _gameCenterPickerBlock;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (_Bool)_isSecureForRemoteViewService;
@property(copy, nonatomic) CDUnknownBlockType gameCenterPickerBlock; // @synthesize gameCenterPickerBlock=_gameCenterPickerBlock;
@property(retain, nonatomic) CKModalTranscriptController *modalTranscriptController; // @synthesize modalTranscriptController=_modalTranscriptController;
- (void).cxx_destruct;
- (void)_willAppearInRemoteViewController;
- (_Bool)supportsMessageInspection;
- (_Bool)supportsAttachments;
- (void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
- (void)composeChatControllerDidCancelComposition:(id)arg1;
- (_Bool)composeChatControllerCanEditRecipients;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (void)disableCameraAttachments;
@property(nonatomic) _Bool canEditRecipients; // @dynamic canEditRecipients;
- (void)setPendingAddresses:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
- (void)setGameCenterModeWithPickerBlock:(CDUnknownBlockType)arg1;
- (void)forceMMS;
- (void)_forceMMSIfNecessary;
- (void)setUICustomizationData:(id)arg1;
- (void)forceCancelComposition;
- (void)insertRemoteItemForSending:(id)arg1;
- (void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)_insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 preview:(id)arg3 isFullyRealized:(_Bool)arg4 appendedVideoURL:(id)arg5 appendedBundleURL:(id)arg6;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (void)_insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 preview:(id)arg4 isFullyRealized:(_Bool)arg5 appendedVideoURL:(id)arg6;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

