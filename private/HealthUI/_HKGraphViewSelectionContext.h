//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKGraphSeries, NSArray;

@interface _HKGraphViewSelectionContext : NSObject
{
    long long _selectionState;
    NSArray *_touchPoints;
    NSArray *_selectionAreaMapping;
    NSArray *_selectedRangeBoundariesXValue;
    HKGraphSeries *_selectedSeries;
    struct CGRect _seriesSelectionRect;
}

@property(retain, nonatomic) HKGraphSeries *selectedSeries; // @synthesize selectedSeries=_selectedSeries;
@property(retain, nonatomic) NSArray *selectedRangeBoundariesXValue; // @synthesize selectedRangeBoundariesXValue=_selectedRangeBoundariesXValue;
@property(retain, nonatomic) NSArray *selectionAreaMapping; // @synthesize selectionAreaMapping=_selectionAreaMapping;
@property(retain, nonatomic) NSArray *touchPoints; // @synthesize touchPoints=_touchPoints;
@property(nonatomic) struct CGRect seriesSelectionRect; // @synthesize seriesSelectionRect=_seriesSelectionRect;
@property(nonatomic) long long selectionState; // @synthesize selectionState=_selectionState;
- (void).cxx_destruct;
@property(readonly, nonatomic) double minimumSelectionDistance;

@end

