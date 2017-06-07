//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TSDStroke, TSDStrokePattern, TSUColor;

@protocol TSDMutableStroke
@property(copy, nonatomic) TSDStrokePattern *pattern;
@property(nonatomic) double miterLimit;
@property(nonatomic) int join;
@property(nonatomic) int cap;
@property(nonatomic) double actualWidth;
@property(nonatomic) double width;
@property(copy, nonatomic) TSUColor *color;
- (void)setPatternPropertiesFromStroke:(TSDStroke *)arg1;
- (void)setPropertiesFromStroke:(TSDStroke *)arg1;
@end

