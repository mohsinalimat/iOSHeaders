//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoInitialMessagesSync : PBCodable <NSCopying>
{
    NSData *_dateForRequestingMoreMessages;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSMutableArray *_initialMessages;
    NSString *_syncedMailboxAccountId;
    NSString *_syncedMailboxCustomName;
    unsigned int _syncedMailboxType;
    NSString *_syncedMailboxURL;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int syncedMailboxType:1;
    } _has;
}

@property(retain, nonatomic) NSString *syncedMailboxCustomName; // @synthesize syncedMailboxCustomName=_syncedMailboxCustomName;
@property(retain, nonatomic) NSString *syncedMailboxURL; // @synthesize syncedMailboxURL=_syncedMailboxURL;
@property(retain, nonatomic) NSString *syncedMailboxAccountId; // @synthesize syncedMailboxAccountId=_syncedMailboxAccountId;
@property(nonatomic) unsigned int syncedMailboxType; // @synthesize syncedMailboxType=_syncedMailboxType;
@property(retain, nonatomic) NSData *dateForRequestingMoreMessages; // @synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages;
@property(retain, nonatomic) NSMutableArray *initialMessages; // @synthesize initialMessages=_initialMessages;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
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
@property(readonly, nonatomic) _Bool hasSyncedMailboxCustomName;
@property(readonly, nonatomic) _Bool hasSyncedMailboxURL;
@property(readonly, nonatomic) _Bool hasSyncedMailboxAccountId;
@property(nonatomic) _Bool hasSyncedMailboxType;
@property(readonly, nonatomic) _Bool hasDateForRequestingMoreMessages;
- (id)initialMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)initialMessagesCount;
- (void)addInitialMessage:(id)arg1;
- (void)clearInitialMessages;
@property(readonly, nonatomic) _Bool hasDateSynced;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

