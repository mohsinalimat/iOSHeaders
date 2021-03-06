//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKitUI/_SBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _SBIconProgressPausedTransition : _SBIconProgressTransition
{
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    _Bool _toPaused;
    double _fraction;
}

+ (id)newTransitionToPaused:(_Bool)arg1;
- (void)_updateElapsedTimeFromFraction;
- (void)_updateTimingFunction;
- (void)_updateView:(id)arg1;
- (_Bool)isCompleteWithView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;
- (void)updateToPaused:(_Bool)arg1;
- (void)dealloc;
- (id)_initToPaused:(_Bool)arg1;

@end

