//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, _ICTransientLexicon;

@interface _ICNamedEntityStore : NSObject
{
    NSMutableOrderedSet *_recentNamedEntityQueue;
    _ICTransientLexicon *_wordLexicon;
    _ICTransientLexicon *_phraseLexicon;
    NSArray *_lexicons;
    CDUnknownBlockType _wordFilteringBlock;
    CDUnknownBlockType _filteringBlock;
}

+ (id)tokenize:(id)arg1;
@property(retain, nonatomic) NSArray *lexicons; // @synthesize lexicons=_lexicons;
@property(copy, nonatomic) CDUnknownBlockType filteringBlock; // @synthesize filteringBlock=_filteringBlock;
- (void).cxx_destruct;
- (void)removeAllEntries;
- (void)reloadRecents;
- (void)addEntity:(id)arg1 isDurable:(_Bool)arg2;
- (void)updateQueue:(id)arg1 newEntity:(id)arg2;
- (void)removeEntry:(id)arg1 tokenizedNewEntity:(id)arg2;
- (void)addEntry:(id)arg1 tokenizedNewEntity:(id)arg2;
- (id)filterWord:(id)arg1;
- (_Bool)isFirstCandidateBetter:(id)arg1 than:(id)arg2;
- (id)init;

@end

