//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAssistantCore/IMAssistantMessageHandler.h>

#import <IMAssistantCore/INSendMessageIntentHandling-Protocol.h>

@class IMChatRegistry, NSString;

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling>
{
    IMChatRegistry *_chatRegistry;
}

@property(retain, nonatomic) IMChatRegistry *chatRegistry; // @synthesize chatRegistry=_chatRegistry;
- (void).cxx_destruct;
- (void)resolveRecipients:(id)arg1 forIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)resolveMessageContentWithString:(id)arg1;
- (long long)sendMessageWithText:(id)arg1 toChat:(id)arg2;
- (void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveContentForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveRecipientsForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

