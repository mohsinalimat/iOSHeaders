//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSIndexSet, NSMutableArray, NSMutableIndexSet, UIImageView, UIView;
@protocol CAMExpandableMenuButtonDelegate;

@interface CAMExpandableMenuButton : UIControl
{
    _Bool _expanded;
    long long _layoutStyle;
    long long _selectedIndex;
    long long _orientation;
    NSMutableArray *__menuItems;
    UIView *__headerView;
    NSIndexSet *__shownIndexesWhileCollapsed;
    NSMutableIndexSet *__highlightedIndexesWhileCollapsed;
    UIImageView *__padBackgroundView;
    id <CAMExpandableMenuButtonDelegate> _expandableMenuDelegate;
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (double)expansionDuration;
@property(nonatomic) __weak id <CAMExpandableMenuButtonDelegate> expandableMenuDelegate; // @synthesize expandableMenuDelegate=_expandableMenuDelegate;
@property(readonly, nonatomic) UIImageView *_padBackgroundView; // @synthesize _padBackgroundView=__padBackgroundView;
@property(readonly, copy, nonatomic) NSMutableIndexSet *_highlightedIndexesWhileCollapsed; // @synthesize _highlightedIndexesWhileCollapsed=__highlightedIndexesWhileCollapsed;
@property(readonly, copy, nonatomic) NSIndexSet *_shownIndexesWhileCollapsed; // @synthesize _shownIndexesWhileCollapsed=__shownIndexesWhileCollapsed;
@property(readonly, nonatomic) UIView *_headerView; // @synthesize _headerView=__headerView;
@property(readonly, nonatomic) NSMutableArray *_menuItems; // @synthesize _menuItems=__menuItems;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (_Bool)shouldIgnoreMenuInteraction;
- (_Bool)shouldAllowExpansion;
- (id)shownIndexesWhileCollapsed;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)updateToContentSize:(id)arg1;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 forIndex:(long long)arg2;
- (void)_updateFromOrientationChangeAnimated:(_Bool)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_applyMenuItemTextAlignmentAndShadowForCurrentOrientation;
- (void)completeExpansionToProposedFrame:(struct CGRect)arg1;
- (void)finishExpansionAnimated:(_Bool)arg1;
- (void)startExpansionWithProposedFrame:(struct CGRect)arg1;
- (void)finishCollapsingAnimated:(_Bool)arg1;
- (void)startCollapsingWithProposedFrame:(struct CGRect)arg1;
- (void)_convertAllSubviewsToProposedFrame:(struct CGRect)arg1;
- (void)_updateFromExpansionChangeAnimated:(_Bool)arg1;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_applyMenuItemColorsForCurrentState;
- (void)_applyHeaderViewForCurrentExpansionState;
- (void)collapseMenuAnimated:(_Bool)arg1;
- (void)expandMenuAnimated:(_Bool)arg1;
- (void)_createPadBackgroundView;
- (void)reloadData;
- (void)_updateFromSelectedIndexChange;
- (id)_selectedLabel;
- (_Bool)_wantsHeaderViewToBeVisible;
- (_Bool)wantsSelectedItemToBeVisible;
- (void)layoutSubviews;
- (struct CGSize)_layoutMenuButton:(_Bool)arg1 expanded:(_Bool)arg2;
- (struct CGSize)_layoutForPadStyle:(_Bool)arg1 expanded:(_Bool)arg2;
- (struct CGSize)_layoutForPhoneStyle:(_Bool)arg1 expanded:(_Bool)arg2;
- (struct CGSize)_layoutForPadExpandedPortraitButton:(_Bool)arg1;
- (struct CGSize)_layoutForPadCollapsedPortraitButton:(_Bool)arg1;
- (struct CGSize)_layoutForPhoneExpandedLandscapeButton:(_Bool)arg1;
- (struct CGSize)_layoutForPhoneExpandedPortraitButton:(_Bool)arg1;
- (struct CGSize)_layoutForPhoneCollapsedLandscapeButton:(_Bool)arg1;
- (struct CGSize)_layoutForPhoneCollapsedPortraitButton:(_Bool)arg1;
- (double)collapsedSelectedLabelHorizontalMargin;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSizeForExpansion:(_Bool)arg1;
- (struct CGRect)frameForAlignmentRect:(struct CGRect)arg1 expanded:(_Bool)arg2;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1 expanded:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;

@end

