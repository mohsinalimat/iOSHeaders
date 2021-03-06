//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMessageInfo, MFSparseMutable64IndexSet, NSArray, NSMutableArray, NSMutableDictionary;

@interface MFMessageInfoOrderedSet : NSObject
{
    MFSparseMutable64IndexSet *_knownMessageIDs;
    NSMutableArray *_mutableMessageInfos;
    NSMutableDictionary *_duplicateMessageInfos;
    CDUnknownBlockType _comparator;
    CDUnknownBlockType _duplicatePreferenceComparator;
}

@property(copy, nonatomic) CDUnknownBlockType duplicatePreferenceComparator; // @synthesize duplicatePreferenceComparator=_duplicatePreferenceComparator;
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
- (void)enumerateUniqueMessageInfosWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)debugDescription;
- (unsigned long long)_scanForMessageInfoSimilarTo:(id)arg1;
- (void)_invalidate;
- (id)_duplicateMessageInfosForMessageInfo:(id)arg1;
- (void)_removeDuplicatesForMessageInfo:(id)arg1;
- (void)_addMessageInfoToDuplicates:(id)arg1;
- (id)allDuplicatesOfMessageInfo:(id)arg1;
- (id)duplicatesOfMessageInfo:(id)arg1;
@property(readonly, nonatomic) MFMessageInfo *lastMessage;
@property(readonly, nonatomic) MFMessageInfo *firstMessage;
@property(readonly, nonatomic) NSArray *allMessageInfos;
@property(readonly, nonatomic) NSArray *uniqueMessageInfos;
@property(readonly, nonatomic) unsigned long long countWithDuplicates;
@property(readonly, nonatomic) unsigned long long count;
- (void)replaceMessageInfo:(id)arg1 withReplacement:(id)arg2 inPlace:(_Bool)arg3;
- (id)messageInfoEquivalentToMessageInfo:(id)arg1;
- (id)messageInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1;
- (unsigned long long)indexOfMessageInfo:(id)arg1;
- (void)removeAllMessageInfos;
- (void)removeMessageInfosAtIndexes:(id)arg1;
- (unsigned long long)removeMessageInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)removeMessageInfo:(id)arg1;
- (unsigned long long)addMessageInfo:(id)arg1;
- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

