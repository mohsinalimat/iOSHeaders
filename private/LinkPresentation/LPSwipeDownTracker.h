//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PHSwipeDownTracker.h>

__attribute__((visibility("hidden")))
@interface LPSwipeDownTracker : PHSwipeDownTracker
{
    struct CGRect _initialBounds;
}

- (struct CGAffineTransform)trackedTransform;
- (struct CGPoint)anchorPoint;
- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;

@end

