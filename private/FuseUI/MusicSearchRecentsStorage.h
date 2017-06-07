//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL;

@interface MusicSearchRecentsStorage : NSObject
{
    long long _limit;
    NSURL *_persistenceURL;
    NSMutableArray *_recents;
    _Bool _hasChanges;
    long long _maximumNumberOfRecents;
}

+ (id)sharedRecentsStorage;
@property(readonly) long long maximumNumberOfRecents; // @synthesize maximumNumberOfRecents=_maximumNumberOfRecents;
- (void).cxx_destruct;
- (void)load;
- (void)save;
- (void)clear;
- (void)replaceRecent:(id)arg1 withRecent:(id)arg2;
- (void)addRecent:(id)arg1;
- (void)_addRecent:(id)arg1 replacingRecent:(id)arg2;
- (id)recentSearches;
- (id)initWithLimit:(long long)arg1 persistenceURL:(id)arg2;

@end

