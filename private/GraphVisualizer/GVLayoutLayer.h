//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GVLayoutLayer : NSObject
{
    NSMutableArray *nodes;
    double separation;
}

+ (id)layerWithSeparation:(double)arg1;
- (void)updateNodePositionsBasedOnLayer:(id)arg1;
- (void)updateNodePositionsByCenterLine:(double)arg1;
- (void)initializeNodePositions;
- (struct CGSize)sizeForDummy;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (void)updateNodePrioritiesBasedOnLayer:(id)arg1;
- (void)minimizeCrossingWithLayer:(id)arg1;
- (id)neighborsOfNode:(id)arg1;
- (void)addNode:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)initWithSeparation:(double)arg1;

@end

