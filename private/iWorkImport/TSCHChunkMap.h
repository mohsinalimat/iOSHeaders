//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHChunkMap : NSObject
{
    unsigned long long mChunkStyle;
    unsigned long long *mSeriesMap;
    unsigned long long *mValuesMap;
    unsigned long long mChunkMapCount;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=mChunkMapCount;
- (unsigned long long)valueIndexAtIndex:(unsigned long long)arg1;
- (unsigned long long)seriesIndexAtIndex:(unsigned long long)arg1;
- (_Bool)p_canAddChunkForSeries:(id)arg1 valueIndex:(long long)arg2;
- (void)p_setupCacheForElementsInSetsWithModel:(id)arg1;
- (void)p_setupCacheForElementsInSeriesWithModel:(id)arg1;
- (void)p_setupCacheForSetsWithModel:(id)arg1;
- (void)p_setupCacheForSeriesWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithChart:(id)arg1 chunkStyle:(unsigned long long)arg2;

@end

