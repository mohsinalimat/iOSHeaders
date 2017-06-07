//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKAxisLabelStyle, HKFillStyle, HKStrokeStyle, HKTickStyle;

@interface HKAxisStyle : NSObject <NSCopying>
{
    _Bool _showGridLines;
    HKStrokeStyle *_gridLineStyle;
    HKStrokeStyle *_axisLineStyle;
    HKTickStyle *_tickStyle;
    HKAxisLabelStyle *_labelStyle;
    unsigned long long _tickPositions;
    unsigned long long _axisLabelPosition;
    HKFillStyle *_fillStyle;
    double _fillInnerPadding;
    double _fillOuterPadding;
    long long _location;
}

+ (id)defaultStyle;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(nonatomic) double fillOuterPadding; // @synthesize fillOuterPadding=_fillOuterPadding;
@property(nonatomic) double fillInnerPadding; // @synthesize fillInnerPadding=_fillInnerPadding;
@property(retain, nonatomic) HKFillStyle *fillStyle; // @synthesize fillStyle=_fillStyle;
@property(nonatomic) _Bool showGridLines; // @synthesize showGridLines=_showGridLines;
@property(nonatomic) unsigned long long axisLabelPosition; // @synthesize axisLabelPosition=_axisLabelPosition;
@property(nonatomic) unsigned long long tickPositions; // @synthesize tickPositions=_tickPositions;
@property(retain, nonatomic) HKAxisLabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
@property(retain, nonatomic) HKTickStyle *tickStyle; // @synthesize tickStyle=_tickStyle;
@property(retain, nonatomic) HKStrokeStyle *axisLineStyle; // @synthesize axisLineStyle=_axisLineStyle;
@property(retain, nonatomic) HKStrokeStyle *gridLineStyle; // @synthesize gridLineStyle=_gridLineStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

