//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKRecipientSelectionController, MFComposeRecipient, NSString;

@protocol CKRecipientSelectionControllerDelegate <NSObject>
- (struct UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionController:(CKRecipientSelectionController *)arg1 didFinishAvailaiblityLookupForRecipient:(MFComposeRecipient *)arg2;
- (void)recipientSelectionControllerDidPushABViewController:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionController:(CKRecipientSelectionController *)arg1 textDidChange:(NSString *)arg2;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerReturnPressed:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerDidChangeSize:(CKRecipientSelectionController *)arg1;
@end
