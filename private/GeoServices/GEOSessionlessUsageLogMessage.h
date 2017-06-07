//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODirectionsFeedbackLogMessage, GEOTimeToLeaveHypothesisLogMessage, GEOTimeToLeaveInitialTravelTimeLogMessage, GEOTransitAppLaunchLogMessage;

@interface GEOSessionlessUsageLogMessage : PBCodable <NSCopying>
{
    GEODirectionsFeedbackLogMessage *_directionsFeedbackLogMessage;
    GEOTimeToLeaveHypothesisLogMessage *_timeToLeaveHypothesisLogMessage;
    GEOTimeToLeaveInitialTravelTimeLogMessage *_timeToLeaveInitialTravelTimeLogMessage;
    GEOTransitAppLaunchLogMessage *_transitAppLaunchLogMessage;
}

@property(retain, nonatomic) GEOTimeToLeaveInitialTravelTimeLogMessage *timeToLeaveInitialTravelTimeLogMessage; // @synthesize timeToLeaveInitialTravelTimeLogMessage=_timeToLeaveInitialTravelTimeLogMessage;
@property(retain, nonatomic) GEOTimeToLeaveHypothesisLogMessage *timeToLeaveHypothesisLogMessage; // @synthesize timeToLeaveHypothesisLogMessage=_timeToLeaveHypothesisLogMessage;
@property(retain, nonatomic) GEOTransitAppLaunchLogMessage *transitAppLaunchLogMessage; // @synthesize transitAppLaunchLogMessage=_transitAppLaunchLogMessage;
@property(retain, nonatomic) GEODirectionsFeedbackLogMessage *directionsFeedbackLogMessage; // @synthesize directionsFeedbackLogMessage=_directionsFeedbackLogMessage;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTimeToLeaveInitialTravelTimeLogMessage;
@property(readonly, nonatomic) _Bool hasTimeToLeaveHypothesisLogMessage;
@property(readonly, nonatomic) _Bool hasTransitAppLaunchLogMessage;
@property(readonly, nonatomic) _Bool hasDirectionsFeedbackLogMessage;
- (void)dealloc;

@end

