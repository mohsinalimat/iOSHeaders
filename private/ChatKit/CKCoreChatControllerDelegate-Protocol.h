//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKComposition, CKConversation, CKCoreChatController;

@protocol CKCoreChatControllerDelegate <NSObject>
- (void)chatController:(CKCoreChatController *)arg1 didReportSpamForConversation:(CKConversation *)arg2;
- (void)chatController:(CKCoreChatController *)arg1 didSendCompositionInConversation:(CKConversation *)arg2;
- (void)chatController:(CKCoreChatController *)arg1 willSendComposition:(CKComposition *)arg2 inConversation:(CKConversation *)arg3;
@end

