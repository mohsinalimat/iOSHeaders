//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _UICollectionLayoutGeometryGroupSolution;

__attribute__((visibility("hidden")))
@interface _UILayoutGeometrySolutionBookmark : NSObject
{
    _UICollectionLayoutGeometryGroupSolution *_groupSolution;
    struct CGRect _frame;
    long long _indexOffset;
}

+ (id)bookmarkWithLayoutGeometryGroupSolution:(id)arg1 indexOffset:(long long)arg2 frame:(struct CGRect)arg3;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) long long indexOffset; // @synthesize indexOffset=_indexOffset;
@property(readonly, nonatomic) _UICollectionLayoutGeometryGroupSolution *groupSolution; // @synthesize groupSolution=_groupSolution;
- (void).cxx_destruct;
- (id)initWithLayoutGeometryGroupSolution:(id)arg1 indexOffset:(long long)arg2 frame:(struct CGRect)arg3;

@end

