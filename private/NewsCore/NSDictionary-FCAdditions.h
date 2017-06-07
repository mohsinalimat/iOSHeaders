//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (FCAdditions)
+ (id)fc_dictionaryByAddingEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueWithIndexBlock:(CDUnknownBlockType)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueBlock:(CDUnknownBlockType)arg2;
+ (id)fc_dictionaryWithObjects:(id)arg1 keyBlock:(CDUnknownBlockType)arg2;
+ (id)fc_dictionaryFromArray:(id)arg1 keyBlock:(CDUnknownBlockType)arg2 valueBlock:(CDUnknownBlockType)arg3;
+ (id)fc_dictionaryFromJSON:(id)arg1;
+ (id)fc_dictionaryFromJSON:(id)arg1 error:(id *)arg2;
+ (id)fc_dictionary:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByMergingDictionary:(id)arg1 withValueCombiner:(CDUnknownBlockType)arg2;
- (id)jsonString;
- (id)fr_descriptionWithKeyComparator:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryBySwappingValuesAndKeys;
- (id)fc_deepCopy;
- (id)fc_subdictionaryWithCopiesForKeys:(id)arg1;
- (id)fc_subdictionaryForKeys:(id)arg1;
- (id)fc_objectsForKeysWithoutMarker:(id)arg1;
- (id)fc_dictionaryByRemovingObjectForKey:(id)arg1;
- (id)fc_dictionaryByTransformingValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByTransformingValuesWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
- (id)fc_sortedEntriesWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByTransformingKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByTransformingKeysWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
@end

