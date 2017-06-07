//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface PXTouchingUIGestureRecognizer : UIGestureRecognizer
{
    double _minimumTouchDuration;
    double _maximumTouchMovement;
    unsigned long long __touchCount;
    unsigned long long __beginRequestID;
    struct CGPoint __initialPointInView;
}

@property(nonatomic, setter=_setInitialPointInView:) struct CGPoint _initialPointInView; // @synthesize _initialPointInView=__initialPointInView;
@property(nonatomic, setter=_setBeginRequestID:) unsigned long long _beginRequestID; // @synthesize _beginRequestID=__beginRequestID;
@property(nonatomic, setter=_setTouchCount:) unsigned long long _touchCount; // @synthesize _touchCount=__touchCount;
@property(nonatomic) double maximumTouchMovement; // @synthesize maximumTouchMovement=_maximumTouchMovement;
@property(nonatomic) double minimumTouchDuration; // @synthesize minimumTouchDuration=_minimumTouchDuration;
- (void)reset;
- (void)setEnabled:(_Bool)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_beginWithRequestID:(unsigned long long)arg1;
- (void)_decrementTouchesBy:(unsigned long long)arg1;
- (void)_incrementTouchesBy:(unsigned long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

