//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDPathSource.h>

#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSDSmartPathSource-Protocol.h>

@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing>
{
    double mCornerRadius;
    double mTailSize;
    struct CGPoint mTailPosition;
    struct CGSize mNaturalSize;
    _Bool mIsTailAtCenter;
}

+ (id)quoteBubbleWithTailPosition:(struct CGPoint)arg1 tailSize:(double)arg2 naturalSize:(struct CGSize)arg3;
+ (id)calloutWithCornerRadius:(double)arg1 tailPosition:(struct CGPoint)arg2 tailSize:(double)arg3 naturalSize:(struct CGSize)arg4;
- (struct CGPoint)p_getControlKnobPointForRoundedRect;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint)arg1;
- (id)p_buildPath;
- (id)p_basePath;
- (void)p_getTailPath:(id)arg1 center:(struct CGPoint *)arg2 tailSize:(double *)arg3 intersections:(struct CGPoint [2])arg4;
- (struct CGPoint)p_adjustedCenterForPath:(id)arg1;
- (void)p_setTailAtCenter:(_Bool)arg1;
- (void)p_setNaturalSize:(struct CGSize)arg1;
- (void)p_setTailSize:(double)arg1;
- (struct CGPoint)p_tailPosition;
- (void)p_setTailPosition:(struct CGPoint)arg1;
- (void)p_setCornerRadius:(double)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (id)interiorWrapPath;
- (id)bezierPathWithoutFlips;
@property(readonly, nonatomic) _Bool isTailAtCenter;
@property(readonly, nonatomic) struct CGPoint tailCenter;
- (struct CGSize)naturalSize;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (void)setNaturalSize:(struct CGSize)arg1;
- (id)valueForSetSelector:(SEL)arg1;
@property(nonatomic) struct CGPoint tailKnobPosition;
@property(nonatomic) struct CGPoint tailSizeKnobPosition;
@property(readonly, nonatomic) double maxTailSize;
@property(nonatomic) double tailSize;
@property(readonly, nonatomic) double maxCornerRadius;
@property(nonatomic) double cornerRadius;
- (_Bool)isOval;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
@property(readonly) unsigned long long numberOfControlKnobs;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCornerRadius:(double)arg1 tailPosition:(struct CGPoint)arg2 tailSize:(double)arg3 naturalSize:(struct CGSize)arg4 tailAtCenter:(_Bool)arg5;

@end

