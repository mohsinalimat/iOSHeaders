//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPRecord;

@interface FCCKPRecordRetrieveResponse : PBCodable <NSCopying>
{
    FCCKPRecord *_record;
    _Bool _clientVersionETagMatch;
    struct {
        unsigned int clientVersionETagMatch:1;
    } _has;
}

@property(nonatomic) _Bool clientVersionETagMatch; // @synthesize clientVersionETagMatch=_clientVersionETagMatch;
@property(retain, nonatomic) FCCKPRecord *record; // @synthesize record=_record;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasClientVersionETagMatch;
@property(readonly, nonatomic) _Bool hasRecord;
- (void)dealloc;

@end

