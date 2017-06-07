//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKRing : NSObject
{
    double _fillFraction;
    double _strokeWidth;
    double _backgroundRingAlpha;
    double _radius;
    long long _ringStyle;
}

+ (id)_fillFractionStringForFillFraction:(float)arg1 withFormatter:(id)arg2;
+ (id)fillFractionStringWithSymbolForFillFraction:(float)arg1;
+ (id)fillFractionStringForFillFraction:(float)arg1;
@property long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property double radius; // @synthesize radius=_radius;
@property double backgroundRingAlpha; // @synthesize backgroundRingAlpha=_backgroundRingAlpha;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property double fillFraction; // @synthesize fillFraction=_fillFraction;
- (double)_validFillFraction:(double)arg1;
- (id)fillFractionStringWithSymbol;
- (id)fillFractionString;
- (void)fillFraction:(double)arg1;
- (id)ringImage;
- (id)initWithFillFraction:(double)arg1 style:(long long)arg2 radius:(double)arg3 strokeWidth:(double)arg4;
- (id)initWithFillFraction:(double)arg1 style:(long long)arg2;
- (id)init;

@end

