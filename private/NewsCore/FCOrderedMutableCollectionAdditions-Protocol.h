//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOrderedCollectionAdditions-Protocol.h>

@class NSIndexSet;
@protocol FCOrderedCollection;

@protocol FCOrderedMutableCollectionAdditions <FCOrderedCollectionAdditions>
- (NSIndexSet *)fc_mergeSortedOrderedCollection:(id <FCOrderedCollection>)arg1 usingComparator:(long long (^)(id, id))arg2;
@end
