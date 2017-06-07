//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecord, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveAncestorsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_ancestors;
    CKDPRecord *_shareRecord;
}

+ (Class)ancestorType;
@property(retain, nonatomic) CKDPRecord *shareRecord; // @synthesize shareRecord=_shareRecord;
@property(retain, nonatomic) NSMutableArray *ancestors; // @synthesize ancestors=_ancestors;
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
@property(readonly, nonatomic) _Bool hasShareRecord;
- (id)ancestorAtIndex:(unsigned long long)arg1;
- (unsigned long long)ancestorsCount;
- (void)addAncestor:(id)arg1;
- (void)clearAncestors;

@end

