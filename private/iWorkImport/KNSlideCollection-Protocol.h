//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class KNSlideCollectionSelection, KNSlideNode, NSArray;

@protocol KNSlideCollection <NSObject>
@property(readonly, nonatomic) KNSlideNode *defaultSlideNodeForNewSelection;
- (NSArray *)orderedSlideNodesInSelection:(KNSlideCollectionSelection *)arg1;
- (unsigned long long)indexOfSlideNode:(KNSlideNode *)arg1;
- (_Bool)containsSlideNode:(KNSlideNode *)arg1;
- (KNSlideNode *)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)arg1;
@end

