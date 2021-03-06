//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaPlayer/UIGestureRecognizerDelegate-Protocol.h>

@class MPActivityGestureRecognizer, MPSwipeGestureRecognizer, MPTapGestureRecognizer, NSString, UIPinchGestureRecognizer;
@protocol MPSwipableViewDelegate;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate>
{
    long long _enabledGestureTypes;
    long long _simultaneousGestureTypes;
    id <MPSwipableViewDelegate> _swipeDelegate;
    MPTapGestureRecognizer *_tapGestureRecognizer;
    MPSwipeGestureRecognizer *_swipeGestureRecognizer;
    MPActivityGestureRecognizer *_activityGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
}

@property(nonatomic) long long simultaneousGestureTypes; // @synthesize simultaneousGestureTypes=_simultaneousGestureTypes;
@property(nonatomic) long long enabledGestureTypes; // @synthesize enabledGestureTypes=_enabledGestureTypes;
@property(nonatomic) __weak id <MPSwipableViewDelegate> swipeDelegate; // @synthesize swipeDelegate=_swipeDelegate;
- (void).cxx_destruct;
- (void)_updateGestureRecognizersForEnabledTypes;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_pinchGestureRecognized:(id)arg1;
- (void)_activityGestureRecognized:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_swipeGestureRecognized:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

