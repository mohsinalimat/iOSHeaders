//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitNotificationResponseFlags : PBCodable <NSCopying>
{
    _Bool _alreadyDoing;
    _Bool _poorTiming;
    struct {
        unsigned int alreadyDoing:1;
        unsigned int poorTiming:1;
    } _has;
}

@property(nonatomic) _Bool alreadyDoing; // @synthesize alreadyDoing=_alreadyDoing;
@property(nonatomic) _Bool poorTiming; // @synthesize poorTiming=_poorTiming;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAlreadyDoing;
@property(nonatomic) _Bool hasPoorTiming;

@end

