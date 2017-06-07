//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableWorkoutConfiguration, NSString;

@interface HDCodableStartWorkoutAppRequest : PBRequest <NSCopying>
{
    NSString *_applicationIdentifier;
    NSString *_requestIdentifier;
    HDCodableWorkoutConfiguration *_workoutConfiguration;
}

@property(retain, nonatomic) HDCodableWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
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
@property(readonly, nonatomic) _Bool hasWorkoutConfiguration;
@property(readonly, nonatomic) _Bool hasApplicationIdentifier;
@property(readonly, nonatomic) _Bool hasRequestIdentifier;

@end

