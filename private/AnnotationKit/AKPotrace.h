//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKPotrace : NSObject
{
    struct CGPath *_cachedPath;
    struct potrace_bitmap_s *_potraceBitmap;
    struct potrace_param_s *_potraceParameters;
}

+ (struct CGPath *)newCGPathFromPotracePath:(struct potrace_path_s *)arg1;
- (void)_generatePath;
- (void)_clearPathIfNecessary;
@property double opttolerance;
@property int opticurve;
@property double alphamax;
@property int turnpolicy;
@property int turdsize;
- (struct CGPath *)CGPath;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 flipped:(_Bool)arg2 whiteIsInside:(_Bool)arg3;

@end

