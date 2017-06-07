//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/MFMessage.h>

#import <Message/ECMessage-Protocol.h>
#import <Message/MFBaseMessage-Protocol.h>
#import <Message/MFMailboxPredictionMessage-Protocol.h>

@class MFMessageInfo, NSArray, NSDate, NSString;
@protocol ECMailbox, ECMimePart;

@interface MFMailMessage : MFMessage <ECMessage, MFBaseMessage, MFMailboxPredictionMessage>
{
    unsigned long long _messageFlags;
    unsigned char _subjectPrefixLength;
    unsigned long long _modSequenceNumber;
    MFMessageInfo *_info;
    _Bool _shouldUseMailDrop;
}

+ (unsigned int)displayablePriorityForPriority:(int)arg1;
+ (unsigned int)validatePriority:(int)arg1;
+ (Class)dataMessageStoreToUse;
+ (id)forwardedMessagePrefixWithSpacer:(_Bool)arg1;
@property(nonatomic) _Bool shouldUseMailDrop; // @synthesize shouldUseMailDrop=_shouldUseMailDrop;
- (id)bestAlternativePart:(_Bool *)arg1;
- (id)bestAlternativePart;
- (void)dealloc;
- (id)externalConversationID;
- (id)copyMessageInfo;
- (_Bool)shouldSetSummary;
- (void)setSummary:(id)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (void)setMutableInfoFromMessage:(id)arg1;
- (unsigned short)numberOfAttachments;
- (id)URL;
- (id)originalMailboxURL;
- (void)setConversationFlags:(unsigned long long)arg1;
- (unsigned long long)conversationFlags;
- (id)remoteMailboxURL;
- (id)account;
- (id)loadMeetingMetadata;
- (id)loadMeetingData;
- (id)loadMeetingExternalID;
- (void)setSubject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subject;
- (id)subjectNotIncludingReAndFwdPrefix;
- (id)subjectAndPrefixLength:(unsigned int *)arg1;
@property(readonly, nonatomic) id <ECMailbox> mailbox;
- (void)markAsNotFlagged;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsNotViewed;
- (void)markAsViewed;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (int)priority;
- (void)setPriorityFromHeaders:(id)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (unsigned long long)messageFlags;
@property unsigned long long modSequenceNumber;
- (id)mailMessageStore;
- (id)messageStore;
@property(readonly, nonatomic, getter=isKnownToHaveAttachments) _Bool knownToHaveAttachments;
@property(readonly, nonatomic) _Bool deleted;
@property(readonly, nonatomic) _Bool conversationMuted;
@property(readonly, nonatomic) _Bool conversationVIP;
@property(readonly, nonatomic) _Bool senderVIP;
@property(readonly, nonatomic) _Bool junk;
@property(readonly, nonatomic) _Bool answered;
@property(readonly, nonatomic) _Bool read;
@property(readonly, nonatomic) _Bool flagged;
@property(readonly, copy, nonatomic) NSArray *from;
@property(readonly, copy, nonatomic) NSArray *listUnsubscribe;
- (id)ccAddressList;
- (id)toAddressList;
- (id)firstSenderAddress;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *cc;
@property(readonly, nonatomic) long long conversationHash; // @dynamic conversationHash;
@property(readonly, nonatomic) long long conversationID;
@property(readonly, nonatomic) NSDate *dateReceived;
@property(readonly, nonatomic) unsigned int dateReceivedInterval; // @dynamic dateReceivedInterval;
@property(readonly, nonatomic) unsigned int dateSentInterval; // @dynamic dateSentInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int mailboxID; // @dynamic mailboxID;
@property(readonly, nonatomic) id <ECMimePart> messageBody;
@property(readonly, nonatomic) long long messageIDHash; // @dynamic messageIDHash;
@property(readonly, copy, nonatomic) NSString *persistentID;
@property(readonly, copy, nonatomic) NSString *remoteID;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *to;
@property(readonly, nonatomic) unsigned int uid;

@end
