//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTWidthHeightCollection : NSObject
{
    struct vector<std::__1::pair<TSUCellCoord, double>, std::__1::allocator<std::__1::pair<TSUCellCoord, double>>> mFittingHeights;
    vector_13f93596 mResetHeights;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateResetHeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addResetHeightForCellID:(struct TSUCellCoord)arg1;
- (void)enumerateFittingHeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addFittingHeight:(double)arg1 forCellID:(struct TSUCellCoord)arg2;

@end

