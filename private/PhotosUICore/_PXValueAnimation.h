//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PXValueAnimation : NSObject
{
    double _startTime;
    double _duration;
    struct _PXValueAnimationSpec _spec;
}

@property(readonly, nonatomic) struct _PXValueAnimationSpec spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool completed;
@property(readonly, nonatomic) double currentValue;
- (double)elapsedTime;
- (id)initWithDuration:(double)arg1 spec:(struct _PXValueAnimationSpec)arg2;
- (id)init;

@end

