//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _TVInfoCellView : UIView <TVAppTemplateImpressionable>
{
    _Bool _headerOnLeft;
    UIView *_headerContentView;
    NSArray *_dataViews;
    double _headerWidth;
    double _headerMaxWidth;
    double _headerMinWidth;
    double _normalizedHeaderWidth;
    struct UIEdgeInsets _headerMargin;
}

+ (id)infoCellViewWithElement:(id)arg1 existingView:(id)arg2;
@property(nonatomic) double normalizedHeaderWidth; // @synthesize normalizedHeaderWidth=_normalizedHeaderWidth;
@property(nonatomic) struct UIEdgeInsets headerMargin; // @synthesize headerMargin=_headerMargin;
@property(nonatomic) double headerMinWidth; // @synthesize headerMinWidth=_headerMinWidth;
@property(nonatomic) double headerMaxWidth; // @synthesize headerMaxWidth=_headerMaxWidth;
@property(nonatomic) double headerWidth; // @synthesize headerWidth=_headerWidth;
@property(nonatomic) _Bool headerOnLeft; // @synthesize headerOnLeft=_headerOnLeft;
@property(retain, nonatomic) NSArray *dataViews; // @synthesize dataViews=_dataViews;
@property(retain, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
- (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 withHeaderWidth:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)minimumHeaderWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

