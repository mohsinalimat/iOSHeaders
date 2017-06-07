//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableRoutineLocationRequest, HDCodableRoutineScenarioTriggeredRequest, NSString;

@interface HDCodableRoutineRequestMessage : PBCodable <NSCopying>
{
    HDCodableRoutineLocationRequest *_fetchLocationRequest;
    NSString *_requestIdentifier;
    int _requestType;
    HDCodableRoutineScenarioTriggeredRequest *_scenarioTriggeredRequest;
    CDStruct_7c66fec0 _has;
}

@property(retain, nonatomic) HDCodableRoutineScenarioTriggeredRequest *scenarioTriggeredRequest; // @synthesize scenarioTriggeredRequest=_scenarioTriggeredRequest;
@property(retain, nonatomic) HDCodableRoutineLocationRequest *fetchLocationRequest; // @synthesize fetchLocationRequest=_fetchLocationRequest;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
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
@property(readonly, nonatomic) _Bool hasScenarioTriggeredRequest;
@property(readonly, nonatomic) _Bool hasFetchLocationRequest;
@property(readonly, nonatomic) _Bool hasRequestIdentifier;
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;

@end

