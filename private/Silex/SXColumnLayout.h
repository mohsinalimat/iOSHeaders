//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>

@class SXDocumentLayout;

@interface SXColumnLayout : NSObject <NSCopying>
{
    SXDocumentLayout *_documentLayout;
    long long _layoutWidth;
    long long _leftMargin;
    long long _rightMargin;
    long long _gutter;
    unsigned long long _numberOfColumns;
    double _columnWidth;
    long long _leftColumnOffset;
    long long _topPadding;
    long long _bottomPadding;
    long long _rightColumnOffset;
    double _leftInset;
    double _rightInset;
    double _minimumHeight;
    double _minimumViewportWidthForLooseLayout;
    unsigned long long _layoutColumns;
    struct CGSize _viewportSize;
    struct CGSize _targetedViewportSize;
}

@property(readonly, nonatomic) unsigned long long layoutColumns; // @synthesize layoutColumns=_layoutColumns;
@property(nonatomic) double minimumViewportWidthForLooseLayout; // @synthesize minimumViewportWidthForLooseLayout=_minimumViewportWidthForLooseLayout;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
@property(nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property(nonatomic) long long rightColumnOffset; // @synthesize rightColumnOffset=_rightColumnOffset;
@property(nonatomic) long long bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) long long topPadding; // @synthesize topPadding=_topPadding;
@property(readonly, nonatomic) long long leftColumnOffset; // @synthesize leftColumnOffset=_leftColumnOffset;
@property(readonly, nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(readonly, nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) long long gutter; // @synthesize gutter=_gutter;
@property(readonly, nonatomic) long long rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, nonatomic) long long leftMargin; // @synthesize leftMargin=_leftMargin;
@property(readonly, nonatomic) long long layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(readonly, nonatomic) SXDocumentLayout *documentLayout; // @synthesize documentLayout=_documentLayout;
@property(readonly, nonatomic) struct CGSize targetedViewportSize; // @synthesize targetedViewportSize=_targetedViewportSize;
@property(readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (double)widthForColumnRange:(struct _NSRange)arg1 ignoreMargin:(unsigned long long)arg2 ignoreGutter:(unsigned long long)arg3;
- (double)xPositionForColumnIndex:(long long)arg1 ignoreMargin:(unsigned long long)arg2 ignoreGutter:(unsigned long long)arg3;
- (struct _NSRange)convertColumnRange:(struct _NSRange)arg1 minimumColumnLength:(long long)arg2;
- (id)columnLayoutForComponentBlueprint:(id)arg1;
- (id)initWithViewportSize:(struct CGSize)arg1 targetedViewportSize:(struct CGSize)arg2 layoutWidth:(double)arg3 documentLayout:(id)arg4 numberOfLayoutColumns:(unsigned long long)arg5 leftMargin:(double)arg6 rightMargin:(double)arg7 numberOfColumns:(unsigned long long)arg8 columnWidth:(double)arg9;

@end

