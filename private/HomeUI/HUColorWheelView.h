//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol HUColorWheelSpace;

@interface HUColorWheelView : UIView
{
    double _wheelHoleRadius;
    id <HUColorWheelSpace> _colorWheelSpace;
}

+ (double)_colorWheelRenderingScale;
@property(retain, nonatomic) id <HUColorWheelSpace> colorWheelSpace; // @synthesize colorWheelSpace=_colorWheelSpace;
@property(nonatomic) double wheelHoleRadius; // @synthesize wheelHoleRadius=_wheelHoleRadius;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (CDStruct_c3b9c2ee)colorWheelCoordinateForPoint:(struct CGPoint)arg1 boundedToWheel:(_Bool)arg2;
- (struct CGPoint)pointForColorWheelCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)wheelBezierPath;
- (double)_outerRadius;
- (id)initWithColorWheelSpace:(id)arg1;

@end

