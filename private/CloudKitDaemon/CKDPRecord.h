//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDateStatistics, CKDPIdentifier, CKDPProtectionInfo, CKDPRecordChainParent, CKDPRecordIdentifier, CKDPRecordStableUrl, CKDPRecordType, CKDPShare, CKDPShareIdentifier, NSData, NSMutableArray, NSString;

@interface CKDPRecord : PBCodable <NSCopying>
{
    CKDPRecordChainParent *_chainParent;
    NSData *_chainPrivateKey;
    CKDPProtectionInfo *_chainProtectionInfo;
    NSMutableArray *_conflictLoserEtags;
    CKDPIdentifier *_createdBy;
    NSString *_etag;
    NSMutableArray *_fields;
    CKDPIdentifier *_modifiedBy;
    NSString *_modifiedByDevice;
    int _permission;
    NSMutableArray *_pluginFields;
    CKDPProtectionInfo *_protectionInfo;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPShareIdentifier *_shareId;
    CKDPShare *_shareInfo;
    CKDPRecordStableUrl *_stableUrl;
    CKDPDateStatistics *_timeStatistics;
    NSMutableArray *_tombstonedPublicKeyIDs;
    CKDPRecordType *_type;
    struct {
        unsigned int permission:1;
    } _has;
}

+ (Class)tombstonedPublicKeyIDsType;
+ (Class)pluginFieldsType;
+ (Class)conflictLoserEtagsType;
+ (Class)fieldsType;
+ (id)recordFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *tombstonedPublicKeyIDs; // @synthesize tombstonedPublicKeyIDs=_tombstonedPublicKeyIDs;
@property(retain, nonatomic) CKDPRecordStableUrl *stableUrl; // @synthesize stableUrl=_stableUrl;
@property(retain, nonatomic) CKDPRecordChainParent *chainParent; // @synthesize chainParent=_chainParent;
@property(retain, nonatomic) CKDPProtectionInfo *chainProtectionInfo; // @synthesize chainProtectionInfo=_chainProtectionInfo;
@property(retain, nonatomic) NSData *chainPrivateKey; // @synthesize chainPrivateKey=_chainPrivateKey;
@property(retain, nonatomic) CKDPShare *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) NSMutableArray *pluginFields; // @synthesize pluginFields=_pluginFields;
@property(retain, nonatomic) NSString *modifiedByDevice; // @synthesize modifiedByDevice=_modifiedByDevice;
@property(retain, nonatomic) NSMutableArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
@property(retain, nonatomic) CKDPIdentifier *modifiedBy; // @synthesize modifiedBy=_modifiedBy;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSMutableArray *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) CKDPDateStatistics *timeStatistics; // @synthesize timeStatistics=_timeStatistics;
@property(retain, nonatomic) CKDPIdentifier *createdBy; // @synthesize createdBy=_createdBy;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
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
- (id)tombstonedPublicKeyIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tombstonedPublicKeyIDsCount;
- (void)addTombstonedPublicKeyIDs:(id)arg1;
- (void)clearTombstonedPublicKeyIDs;
@property(readonly, nonatomic) _Bool hasStableUrl;
@property(readonly, nonatomic) _Bool hasChainParent;
@property(readonly, nonatomic) _Bool hasChainProtectionInfo;
@property(readonly, nonatomic) _Bool hasChainPrivateKey;
@property(readonly, nonatomic) _Bool hasShareInfo;
- (int)StringAsPermission:(id)arg1;
- (id)permissionAsString:(int)arg1;
@property(nonatomic) _Bool hasPermission;
@property(nonatomic) int permission; // @synthesize permission=_permission;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pluginFieldsCount;
- (void)addPluginFields:(id)arg1;
- (void)clearPluginFields;
@property(readonly, nonatomic) _Bool hasModifiedByDevice;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLoserEtagsCount;
- (void)addConflictLoserEtags:(id)arg1;
- (void)clearConflictLoserEtags;
@property(readonly, nonatomic) _Bool hasModifiedBy;
@property(readonly, nonatomic) _Bool hasShareId;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsCount;
- (void)addFields:(id)arg1;
- (void)clearFields;
@property(readonly, nonatomic) _Bool hasTimeStatistics;
@property(readonly, nonatomic) _Bool hasCreatedBy;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;
@property(readonly, nonatomic) _Bool hasEtag;
- (id)dataRepresentation;
- (id)fieldForKey:(id)arg1;
- (id)fieldData;
- (void)_inflateFieldsFromData:(id)arg1;

@end

