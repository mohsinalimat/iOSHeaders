//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSString;

@interface ADSegmentUpdateResponse : PBCodable <NSCopying>
{
    double _maxSegmentUpdateIntervalInSeconds;
    double _segmentRefreshIntervalInSeconds;
    NSString *_idDebug;
    struct {
        unsigned int maxSegmentUpdateIntervalInSeconds:1;
        unsigned int segmentRefreshIntervalInSeconds:1;
    } _has;
}

+ (id)options;
@property(nonatomic) double maxSegmentUpdateIntervalInSeconds; // @synthesize maxSegmentUpdateIntervalInSeconds=_maxSegmentUpdateIntervalInSeconds;
@property(nonatomic) double segmentRefreshIntervalInSeconds; // @synthesize segmentRefreshIntervalInSeconds=_segmentRefreshIntervalInSeconds;
@property(retain, nonatomic) NSString *idDebug; // @synthesize idDebug=_idDebug;
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
@property(nonatomic) _Bool hasMaxSegmentUpdateIntervalInSeconds;
@property(nonatomic) _Bool hasSegmentRefreshIntervalInSeconds;
@property(readonly, nonatomic) _Bool hasIdDebug;

@end

