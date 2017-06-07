//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface FIUIDeepBreathingGoalView : UIView
{
    NSMutableArray *_petals;
    NSMutableArray *_petalOverlaps;
    double _petalRadius;
    long long _completedSessionCount;
}

@property(nonatomic) long long completedSessionCount; // @synthesize completedSessionCount=_completedSessionCount;
@property(nonatomic) double petalRadius; // @synthesize petalRadius=_petalRadius;
- (void).cxx_destruct;
- (double)_angleFromPetalIndex:(long long)arg1 toPetalIndex:(long long)arg2;
- (struct CGPoint)_centerForPetalAtIndex:(long long)arg1 distanceFromCenter:(double)arg2;
- (void)_layoutPetals;
- (void)layoutSubviews;
- (void)_updateColors;
- (id)initWithFrame:(struct CGRect)arg1;

@end

