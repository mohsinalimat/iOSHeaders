//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlColorPaletteViewInteractionDelegate-Protocol.h>
#import <HomeUI/HUQuickControlColorPickerViewInteractionDelegate-Protocol.h>
#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HFColorPalette, HFColorPaletteColor, HUColorPaletteView, HUColorPickerView, HUQuickControlCircleButton, HUQuickControlSegmentedControl, HUQuickControlViewProfile, NSLayoutConstraint, NSString;
@protocol HUQuickControlColorViewInteractionDelegate, HUQuickControlInteractiveView;

@interface HUQuickControlColorView : UIView <HUQuickControlColorPickerViewInteractionDelegate, HUQuickControlColorPaletteViewInteractionDelegate, HUQuickControlInteractiveView>
{
    HUQuickControlViewProfile *_profile;
    id <HUQuickControlColorViewInteractionDelegate> _interactionDelegate;
    HFColorPalette *_colorPalette;
    unsigned long long _activeMode;
    HFColorPaletteColor *_selectedColor;
    HUColorPaletteView *_colorPaletteView;
    HUColorPickerView *_colorPickerView;
    HUQuickControlCircleButton *_switchButton;
    HUQuickControlSegmentedControl *_colorPickerModeSegmentedControl;
    NSLayoutConstraint *_switchButtonWidthConstraint;
    NSLayoutConstraint *_switchButtonHeightConstraint;
    double _circleRadius;
}

@property(nonatomic) double circleRadius; // @synthesize circleRadius=_circleRadius;
@property(retain, nonatomic) NSLayoutConstraint *switchButtonHeightConstraint; // @synthesize switchButtonHeightConstraint=_switchButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *switchButtonWidthConstraint; // @synthesize switchButtonWidthConstraint=_switchButtonWidthConstraint;
@property(retain, nonatomic) HUQuickControlSegmentedControl *colorPickerModeSegmentedControl; // @synthesize colorPickerModeSegmentedControl=_colorPickerModeSegmentedControl;
@property(retain, nonatomic) HUQuickControlCircleButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) HUColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(retain, nonatomic) HUColorPaletteView *colorPaletteView; // @synthesize colorPaletteView=_colorPaletteView;
@property(retain, nonatomic) HFColorPaletteColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) unsigned long long activeMode; // @synthesize activeMode=_activeMode;
@property(retain, nonatomic) HFColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) __weak id <HUQuickControlColorViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) HUQuickControlViewProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)controlView:(id)arg1 colorPickerModeDidChange:(unsigned long long)arg2;
- (void)controlView:(id)arg1 interactionStateDidChange:(_Bool)arg2 forFirstTouch:(_Bool)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
@property(retain, nonatomic) id value;
@property(readonly, nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_configureConstraints;
- (double)_switchButtonFontSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateColorPickerModeSwitchView;
- (void)_createColorPickerModeSegmentedControlIfNecessary;
- (void)_switchButtonTapped:(id)arg1;
- (void)_updateSwitchButtonText;
- (void)_updateSwitchButtonColor;
@property(readonly, nonatomic, getter=isSelectedColorInPalette) _Bool selectedColorInPalette;
- (id)_allControlViews;
@property(readonly, nonatomic) UIView<HUQuickControlInteractiveView> *activeView;
- (void)layoutSubviews;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id secondaryValue;
@property(nonatomic) long long sizeSubclass;
@property(readonly) Class superclass;

@end
