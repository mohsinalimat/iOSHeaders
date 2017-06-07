//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDAddressObjectFilter : PBCodable <NSCopying>
{
    NSMutableArray *_libraryVersions;
}

+ (Class)libraryVersionType;
@property(retain, nonatomic) NSMutableArray *libraryVersions; // @synthesize libraryVersions=_libraryVersions;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)libraryVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)libraryVersionsCount;
- (void)addLibraryVersion:(id)arg1;
- (void)clearLibraryVersions;
- (void)dealloc;

@end
