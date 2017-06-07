//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecord, CKDPShareMetadata, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordResolveTokenResponse : PBCodable <NSCopying>
{
    NSString *_container;
    int _containerEnvironment;
    NSMutableArray *_records;
    CKDPShareMetadata *_shareMetadata;
    CKDPRecord *_shareRecord;
    struct {
        unsigned int containerEnvironment:1;
    } _has;
}

+ (Class)recordType;
@property(retain, nonatomic) CKDPShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(retain, nonatomic) CKDPRecord *shareRecord; // @synthesize shareRecord=_shareRecord;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSString *container; // @synthesize container=_container;
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
@property(readonly, nonatomic) _Bool hasShareMetadata;
@property(readonly, nonatomic) _Bool hasShareRecord;
- (id)recordAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)addRecord:(id)arg1;
- (void)clearRecords;
- (int)StringAsContainerEnvironment:(id)arg1;
- (id)containerEnvironmentAsString:(int)arg1;
@property(nonatomic) _Bool hasContainerEnvironment;
@property(nonatomic) int containerEnvironment; // @synthesize containerEnvironment=_containerEnvironment;
@property(readonly, nonatomic) _Bool hasContainer;

@end

