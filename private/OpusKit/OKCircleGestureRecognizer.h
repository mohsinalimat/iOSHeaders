//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class CAShapeLayer;

@interface OKCircleGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _origin;
    double _lastAngle;
    double _angle;
    CAShapeLayer *_roundLayer;
    CAShapeLayer *_pointLayer;
    CAShapeLayer *_originLayer;
    double _continuousProgress;
    double _diffenceProgress;
}

@property(readonly, nonatomic) double diffenceProgress; // @synthesize diffenceProgress=_diffenceProgress;
@property(readonly, nonatomic) double continuousProgress; // @synthesize continuousProgress=_continuousProgress;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)resetDebug;
- (void)updateDebug:(struct CGPoint)arg1 angle:(double)arg2;
- (void)initDebugLayer:(struct CGPoint)arg1;

@end

