//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIButtonBarLayout.h>

@class NSLayoutConstraint, UIBarButtonItem, UILayoutGuide, UIView, _UITAMICAdaptorView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarItemLayout : _UIButtonBarLayout
{
    UIBarButtonItem *_item;
    UIView *_itemView;
    _UITAMICAdaptorView *_itemViewWrapper;
    NSLayoutConstraint *_requestedSize;
    NSLayoutConstraint *_maximumAlignmentSize;
    NSLayoutConstraint *_groupSameSize;
    NSLayoutConstraint *_popoverGuideLeading;
    NSLayoutConstraint *_popoverGuideTrailing;
    NSLayoutConstraint *_popoverGuideTop;
    NSLayoutConstraint *_popoverGuideHeight;
    _Bool _useGroupSizing;
    UILayoutGuide *_popoverLayoutGuide;
    CDUnknownBlockType _itemViewGenerator;
}

@property(copy, nonatomic) CDUnknownBlockType itemViewGenerator; // @synthesize itemViewGenerator=_itemViewGenerator;
@property(nonatomic) _Bool useGroupSizing; // @synthesize useGroupSizing=_useGroupSizing;
@property(readonly, nonatomic) UILayoutGuide *popoverLayoutGuide; // @synthesize popoverLayoutGuide=_popoverLayoutGuide;
- (void).cxx_destruct;
- (id)description;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (void)_updateItemViewSizing;
- (void)_updateCustomView;
- (_Bool)_shouldBeDirty;
- (id)_item;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (_Bool)shouldHoriziontallyCenterView:(id)arg1;
- (void)_updateItemView;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;
- (id)initWithLayoutMetrics:(id)arg1;

@end

