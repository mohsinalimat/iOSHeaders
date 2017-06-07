//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIPointIterator : NSObject
{
}

+ (id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(_Bool)arg3;
+ (void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (void)processChildAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (void)processSelfAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (_Bool)isDoneForState:(struct ODIPointIteratorState *)arg1;
+ (_Bool)isPoint:(id)arg1 ofType:(int)arg2;
+ (_Bool)addPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(_Bool)arg3;

@end

