//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOStyleAttributes, NSData, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDBrowseCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_displayString;
    NSString *_popularDisplayToken;
    NSString *_shortDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_subCategorys;
    NSData *_suggestionEntryMetadata;
}

+ (Class)subCategoryType;
@property(retain, nonatomic) NSString *popularDisplayToken; // @synthesize popularDisplayToken=_popularDisplayToken;
@property(retain, nonatomic) NSString *shortDisplayString; // @synthesize shortDisplayString=_shortDisplayString;
@property(retain, nonatomic) NSMutableArray *subCategorys; // @synthesize subCategorys=_subCategorys;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
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
@property(readonly, nonatomic) _Bool hasPopularDisplayToken;
@property(readonly, nonatomic) _Bool hasShortDisplayString;
- (id)subCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)subCategorysCount;
- (void)addSubCategory:(id)arg1;
- (void)clearSubCategorys;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(readonly, nonatomic) _Bool hasDisplayString;
@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadata;
- (void)dealloc;

@end
