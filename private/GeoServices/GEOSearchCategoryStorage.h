//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, GEOPDBrowseCategory;

@interface GEOSearchCategoryStorage : PBCodable <NSCopying>
{
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOPDBrowseCategory *_browseCategory;
}

@property(retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry; // @synthesize autocompleteEntry=_autocompleteEntry;
@property(retain, nonatomic) GEOPDBrowseCategory *browseCategory; // @synthesize browseCategory=_browseCategory;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAutocompleteEntry;
@property(readonly, nonatomic) _Bool hasBrowseCategory;
- (void)dealloc;
- (id)initWithSearchCategory:(id)arg1;

@end

