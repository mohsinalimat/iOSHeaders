//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoCatalog;

@interface NPKProtoCatalogChangedRequest : PBRequest <NSCopying>
{
    NPKProtoCatalog *_catalog;
    unsigned int _lastKnownResyncID;
    unsigned int _resyncID;
    unsigned int _syncID;
    CDStruct_02c44088 _has;
}

@property(nonatomic) unsigned int syncID; // @synthesize syncID=_syncID;
@property(nonatomic) unsigned int lastKnownResyncID; // @synthesize lastKnownResyncID=_lastKnownResyncID;
@property(nonatomic) unsigned int resyncID; // @synthesize resyncID=_resyncID;
@property(retain, nonatomic) NPKProtoCatalog *catalog; // @synthesize catalog=_catalog;
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
@property(nonatomic) _Bool hasSyncID;
@property(nonatomic) _Bool hasLastKnownResyncID;
@property(nonatomic) _Bool hasResyncID;

@end

