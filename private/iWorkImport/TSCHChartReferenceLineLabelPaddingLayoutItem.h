//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartReferenceLineLabelPaddingLayoutItem : TSCHChartLayoutItem
{
    TSCHChartAxisID *mAxisID;
}

@property(retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
- (_Bool)p_hasReferenceLineLabelsWithModel:(id)arg1;
- (struct CGSize)p_calcMinSizeForModel:(id)arg1;
- (struct CGSize)calcMinSize;
- (void)dealloc;
- (id)initWithParent:(id)arg1 axisID:(id)arg2;

@end

