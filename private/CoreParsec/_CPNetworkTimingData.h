//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _CPNetworkTimingData : PBCodable <NSCopying>
{
    NSMutableArray *_nestedTimingDatas;
    NSMutableArray *_topLevelTimingDatas;
}

+ (Class)nestedTimingDataType;
+ (Class)topLevelTimingDataType;
@property(retain, nonatomic) NSMutableArray *nestedTimingDatas; // @synthesize nestedTimingDatas=_nestedTimingDatas;
@property(retain, nonatomic) NSMutableArray *topLevelTimingDatas; // @synthesize topLevelTimingDatas=_topLevelTimingDatas;
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
- (id)nestedTimingDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)nestedTimingDatasCount;
- (void)addNestedTimingData:(id)arg1;
- (void)clearNestedTimingDatas;
- (id)topLevelTimingDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)topLevelTimingDatasCount;
- (void)addTopLevelTimingData:(id)arg1;
- (void)clearTopLevelTimingDatas;

@end

