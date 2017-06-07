//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSMutableArray, PBUnknownFields;

@interface GEOPDBatchPopularNearbySearchParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    unsigned int _maxResults;
    NSMutableArray *_suggestionEntryMetadatas;
    GEOPDViewportInfo *_viewportInfo;
    struct {
        unsigned int requestLocalTimestamp:1;
        unsigned int maxResults:1;
    } _has;
}

+ (Class)suggestionEntryMetadataType;
@property(retain, nonatomic) NSMutableArray *suggestionEntryMetadatas; // @synthesize suggestionEntryMetadatas=_suggestionEntryMetadatas;
@property(nonatomic) double requestLocalTimestamp; // @synthesize requestLocalTimestamp=_requestLocalTimestamp;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)suggestionEntryMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryMetadatasCount;
- (void)addSuggestionEntryMetadata:(id)arg1;
- (void)clearSuggestionEntryMetadatas;
@property(nonatomic) _Bool hasRequestLocalTimestamp;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(nonatomic) _Bool hasMaxResults;
- (void)dealloc;

@end

