//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartResizer.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartPieResizer : TSCH3DChartResizer
{
    tvec2_01ee4891 mDirections;
}

+ (float)perspectiveness;
+ (tvec2_84d5962d)adjustLabelWrapSize:(const tvec2_84d5962d *)arg1;
- (id).cxx_construct;
- (tvec2_84d5962d)updateResizerFromRequestedSize:(const tvec2_84d5962d *)arg1 startingSize:(tvec2_84d5962d *)arg2;
- (tvec2_84d5962d)updateDirectionsFromRequestedSize:(const tvec2_84d5962d *)arg1 startingSize:(tvec2_84d5962d *)arg2;
- (tvec2_84d5962d)squareSize:(const tvec2_84d5962d *)arg1;
- (tvec3_17f03ce0)adjust:(tvec3_17f03ce0 *)arg1 by:(float)arg2;
- (void)setScale:(tvec3_17f03ce0 *)arg1;
- (tvec2_01ee4891)canImprove;

@end

