//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKBorderLineView.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, UIColor, UIStackView, UIView;

@interface HKLegendView : HKBorderLineView
{
    UIStackView *_mainStack;
    NSMutableArray *_leftEntryViews;
    NSMutableArray *_rightEntryViews;
    UIView *_topDividerView;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSArray *_leftEntries;
    NSArray *_rightEntries;
    UIColor *_topBorderColor;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIColor *topBorderColor; // @synthesize topBorderColor=_topBorderColor;
@property(readonly, nonatomic) NSArray *rightEntries; // @synthesize rightEntries=_rightEntries;
@property(readonly, nonatomic) NSArray *leftEntries; // @synthesize leftEntries=_leftEntries;
- (void).cxx_destruct;
- (void)_updateLegendLeftEntries:(id)arg1 rightEntries:(id)arg2;
- (void)_rebuildStackStructure;
- (void)setLeftEntries:(id)arg1 rightEntries:(id)arg2;
- (id)initWithEdgeInsets:(struct UIEdgeInsets)arg1;

@end

