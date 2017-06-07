//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString, NTPBEventObject;

@interface NTPBEvent : PBCodable <NSCopying>
{
    long long _duration;
    long long _personalizationTreatmentId;
    long long _personalizedTreatmentId;
    long long _startTimestamp;
    int _cellularRadioAccessTechnology;
    int _deviceOrientation;
    NTPBEventObject *_eventObject;
    int _gestureType;
    int _interfaceOrientation;
    NSString *_notwUserId;
    int _reachabilityStatus;
    NSString *_referringSource;
    NSString *_referringType;
    NSData *_sessionId;
    NSString *_userId;
    NSString *_userStorefrontId;
    NSString *_windowFrameInScreen;
    _Bool _isPaidSubscriberDuringEvent;
    _Bool _isPaidSubscriberFromAppStoreDuringEvent;
    _Bool _isPaidSubscriberFromNewsDuringEvent;
    _Bool _isPaidSubscriberFromThirdPartyDuringEvent;
    struct {
        unsigned int duration:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int personalizedTreatmentId:1;
        unsigned int startTimestamp:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int deviceOrientation:1;
        unsigned int gestureType:1;
        unsigned int interfaceOrientation:1;
        unsigned int reachabilityStatus:1;
        unsigned int isPaidSubscriberDuringEvent:1;
        unsigned int isPaidSubscriberFromAppStoreDuringEvent:1;
        unsigned int isPaidSubscriberFromNewsDuringEvent:1;
        unsigned int isPaidSubscriberFromThirdPartyDuringEvent:1;
    } _has;
}

@property(retain, nonatomic) NSString *notwUserId; // @synthesize notwUserId=_notwUserId;
@property(nonatomic) _Bool isPaidSubscriberFromThirdPartyDuringEvent; // @synthesize isPaidSubscriberFromThirdPartyDuringEvent=_isPaidSubscriberFromThirdPartyDuringEvent;
@property(nonatomic) _Bool isPaidSubscriberFromAppStoreDuringEvent; // @synthesize isPaidSubscriberFromAppStoreDuringEvent=_isPaidSubscriberFromAppStoreDuringEvent;
@property(nonatomic) _Bool isPaidSubscriberFromNewsDuringEvent; // @synthesize isPaidSubscriberFromNewsDuringEvent=_isPaidSubscriberFromNewsDuringEvent;
@property(nonatomic) _Bool isPaidSubscriberDuringEvent; // @synthesize isPaidSubscriberDuringEvent=_isPaidSubscriberDuringEvent;
@property(nonatomic) long long personalizedTreatmentId; // @synthesize personalizedTreatmentId=_personalizedTreatmentId;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(retain, nonatomic) NSString *windowFrameInScreen; // @synthesize windowFrameInScreen=_windowFrameInScreen;
@property(retain, nonatomic) NSString *referringSource; // @synthesize referringSource=_referringSource;
@property(retain, nonatomic) NSString *referringType; // @synthesize referringType=_referringType;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NTPBEventObject *eventObject; // @synthesize eventObject=_eventObject;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasNotwUserId;
@property(nonatomic) _Bool hasIsPaidSubscriberFromThirdPartyDuringEvent;
@property(nonatomic) _Bool hasIsPaidSubscriberFromAppStoreDuringEvent;
@property(nonatomic) _Bool hasIsPaidSubscriberFromNewsDuringEvent;
@property(nonatomic) _Bool hasIsPaidSubscriberDuringEvent;
@property(nonatomic) _Bool hasPersonalizedTreatmentId;
@property(nonatomic) _Bool hasPersonalizationTreatmentId;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
@property(nonatomic) _Bool hasCellularRadioAccessTechnology;
@property(nonatomic) int cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
- (int)StringAsReachabilityStatus:(id)arg1;
- (id)reachabilityStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasReachabilityStatus;
@property(nonatomic) int reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
@property(nonatomic) _Bool hasInterfaceOrientation;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) _Bool hasGestureType;
@property(nonatomic) int gestureType; // @synthesize gestureType=_gestureType;
@property(readonly, nonatomic) _Bool hasWindowFrameInScreen;
@property(readonly, nonatomic) _Bool hasReferringSource;
@property(readonly, nonatomic) _Bool hasReferringType;
@property(nonatomic) _Bool hasDeviceOrientation;
@property(nonatomic) int deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasStartTimestamp;
@property(readonly, nonatomic) _Bool hasUserStorefrontId;
@property(readonly, nonatomic) _Bool hasUserId;
@property(readonly, nonatomic) _Bool hasSessionId;
@property(readonly, nonatomic) _Bool hasEventObject;

@end

