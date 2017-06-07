//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAAnimationGroup;

@interface CMKTorchPattern : NSObject
{
    float _torchLevel;
    long long __type;
    CAAnimationGroup *__animationGroup;
    double __lastUpdateTime;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) double _lastUpdateTime; // @synthesize _lastUpdateTime=__lastUpdateTime;
@property(readonly, nonatomic) CAAnimationGroup *_animationGroup; // @synthesize _animationGroup=__animationGroup;
@property(readonly, nonatomic) long long _type; // @synthesize _type=__type;
@property(readonly, nonatomic) float torchLevel; // @synthesize torchLevel=_torchLevel;
- (void).cxx_destruct;
- (void)updateAtTime:(double)arg1;
- (void)_updateAnimationGroup;
- (id)_doubleBlinkAnimationGroup;
- (id)_blinkAnimationGroup;
- (id)_blinkAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (id)_longPatternAnimationGroup;
- (id)_shortPatternAnimationGroup;
- (id)_patternAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

