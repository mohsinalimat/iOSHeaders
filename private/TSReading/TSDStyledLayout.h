//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDDrawableLayout.h>

@interface TSDStyledLayout : TSDDrawableLayout
{
    _Bool mIsUpdatingOpacity;
    double mDynamicOpacity;
}

- (void)dynamicOpacityChangeDidEnd;
- (void)dynamicOpacityUpdateToValue:(double)arg1;
- (void)dynamicOpacityChangeDidBegin;
- (_Bool)canFlip;
- (_Bool)isInvisible;
@property(readonly, nonatomic) double opacity;
- (struct CGRect)frameForCulling;
- (struct CGRect)reflectionFrameForSubRect:(struct CGRect)arg1;
- (struct CGRect)reflectionFrameInRoot;
- (struct CGRect)reflectionFrame;
- (struct CGRect)i_baseFrame;
- (struct CGRect)reflectionBoundsForRect:(struct CGRect)arg1;
- (struct CGRect)shadowedNaturalBoundsWithoutOffset;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;
- (id)styledInfo;

@end

