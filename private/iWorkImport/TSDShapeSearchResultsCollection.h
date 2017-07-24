//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDShapeCollection-Protocol.h>

@class NSOrderedSet, NSString, TSDBasicShapeLibrary, TSDShapeLibrary, TSDUserDefinedShapeLibrary, TSUNoCopyDictionary;
@protocol TSDShapeCollectionShape;

__attribute__((visibility("hidden")))
@interface TSDShapeSearchResultsCollection : NSObject <TSDShapeCollection>
{
    NSString *_searchTerm;
    TSDBasicShapeLibrary *_basicShapeLibrary;
    TSDShapeLibrary *_shapeLibrary;
    TSDUserDefinedShapeLibrary *_userDefinedShapeLibrary;
    NSOrderedSet<TSDShapeCollectionShape> *_exactMatches;
    NSOrderedSet<TSDShapeCollectionShape> *_partialMatches;
    TSUNoCopyDictionary *_shapeToDisplayNameMap;
}

@property(retain, nonatomic) TSUNoCopyDictionary *p_shapeToDisplayNameMap; // @synthesize p_shapeToDisplayNameMap=_shapeToDisplayNameMap;
@property(copy, nonatomic) NSOrderedSet<TSDShapeCollectionShape> *p_partialMatches; // @synthesize p_partialMatches=_partialMatches;
@property(copy, nonatomic) NSOrderedSet<TSDShapeCollectionShape> *p_exactMatches; // @synthesize p_exactMatches=_exactMatches;
@property(retain, nonatomic) TSDUserDefinedShapeLibrary *p_userDefinedShapeLibrary; // @synthesize p_userDefinedShapeLibrary=_userDefinedShapeLibrary;
@property(retain, nonatomic) TSDShapeLibrary *p_shapeLibrary; // @synthesize p_shapeLibrary=_shapeLibrary;
@property(retain, nonatomic) TSDBasicShapeLibrary *p_basicShapeLibrary; // @synthesize p_basicShapeLibrary=_basicShapeLibrary;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void).cxx_destruct;
- (id)p_allShapes;
- (_Bool)p_hasPartialMatches;
- (CDUnknownBlockType)p_comparatorForSortingMatches;
- (id)p_separateExactAndPartialMatchesFromResults:(id)arg1 searchTerm:(id)arg2 shapeToDisplayNameDict:(id)arg3 searchResultToShapeMap:(CDUnknownBlockType)arg4;
- (id)shapeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfShapes;
@property(readonly, nonatomic) NSString *name;
- (id)displayNameForShape:(id)arg1;
- (id)indexPathOfShape:(id)arg1;
- (id)shapeAtIndexPath:(id)arg1;
- (unsigned long long)numberOfShapesInSection:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSections;
@property(readonly, nonatomic) unsigned long long exactMatchCount;
@property(readonly, nonatomic) _Bool hasExactMatches;
- (void)resetSearchResults;
- (void)setSearchTerm:(id)arg1 forceUpdate:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setSearchTerm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)p_updateSearchResultsForSearchTerm:(id)arg1;
- (id)initWithShapeLibrary:(id)arg1 basicShapeLibrary:(id)arg2 userDefinedShapeLibrary:(id)arg3 searchTerm:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

