//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMapTable, NSTimer, UIScreen, _UIFocusEngineScrollViewOffsets;

__attribute__((visibility("hidden")))
@interface _UIFocusDisplayLinkScrollAnimator : NSObject
{
    UIScreen *_screen;
    _UIFocusEngineScrollViewOffsets *_singleScrollViewEntry;
    NSMapTable *_scrollViews;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    double _lastTimerFireDate;
    double _defaultConvergenceRate;
}

- (void).cxx_destruct;
- (struct CGPoint)_applyAccelerationLimitToAcceleration:(struct CGPoint)arg1 currentOffset:(struct CGPoint)arg2 targetOffset:(struct CGPoint)arg3;
- (void)_processEntry:(id)arg1 timeDelta:(long long)arg2 completed:(id)arg3;
- (void)_commonHeartbeat:(double)arg1;
- (void)_displayLinkHeartbeat:(id)arg1;
- (void)_timerHeartbeat:(id)arg1;
- (_Bool)_shouldPushAndPopRunLoopModes;
- (void)_updateHeartbeatConfiguration;
- (void)_switchToTimerScrolling;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)_canCreateDisplayLink;
- (id)_entryForScrollView:(id)arg1 createIfNeeded:(_Bool)arg2;
- (struct CGPoint)velocityToScrollFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2;
- (struct CGPoint)currentVelocityForScrollView:(id)arg1;
- (struct CGPoint)targetContentOffsetForScrollView:(id)arg1;
- (_Bool)isAnimatingScrollView:(id)arg1;
- (void)cancelScrollingForScrollView:(id)arg1;
- (void)setTargetContentOffset:(struct CGPoint)arg1 forScrollView:(id)arg2 convergenceRate:(double)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) double defaultConvergenceRate;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;

@end

