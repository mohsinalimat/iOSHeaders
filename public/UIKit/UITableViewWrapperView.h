//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UITableViewWrapperView : UIScrollView
{
    NSMutableArray *_stuckToBackViews;
}

@property(readonly, nonatomic) NSArray *stuckToBackViews; // @synthesize stuckToBackViews=_stuckToBackViews;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_forwardsToParentScroller;
- (void)setBounds:(struct CGRect)arg1;
- (void)handleSwipeBeginning:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)_unstickView:(id)arg1;
- (void)_stickViewToBack:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

