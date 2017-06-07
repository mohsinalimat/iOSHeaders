//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDPartitioner-Protocol.h>

@class NSMutableDictionary, TSDInfoGeometry, TSTLayout, TSTTableInfo, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSTTablePartitioner : NSObject <TSDPartitioner>
{
    TSTTableInfo *mTableInfo;
    TSDInfoGeometry *mInfoGeometry;
    double mFirstPartitionWidth;
    struct CGSize mScaleToFit;
    TSTLayout *mScaledLayout;
    TSUPointerKeyDictionary *mHintMatricesByCanvas;
    NSMutableDictionary *mPartitioningPassCache;
}

@property(copy, nonatomic) TSDInfoGeometry *infoGeometry; // @synthesize infoGeometry=mInfoGeometry;
@property(nonatomic) struct CGSize scaleToFit; // @synthesize scaleToFit=mScaleToFit;
@property(readonly, nonatomic) double inlineTableWidth; // @synthesize inlineTableWidth=mFirstPartitionWidth;
@property(readonly, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=mTableInfo;
- (void)p_flushCacheAfterPartitioningFinished:(id)arg1 lastHint:(id)arg2 horizontally:(_Bool)arg3;
- (id)hintCacheKeyForHint:(id)arg1;
- (id)hintCacheKeyForPartitioningPass:(id)arg1 andHintID:(struct TSUCellCoord)arg2;
- (id)partitioningPassForHint:(id)arg1 withPreviousHint:(id)arg2;
- (id)partitioningPassForFirstPartitionSize:(struct CGSize)arg1;
@property(readonly, nonatomic) TSTLayout *scaledLayout;
@property(readonly, nonatomic) _Bool scaleIsValid;
- (_Bool)shouldReuseLayout:(id)arg1 forSize:(struct CGSize)arg2 parentLayout:(id)arg3 hint:(id)arg4;
- (id)hintForLayout:(id)arg1;
- (_Bool)p_didFinishPartitioningHint:(id)arg1 horizontally:(_Bool)arg2;
- (_Bool)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(_Bool)arg3 delta:(int)arg4;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (id)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (id)nextHintForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (struct TSUCellRect)measureCellRangeForNextPartitionOfSize:(struct CGSize)arg1 previousHint:(id)arg2 horizontally:(_Bool)arg3;
- (void)validateScaledLayout;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

