//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFBaseMessage-Protocol.h>
#import <Message/NSCopying-Protocol.h>

@class NSString;

@interface MFMessageInfo : NSObject <MFBaseMessage, NSCopying>
{
    unsigned int _flagged:1;
    unsigned int _read:1;
    unsigned int _deleted:1;
    unsigned int _uidIsLibraryID:1;
    unsigned int _hasAttachments:1;
    unsigned int _isVIP:1;
    unsigned int _isHighPriority:1;
    unsigned int _dateSentInterval;
    unsigned int _mailboxID;
    unsigned int _uid;
    unsigned int _dateReceivedInterval;
    unsigned int _sortUid;
    unsigned int _sortDateReceivedInterval;
    long long _conversationHash;
    long long _generationNumber;
    long long _messageIDHash;
}

+ (long long)newGenerationNumber;
@property(nonatomic) unsigned int sortDateReceivedInterval; // @synthesize sortDateReceivedInterval=_sortDateReceivedInterval;
@property(nonatomic) unsigned int sortUid; // @synthesize sortUid=_sortUid;
@property(nonatomic) long long messageIDHash; // @synthesize messageIDHash=_messageIDHash;
@property(nonatomic) unsigned int dateReceivedInterval; // @synthesize dateReceivedInterval=_dateReceivedInterval;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) long long generationNumber; // @synthesize generationNumber=_generationNumber;
@property(nonatomic) unsigned int mailboxID; // @synthesize mailboxID=_mailboxID;
@property(nonatomic) long long conversationHash; // @synthesize conversationHash=_conversationHash;
@property(nonatomic) unsigned int dateSentInterval; // @synthesize dateSentInterval=_dateSentInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (long long)generationCompare:(id)arg1;
- (id)initWithUid:(unsigned int)arg1 mailboxID:(unsigned int)arg2 messageID:(long long)arg3 dateReceivedInterval:(unsigned int)arg4 dateSentInterval:(unsigned int)arg5 conversationHash:(long long)arg6 read:(_Bool)arg7 knownToHaveAttachments:(_Bool)arg8 flagged:(_Bool)arg9 isVIP:(_Bool)arg10;
- (id)init;
@property(nonatomic) _Bool isVIP;
@property(nonatomic, getter=isKnownToHaveAttachments) _Bool knownToHaveAttachments;
@property(nonatomic) _Bool uidIsLibraryID;
@property(nonatomic) _Bool deleted;
@property(nonatomic) _Bool flagged;
@property(nonatomic) _Bool read;
@property(readonly, nonatomic) _Bool senderVIP;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

