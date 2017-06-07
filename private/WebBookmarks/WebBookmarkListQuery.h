//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WebBookmarkListQuery : NSObject
{
    NSString *_query;
    NSString *_queryWithOrderBy;
    NSString *_orderBy;
    NSArray *_titleWordPrefixes;
    NSArray *_titleWordPrefixesForInMemoryFiltering;
    NSString *_urlFilter;
    _Bool _includeHidden;
    _Bool _countShouldUseNumChildrenIfPossible;
    _Bool _customQuery;
    int _folderID;
}

@property(readonly, nonatomic) int folderID; // @synthesize folderID=_folderID;
@property(readonly, nonatomic, getter=isCustomQuery) _Bool customQuery; // @synthesize customQuery=_customQuery;
- (void).cxx_destruct;
- (void)_preparePrefixesFromNormalizedString:(id)arg1;
- (id)_normalizeUserTypedString:(id)arg1;
- (id)bookmarksInCollection:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)_sqliteNotInConditionForInMemoryDeletedBookmarksInFolder:(int)arg1 collection:(id)arg2;
- (id)_whereClauseByAddingCondition:(id)arg1;
- (int)countInCollection:(id)arg1;
- (id)_filterBookmarks:(id)arg1;
- (int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)arg1 collection:(id)arg2 skipCountingBookmarksThatAreDeletedInMemory:(_Bool)arg3;
- (int)_childCountInDatabaseForFolderFetchInCollection:(id)arg1 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(_Bool)arg2;
- (long long)_listQueryType;
- (id)debugDescription;
- (id)initWithBookmarksWhere:(id)arg1 folderID:(int)arg2 orderBy:(id)arg3 usingFilter:(id)arg4;
- (id)initWithBookmarksWhere:(id)arg1 orderBy:(id)arg2 usingFilter:(id)arg3;
- (id)initWithFolderID:(int)arg1 inCollection:(id)arg2 includeHidden:(_Bool)arg3 usingFilter:(id)arg4;
- (id)init;

@end
