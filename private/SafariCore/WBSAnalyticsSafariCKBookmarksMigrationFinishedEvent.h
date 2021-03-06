//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@class NSString;

@interface WBSAnalyticsSafariCKBookmarksMigrationFinishedEvent : PBCodable <NSCopying>
{
    unsigned long long _duration;
    unsigned long long _timestamp;
    NSString *_errorCode;
    NSString *_errorDomain;
    int _migratorType;
    int _result;
    struct {
        unsigned int duration:1;
        unsigned int timestamp:1;
        unsigned int migratorType:1;
        unsigned int result:1;
    } _has;
}

@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
- (int)StringAsResult:(id)arg1;
- (id)resultAsString:(int)arg1;
@property(nonatomic) _Bool hasResult;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) _Bool hasDuration;
- (int)StringAsMigratorType:(id)arg1;
- (id)migratorTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMigratorType;
@property(nonatomic) int migratorType; // @synthesize migratorType=_migratorType;
@property(nonatomic) _Bool hasTimestamp;

@end

