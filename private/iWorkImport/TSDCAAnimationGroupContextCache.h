//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDCAAnimationContextCache.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSDCAAnimationGroupContextCache : TSDCAAnimationContextCache
{
    NSArray *_animations;
    NSArray *_animationContextCaches;
}

@property(readonly, nonatomic) NSArray *animationContextCaches; // @synthesize animationContextCaches=_animationContextCaches;
@property(readonly, nonatomic) NSArray *animations; // @synthesize animations=_animations;
- (double)p_groupTimingFactorAtTime:(double)arg1;
- (id)valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (id)bestAnimationContextCacheForKeyPath:(id)arg1 atTime:(double)arg2;
- (void)dealloc;
- (id)initWithAnimation:(id)arg1;

@end

