//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPAssetsToDownload, CKDPRecordZoneIdentifier, CKDPRequestedFields, NSData;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveChangesRequest : PBRequest <NSCopying>
{
    CKDPAssetsToDownload *_assetsToDownload;
    unsigned int _maxChanges;
    int _requestedChangeTypes;
    CKDPRequestedFields *_requestedFields;
    NSData *_syncContinuationToken;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    struct {
        unsigned int maxChanges:1;
        unsigned int requestedChangeTypes:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(nonatomic) unsigned int maxChanges; // @synthesize maxChanges=_maxChanges;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
- (void).cxx_destruct;
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
@property(readonly, nonatomic) _Bool hasAssetsToDownload;
- (int)StringAsRequestedChangeTypes:(id)arg1;
- (id)requestedChangeTypesAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestedChangeTypes;
@property(nonatomic) int requestedChangeTypes; // @synthesize requestedChangeTypes=_requestedChangeTypes;
@property(nonatomic) _Bool hasMaxChanges;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(readonly, nonatomic) _Bool hasSyncContinuationToken;

@end

