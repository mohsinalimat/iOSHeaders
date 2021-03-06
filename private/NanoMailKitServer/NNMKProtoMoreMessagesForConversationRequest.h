//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NNMKProtoMoreMessagesForConversationRequest : PBRequest <NSCopying>
{
    NSData *_beforeDateReceived;
    NSString *_conversationId;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    CDStruct_a125a100 _has;
}

@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSData *beforeDateReceived; // @synthesize beforeDateReceived=_beforeDateReceived;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMailboxId;
@property(readonly, nonatomic) _Bool hasBeforeDateReceived;
@property(readonly, nonatomic) _Bool hasConversationId;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

