//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraKit/CMKExpandableMenuButtonDelegate-Protocol.h>

@class CMKElapsedTimeView, CMKExpandableMenuButton, CMKFilterButton, CMKFlashButton, CMKFlipButton, CMKHDRButton, CMKImageWell, CMKModeDial, CMKShutterButton, CMKSlalomIndicatorView, CMKTimerButton, UIButton;
@protocol CMKBottomBarDelegate;

@interface CMKBottomBar : UIView <CMKExpandableMenuButtonDelegate>
{
    id <CMKBottomBarDelegate> _delegate;
    long long _orientation;
    long long _backgroundStyle;
    UIView *_backgroundView;
    CMKModeDial *_modeDial;
    CMKImageWell *_imageWell;
    CMKShutterButton *_stillDuringVideoButton;
    CMKShutterButton *_shutterButton;
    CMKFilterButton *_filterButton;
    CMKFlipButton *_flipButton;
    CMKFlashButton *_flashButton;
    CMKElapsedTimeView *_elapsedTimeView;
    CMKHDRButton *_HDRButton;
    CMKTimerButton *_timerButton;
    CMKSlalomIndicatorView *_slalomIndicatorView;
    UIButton *_cancelButton;
    CMKExpandableMenuButton *__expandedMenuButton;
    UIView *__shutterButtomBottomLayoutSpacer;
    UIView *__imageWellBottomLayoutSpacer;
    UIView *__filterButtonBottomLayoutSpacer;
    UIView *__slalomIndicatorBottomLayoutSpacer;
    UIView *__stillDuringVideoButtonBottomLayoutSpacer;
    UIView *__elapsedTimeViewCenteringLayoutSpacer;
    UIView *__hdrButtonCenteringLayoutSpacer;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, nonatomic) UIView *_hdrButtonCenteringLayoutSpacer; // @synthesize _hdrButtonCenteringLayoutSpacer=__hdrButtonCenteringLayoutSpacer;
@property(readonly, nonatomic) UIView *_elapsedTimeViewCenteringLayoutSpacer; // @synthesize _elapsedTimeViewCenteringLayoutSpacer=__elapsedTimeViewCenteringLayoutSpacer;
@property(readonly, nonatomic) UIView *_stillDuringVideoButtonBottomLayoutSpacer; // @synthesize _stillDuringVideoButtonBottomLayoutSpacer=__stillDuringVideoButtonBottomLayoutSpacer;
@property(readonly, nonatomic) UIView *_slalomIndicatorBottomLayoutSpacer; // @synthesize _slalomIndicatorBottomLayoutSpacer=__slalomIndicatorBottomLayoutSpacer;
@property(readonly, nonatomic) UIView *_filterButtonBottomLayoutSpacer; // @synthesize _filterButtonBottomLayoutSpacer=__filterButtonBottomLayoutSpacer;
@property(readonly, nonatomic) UIView *_imageWellBottomLayoutSpacer; // @synthesize _imageWellBottomLayoutSpacer=__imageWellBottomLayoutSpacer;
@property(readonly, nonatomic) UIView *_shutterButtomBottomLayoutSpacer; // @synthesize _shutterButtomBottomLayoutSpacer=__shutterButtomBottomLayoutSpacer;
@property(retain, nonatomic, setter=_setExpandedMenuButton:) CMKExpandableMenuButton *_expandedMenuButton; // @synthesize _expandedMenuButton=__expandedMenuButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) CMKSlalomIndicatorView *slalomIndicatorView; // @synthesize slalomIndicatorView=_slalomIndicatorView;
@property(retain, nonatomic) CMKTimerButton *timerButton; // @synthesize timerButton=_timerButton;
@property(retain, nonatomic) CMKHDRButton *HDRButton; // @synthesize HDRButton=_HDRButton;
@property(retain, nonatomic) CMKElapsedTimeView *elapsedTimeView; // @synthesize elapsedTimeView=_elapsedTimeView;
@property(retain, nonatomic) CMKFlashButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) CMKFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) CMKFilterButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) CMKShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property(retain, nonatomic) CMKShutterButton *stillDuringVideoButton; // @synthesize stillDuringVideoButton=_stillDuringVideoButton;
@property(retain, nonatomic) CMKImageWell *imageWell; // @synthesize imageWell=_imageWell;
@property(retain, nonatomic) CMKModeDial *modeDial; // @synthesize modeDial=_modeDial;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <CMKBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)expandMenuButton:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)expandedFrameForMenuButton:(id)arg1;
- (void)collapseMenuButton:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)collapsedFrameForMenuButton:(id)arg1;
- (_Bool)_shouldHideFlashButton;
- (_Bool)_shouldHideTimerButton;
- (_Bool)_shouldHideHDRButton;
- (_Bool)_shouldHideElapsedTimeView;
- (void)_updateHiddenViewsForButtonExpansionAnimated:(_Bool)arg1;
- (void)_layoutMenuButtons:(id)arg1 apply:(_Bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect *)arg5;
- (id)_currentMenuButtons;
- (void)_updateBackgroundStyleAnimated:(_Bool)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateImageWellInsetsForOrientation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_layoutForVerticalOrientation;
- (void)_layoutForHorizontalOrientation;
- (void)_removeAllConstraints;
- (void)updateConstraints;
- (void)_setupVerticalConstraints;
- (void)_setupVerticalCancelButtonConstraints;
- (void)_setupVerticalSlalomIndicatorConstraints;
- (void)_setupVerticalImageWellConstraints;
- (void)_setupVerticalModeDialConstraints;
- (void)_setupVerticalShutterButtonConstraints;
- (void)_setupVerticalElapsedTimeViewConstraints;
- (void)_setupVerticalFlipButtonConstraints;
- (void)_setupVerticalBackgroundViewConstraints;
- (void)_setupHorizontalConstraints;
- (void)_setupHorizontalCancelButtonConstraints;
- (void)_setupHorizontalStillDuringVideoButtonConstraints;
- (void)_setupHorizontalSlalomIndicatorConstraints;
- (void)_setupHorizontalFilterButtonConstraints;
- (void)_setupHorizontalImageWellConstraints;
- (void)_setupHorizontalShutterButtonConstraints;
- (void)_setupHorizontalModeDialConstraints;
- (void)_setupHorizontalBackgroundViewConstraints;
- (id)initWithOrientation:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKBottomBarInitialization;

@end

