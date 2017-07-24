//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface LOGMSGEVENTLogMsgEventRideBookedSession : PBCodable <NSCopying>
{
    NSMutableArray *_intentResponseFailures;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookedSessionId;
    int _statusIssue;
    _Bool _bookedUsingMaps;
    _Bool _cancelled;
    _Bool _contactedDriver;
    _Bool _invalidVehicleLocation;
    _Bool _missingVehicleLocation;
    _Bool _tappedProactiveTrayItem;
    _Bool _viewedDetails;
    _Bool _viewedInProactiveTray;
    struct {
        unsigned int statusIssue:1;
        unsigned int bookedUsingMaps:1;
        unsigned int cancelled:1;
        unsigned int contactedDriver:1;
        unsigned int invalidVehicleLocation:1;
        unsigned int missingVehicleLocation:1;
        unsigned int tappedProactiveTrayItem:1;
        unsigned int viewedDetails:1;
        unsigned int viewedInProactiveTray:1;
    } _has;
}

+ (Class)intentResponseFailureType;
@property(retain, nonatomic) NSMutableArray *intentResponseFailures; // @synthesize intentResponseFailures=_intentResponseFailures;
@property(nonatomic) _Bool missingVehicleLocation; // @synthesize missingVehicleLocation=_missingVehicleLocation;
@property(nonatomic) _Bool invalidVehicleLocation; // @synthesize invalidVehicleLocation=_invalidVehicleLocation;
@property(retain, nonatomic) NSString *rideAppVersion; // @synthesize rideAppVersion=_rideAppVersion;
@property(retain, nonatomic) NSString *rideBookedSessionId; // @synthesize rideBookedSessionId=_rideBookedSessionId;
@property(retain, nonatomic) NSString *rideAppId; // @synthesize rideAppId=_rideAppId;
@property(nonatomic) _Bool viewedDetails; // @synthesize viewedDetails=_viewedDetails;
@property(nonatomic) _Bool tappedProactiveTrayItem; // @synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem;
@property(nonatomic) _Bool viewedInProactiveTray; // @synthesize viewedInProactiveTray=_viewedInProactiveTray;
@property(nonatomic) _Bool contactedDriver; // @synthesize contactedDriver=_contactedDriver;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool bookedUsingMaps; // @synthesize bookedUsingMaps=_bookedUsingMaps;
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
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentResponseFailuresCount;
- (void)addIntentResponseFailure:(id)arg1;
- (void)clearIntentResponseFailures;
- (int)StringAsStatusIssue:(id)arg1;
- (id)statusIssueAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusIssue;
@property(nonatomic) int statusIssue; // @synthesize statusIssue=_statusIssue;
@property(nonatomic) _Bool hasMissingVehicleLocation;
@property(nonatomic) _Bool hasInvalidVehicleLocation;
@property(readonly, nonatomic) _Bool hasRideAppVersion;
@property(readonly, nonatomic) _Bool hasRideBookedSessionId;
@property(readonly, nonatomic) _Bool hasRideAppId;
@property(nonatomic) _Bool hasViewedDetails;
@property(nonatomic) _Bool hasTappedProactiveTrayItem;
@property(nonatomic) _Bool hasViewedInProactiveTray;
@property(nonatomic) _Bool hasContactedDriver;
@property(nonatomic) _Bool hasCancelled;
@property(nonatomic) _Bool hasBookedUsingMaps;

@end

