//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoSecureElementRemoveAppletsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_cardAIDs;
}

+ (Class)cardAIDsType;
@property(retain, nonatomic) NSMutableArray *cardAIDs; // @synthesize cardAIDs=_cardAIDs;
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
- (id)cardAIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardAIDsCount;
- (void)addCardAIDs:(id)arg1;
- (void)clearCardAIDs;

@end

