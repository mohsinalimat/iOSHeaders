//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFMailMessage.h>

@class MFMailboxUid, MFMessageHeaders, MailAccount;

@interface MFFakeMailMessage : MFMailMessage
{
    MFMailboxUid *_mailbox;
    MFMessageHeaders *_headers;
    MailAccount *_account;
}

@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) MFMessageHeaders *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
- (void).cxx_destruct;

@end

