//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXMemoriesFeedLayoutGenerator.h>

@class NSDictionary, NSIndexSet, PXMemoriesSpec;

@interface PXMemoriesFeedEntryLayoutGenerator : PXMemoriesFeedLayoutGenerator
{
    struct CGSize _size;
    PXMemoriesSpec *_spec;
    NSIndexSet *_geometryKinds;
    struct CGRect _sectionHeaderRect;
    NSDictionary *_rectsByIndexByKind;
    _Bool _isPrepared;
    long long _layoutAxis;
}

@property(nonatomic) long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_prepareLayoutIfNeeded;
- (void)invalidate;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (id)geometryKinds;
- (struct CGSize)size;
- (struct CGSize)estimatedSize;
- (id)initWithMetrics:(id)arg1;

@end

