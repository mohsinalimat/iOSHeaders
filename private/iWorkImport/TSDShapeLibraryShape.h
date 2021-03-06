//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDShapeLibraryObject.h>

#import <iWorkImport/TSDShapeCollectionShape-Protocol.h>

@class NSArray, NSNumber, NSString, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDShapeLibraryShape : TSDShapeLibraryObject <TSDShapeCollectionShape>
{
    _Bool _rendersSlowly;
    NSString *_bezierPathString;
    TSUBezierPath *_bezierPath;
    NSString *_keywordDelimiter;
}

+ (id)p_stringForKey:(id)arg1 inBaseStringsFileWithName:(id)arg2;
+ (id)p_localizationKeyForShapeFromDictionary:(id)arg1;
+ (id)shapeIDForShapeFromDictionary:(id)arg1;
+ (id)localizedNameForShapeFromDictionary:(id)arg1;
+ (id)localizedKeywordsForShapeFromDictionary:(id)arg1 keywordDelimiter:(id)arg2;
+ (id)baseNameForShapeFromDictionary:(id)arg1;
+ (id)baseKeywordsForShapeFromDictionary:(id)arg1 keywordDelimiter:(id)arg2;
@property(copy, nonatomic) NSString *p_keywordDelimiter; // @synthesize p_keywordDelimiter=_keywordDelimiter;
@property(retain, nonatomic) TSUBezierPath *p_bezierPath; // @synthesize p_bezierPath=_bezierPath;
@property(readonly, nonatomic) _Bool rendersSlowly; // @synthesize rendersSlowly=_rendersSlowly;
@property(readonly, nonatomic) NSString *bezierPathString; // @synthesize bezierPathString=_bezierPathString;
- (void).cxx_destruct;
- (id)p_categoryMetadata;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)positionInCategoryWithID:(id)arg1;
- (id)pathSourceWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSArray *keywords;
@property(readonly, nonatomic) int shapeType;
@property(readonly, nonatomic) NSNumber *shapeID;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *accessibilityName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *localizationKey;
@property(readonly, nonatomic) NSArray *categoryIDs;
- (id)initWithDictionary:(id)arg1 keywordDelimiter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

