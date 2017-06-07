//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableDictionary, UIColor, UIImage, UIImageView, UITabBar, UITabBarButtonLabel, UITabBarSwappableImageView, UIVisualEffectView, _UIBadgeView;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl
{
    struct CGRect _hitRect;
    UITabBarSwappableImageView *_info;
    UIVisualEffectView *_vibrancyEffectView;
    UITabBarButtonLabel *_label;
    _UIBadgeView *_badge;
    UIImageView *_selectedIndicator;
    _Bool _selected;
    struct UIEdgeInsets _infoInsets;
    struct UIOffset _selectedInfoOffset;
    struct UIOffset _infoOffset;
    UIImage *_customSelectedIndicatorImage;
    struct UIOffset _labelOffset;
    NSMutableDictionary *_buttonTintColorsForState;
    NSMutableDictionary *_contentTintColorsForState;
    UIColor *_badgeColor;
    NSMutableDictionary *_badgeTextAttributesForState;
    _Bool _showsHighlightedState;
    _Bool _centerAllContents;
    Class _appearanceGuideClass;
    UITabBar *_tabBar;
}

+ (id)_defaultLabelColor;
@property(readonly, nonatomic) __weak UITabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic, setter=_setCenterAllContents:) _Bool _centerAllContents; // @synthesize _centerAllContents;
@property(nonatomic, setter=_setShowsHighlightedState:) _Bool _showsHighlightedState; // @synthesize _showsHighlightedState;
- (void).cxx_destruct;
- (id)_contentTintColorForState:(unsigned long long)arg1;
- (void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)_buttonTintColorForState:(unsigned long long)arg1;
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (struct UIOffset)_titlePositionAdjustment;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setBadgeColor:(id)arg1;
- (void)_UIAppearance_setBadgeColor:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)_sensitivitySize;
- (struct CGRect)_responderSelectionRectForCoordinateSpace:(id)arg1;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (id)_tabBar;
- (struct CGRect)_focusRegionFrameInScreen:(id)arg1;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_sendFocusAction;
- (_Bool)canBecomeFocused;
- (void)_setLabelHidden:(_Bool)arg1;
- (void)_setCustomSelectedIndicatorImage:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_appleTV_layoutSubviews;
- (struct CGSize)_appleTV_sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)_updateBadgeAppearanceAndLayoutNow:(_Bool)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)_positionBadgeAfterChangesIfNecessary:(CDUnknownBlockType)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_positionBadge;
- (void)_setImage:(id)arg1 selected:(_Bool)arg2 offset:(struct UIOffset)arg3;
- (void)_setInfoOffset:(struct UIOffset)arg1;
- (void)_setSelectedInfoOffset:(struct UIOffset)arg1;
@property(nonatomic, getter=_isSelected, setter=_setSelected:) _Bool _selected;
@property(retain, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor;
- (void)_updateToMatchCurrentState;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateInfoFrame;
- (void)_showSelectedIndicator:(_Bool)arg1 changeSelection:(_Bool)arg2;
- (void)_updateSelectedIndicatorFrame;
- (void)_updateSelectedIndicatorView;
- (id)_selectedIndicatorImage;
- (struct CGRect)_tabBarHitRect;
- (void)_setTabBarHitRect:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)_updateVibrancyEffectView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets)arg4 tabBar:(id)arg5;
- (id)_selectedIndicatorView;

@end
