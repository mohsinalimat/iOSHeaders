//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    double _initialPosition;
    double _destinationPosition;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double destinationPosition; // @synthesize destinationPosition=_destinationPosition;
@property(nonatomic) double initialPosition; // @synthesize initialPosition=_initialPosition;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void).cxx_destruct;

@end

