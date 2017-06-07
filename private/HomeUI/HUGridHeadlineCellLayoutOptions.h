//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridHeadlineCellLayoutOptions : HUGridCellLayoutOptions
{
    _Bool _editing;
    double _topOfScreenToHeadlineBaselinePercentage;
    double _minimumFontSize;
    double _editingBackgroundHeight;
    long long _viewSizeSubclass;
    double _containerLeadingMargin;
    double _containerTrailingMargin;
    struct CGSize _viewSize;
}

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1 viewSizeSubclass:(long long)arg2 viewSize:(struct CGSize)arg3 containerLeadingMargin:(double)arg4 containerTrailingMargin:(double)arg5;
+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
@property(readonly, nonatomic) double containerTrailingMargin; // @synthesize containerTrailingMargin=_containerTrailingMargin;
@property(readonly, nonatomic) double containerLeadingMargin; // @synthesize containerLeadingMargin=_containerLeadingMargin;
@property(readonly, nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(readonly, nonatomic) long long viewSizeSubclass; // @synthesize viewSizeSubclass=_viewSizeSubclass;
@property(nonatomic) double editingBackgroundHeight; // @synthesize editingBackgroundHeight=_editingBackgroundHeight;
@property(nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property(nonatomic) double topOfScreenToHeadlineBaselinePercentage; // @synthesize topOfScreenToHeadlineBaselinePercentage=_topOfScreenToHeadlineBaselinePercentage;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (double)cellInnerMargin;
@property(readonly, nonatomic) double editingBackgroundMinimumWidth;
@property(readonly, nonatomic) double topOfScreenToHeadlineBaselineDistance;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

