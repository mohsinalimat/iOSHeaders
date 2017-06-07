//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject
{
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    _Bool _listIsEmpty;
}

- (void)_blockListChanged:(id)arg1;
- (void)syncListEmptyState;
- (void)setResponse:(_Bool)arg1 forItem:(id)arg2;
- (void)removeItemFromCache:(id)arg1;
- (long long)cachedResponseForItem:(id)arg1;
- (id)init;

@end

