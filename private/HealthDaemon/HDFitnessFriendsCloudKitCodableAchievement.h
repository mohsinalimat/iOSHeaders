//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDFitnessFriendsCloudKitCodableSample, NSString;

@interface HDFitnessFriendsCloudKitCodableAchievement : PBCodable <NSCopying>
{
    double _completedDate;
    double _doubleValue;
    long long _intValue;
    long long _workActivityType;
    NSString *_definitionIdentifier;
    HDFitnessFriendsCloudKitCodableSample *_sample;
    CDStruct_38df8e94 _has;
}

@property(retain, nonatomic) NSString *definitionIdentifier; // @synthesize definitionIdentifier=_definitionIdentifier;
@property(nonatomic) long long workActivityType; // @synthesize workActivityType=_workActivityType;
@property(nonatomic) long long intValue; // @synthesize intValue=_intValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) double completedDate; // @synthesize completedDate=_completedDate;
@property(retain, nonatomic) HDFitnessFriendsCloudKitCodableSample *sample; // @synthesize sample=_sample;
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
@property(readonly, nonatomic) _Bool hasDefinitionIdentifier;
@property(nonatomic) _Bool hasWorkActivityType;
@property(nonatomic) _Bool hasIntValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasCompletedDate;
@property(readonly, nonatomic) _Bool hasSample;

@end

