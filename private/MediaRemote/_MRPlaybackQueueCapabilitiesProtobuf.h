//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRPlaybackQueueCapabilitiesProtobuf : PBCodable <NSCopying>
{
    _Bool _requestByIdentifiers;
    _Bool _requestByRange;
    _Bool _requestByRequest;
    struct {
        unsigned int requestByIdentifiers:1;
        unsigned int requestByRange:1;
        unsigned int requestByRequest:1;
    } _has;
}

@property(nonatomic) _Bool requestByRequest; // @synthesize requestByRequest=_requestByRequest;
@property(nonatomic) _Bool requestByIdentifiers; // @synthesize requestByIdentifiers=_requestByIdentifiers;
@property(nonatomic) _Bool requestByRange; // @synthesize requestByRange=_requestByRange;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRequestByRequest;
@property(nonatomic) _Bool hasRequestByIdentifiers;
@property(nonatomic) _Bool hasRequestByRange;

@end

