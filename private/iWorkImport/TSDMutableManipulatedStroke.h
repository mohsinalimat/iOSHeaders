//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDManipulatedStroke.h>

#import <iWorkImport/TSDMutableStroke-Protocol.h>

@class TSDStrokePattern, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDMutableManipulatedStroke : TSDManipulatedStroke <TSDMutableStroke>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;
@property(copy, nonatomic) TSDStrokePattern *pattern;
@property(nonatomic) int join;
@property(nonatomic) double miterLimit;
@property(nonatomic) int cap;
@property(nonatomic) double actualWidth;
@property(nonatomic) double width;
@property(copy, nonatomic) TSUColor *color;

@end

