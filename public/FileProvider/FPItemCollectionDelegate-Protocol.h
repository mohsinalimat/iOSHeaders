//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class FPItem, FPItemCollection, NSArray, NSDictionary, NSError;

@protocol FPItemCollectionDelegate <NSObject>
- (void)collection:(FPItemCollection *)arg1 didPerformBatchUpdateWithReplayBlock:(void (^)(void))arg2;
- (void)dataForCollectionShouldBeReloaded:(FPItemCollection *)arg1;
- (void)collection:(FPItemCollection *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2 changes:(NSDictionary *)arg3;
- (void)collection:(FPItemCollection *)arg1 didDeleteItemsAtIndexPaths:(NSArray *)arg2;
- (void)collection:(FPItemCollection *)arg1 didMoveItemsFromIndexPaths:(NSArray *)arg2 toIndexPaths:(NSArray *)arg3;
- (void)collection:(FPItemCollection *)arg1 didInsertItemsAtIndexPaths:(NSArray *)arg2;

@optional
- (void)collection:(FPItemCollection *)arg1 didUpdateObservedItem:(FPItem *)arg2;
- (void)collection:(FPItemCollection *)arg1 didEncounterError:(NSError *)arg2;
@end

