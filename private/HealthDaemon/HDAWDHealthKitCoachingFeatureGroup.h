//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HDAWDHealthKitCoachingFeatureGroup : PBCodable <NSCopying>
{
    NSMutableArray *_futures;
    NSMutableArray *_pasts;
}

+ (Class)futureType;
+ (Class)pastType;
@property(retain, nonatomic) NSMutableArray *futures; // @synthesize futures=_futures;
@property(retain, nonatomic) NSMutableArray *pasts; // @synthesize pasts=_pasts;
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
- (id)futureAtIndex:(unsigned long long)arg1;
- (unsigned long long)futuresCount;
- (void)addFuture:(id)arg1;
- (void)clearFutures;
- (id)pastAtIndex:(unsigned long long)arg1;
- (unsigned long long)pastsCount;
- (void)addPast:(id)arg1;
- (void)clearPasts;

@end

