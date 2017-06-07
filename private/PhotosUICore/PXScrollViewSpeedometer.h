//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>

@class NSString, NSTimer, PXScrollViewController;

@interface PXScrollViewSpeedometer : PXObservable <PXScrollViewControllerObserver>
{
    PXScrollViewController *_scrollViewController;
    long long _regime;
    long long _previousRegime;
    double __lastTime;
    NSTimer *__timeoutTimer;
    long long __nextRegime;
    long long __nextRegimeCount;
    struct CGPoint _scrollSpeed;
    struct CGRect __lastVisibleRect;
}

@property(nonatomic, setter=_setNextRegimeCount:) long long _nextRegimeCount; // @synthesize _nextRegimeCount=__nextRegimeCount;
@property(nonatomic, setter=_setNextRegime:) long long _nextRegime; // @synthesize _nextRegime=__nextRegime;
@property(retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer; // @synthesize _timeoutTimer=__timeoutTimer;
@property(nonatomic, setter=_setLastTime:) double _lastTime; // @synthesize _lastTime=__lastTime;
@property(nonatomic, setter=_setLastVisibleRect:) struct CGRect _lastVisibleRect; // @synthesize _lastVisibleRect=__lastVisibleRect;
@property(readonly, nonatomic) long long previousRegime; // @synthesize previousRegime=_previousRegime;
@property(readonly, nonatomic) long long regime; // @synthesize regime=_regime;
@property(nonatomic, setter=_setScrollSpeed:) struct CGPoint scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
@property(readonly, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
- (void).cxx_destruct;
- (void)_handleTimeoutTimer:(id)arg1;
- (void)_rescheduleTimeout;
- (long long)_newRegimeForScrollSpeed:(struct CGPoint)arg1;
- (double)fastUpperThreshold;
- (double)fastLowerThreshold;
- (double)mediumUpperThreshold;
- (double)mediumLowerThreshold;
- (void)_setPreviousRegime:(long long)arg1;
- (void)_setRegime:(long long)arg1;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)mutableChangeObject;
- (id)init;
- (id)initWithScrollController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

