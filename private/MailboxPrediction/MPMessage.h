//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailboxPrediction/MPMessage-Protocol.h>
#import <MailboxPrediction/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString;
@protocol MPMailbox, MPPerson;

@interface MPMessage : NSObject <MPMessage, NSSecureCoding>
{
    _Bool _isPriority;
    id <MPMailbox> _mailbox;
    NSString *_subject;
    NSDate *_dateSent;
    NSString *_persistentID;
    long long _conversationID;
    NSString *_listID;
    id <MPPerson> _senderPerson;
    NSArray *_toPeople;
    NSArray *_ccPeople;
}

+ (_Bool)supportsSecureCoding;
+ (id)messageWithArray:(id)arg1;
+ (id)messageWithMailbox:(id)arg1 isPriority:(_Bool)arg2 subject:(id)arg3 dateSent:(id)arg4 persistentID:(id)arg5 conversationID:(long long)arg6 listID:(id)arg7 senderPerson:(id)arg8 toPeople:(id)arg9 ccPeople:(id)arg10;
@property(retain, nonatomic) NSArray *ccPeople; // @synthesize ccPeople=_ccPeople;
@property(retain, nonatomic) NSArray *toPeople; // @synthesize toPeople=_toPeople;
@property(retain, nonatomic) id <MPPerson> senderPerson; // @synthesize senderPerson=_senderPerson;
@property(retain, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(retain, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) _Bool isPriority; // @synthesize isPriority=_isPriority;
@property(retain, nonatomic) id <MPMailbox> mailbox; // @synthesize mailbox=_mailbox;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)personizeRecipients:(id)arg1;
- (id)initWithMessageArray:(id)arg1;
- (id)initWithMailbox:(id)arg1 isPriority:(_Bool)arg2 subject:(id)arg3 dateSent:(id)arg4 persistentID:(id)arg5 conversationID:(long long)arg6 listID:(id)arg7 senderPerson:(id)arg8 toPeople:(id)arg9 ccPeople:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

