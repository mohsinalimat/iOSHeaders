//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/_MSPContainerEdit.h>

#import <MapsSupport/MSPContainerEditRemoval-Protocol.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditRemoval : _MSPContainerEdit <MSPContainerEditRemoval>
{
    NSArray *_originalObjects;
    NSArray *_removedImmutableObjects;
    NSIndexSet *_indexesOfRemovedObjects;
}

@property(readonly, nonatomic) NSIndexSet *indexesOfRemovedObjects; // @synthesize indexesOfRemovedObjects=_indexesOfRemovedObjects;
@property(readonly, nonatomic) NSArray *removedImmutableObjects; // @synthesize removedImmutableObjects=_removedImmutableObjects;
@property(readonly, nonatomic) NSArray *originalObjects; // @synthesize originalObjects=_originalObjects;
- (void).cxx_destruct;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithRemovedObjects:(id)arg1 indexes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

