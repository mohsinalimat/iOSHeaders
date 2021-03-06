//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class BLTPBAutoBugCapturePayloadSendFail;

@interface BLTPBAutoBugCapturePayload : PBCodable <NSCopying>
{
    int _eventType;
    BLTPBAutoBugCapturePayloadSendFail *_sendFailInfo;
    struct {
        unsigned int eventType:1;
    } _has;
}

@property(retain, nonatomic) BLTPBAutoBugCapturePayloadSendFail *sendFailInfo; // @synthesize sendFailInfo=_sendFailInfo;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
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
@property(readonly, nonatomic) _Bool hasSendFailInfo;
@property(nonatomic) _Bool hasEventType;

@end

