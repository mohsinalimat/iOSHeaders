//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSIndexSet;

@interface IKElementChangeSet : NSObject
{
    NSIndexSet *_addedIndexes;
    NSIndexSet *_removedIndexes;
    NSDictionary *_movedIndexesByNewIndex;
    NSDictionary *_updatedIndexesByNewIndex;
}

@property(readonly, copy, nonatomic) NSDictionary *updatedIndexesByNewIndex; // @synthesize updatedIndexesByNewIndex=_updatedIndexesByNewIndex;
@property(readonly, copy, nonatomic) NSDictionary *movedIndexesByNewIndex; // @synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex;
@property(readonly, copy, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *addedIndexes; // @synthesize addedIndexes=_addedIndexes;
- (void).cxx_destruct;
- (id)changesetByConcatenatingChangeset:(id)arg1;
- (long long)oldIndexForNewIndex:(long long)arg1;
- (long long)newIndexForOldIndex:(long long)arg1;
- (id)initWithAddedIndexes:(id)arg1 removedIndexes:(id)arg2 movedIndexesByNewIndex:(id)arg3 updatedIndexesByNewIndex:(id)arg4;

@end

