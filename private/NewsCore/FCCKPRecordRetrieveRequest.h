//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPRecordIdentifier, FCCKPRequestedFields, NSString;

@interface FCCKPRecordRetrieveRequest : PBRequest <NSCopying>
{
    NSString *_clientVersionETag;
    FCCKPRecordIdentifier *_recordIdentifier;
    FCCKPRequestedFields *_requestedFields;
    NSString *_versionETag;
}

+ (id)options;
@property(retain, nonatomic) NSString *clientVersionETag; // @synthesize clientVersionETag=_clientVersionETag;
@property(retain, nonatomic) NSString *versionETag; // @synthesize versionETag=_versionETag;
@property(retain, nonatomic) FCCKPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasClientVersionETag;
@property(readonly, nonatomic) _Bool hasVersionETag;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;
- (void)dealloc;

@end

