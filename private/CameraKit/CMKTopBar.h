//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraKit/CMKExpandableMenuButtonDelegate-Protocol.h>

@class CMKElapsedTimeView, CMKExpandableMenuButton, CMKFlashButton, CMKFlipButton, CMKHDRButton, CMKTimerButton, NSMutableArray;
@protocol CMKTopBarDelegate;

@interface CMKTopBar : UIView <CMKExpandableMenuButtonDelegate>
{
    _Bool __flashButtonExpanded;
    _Bool __HDRButtonExpanded;
    _Bool __timerButtonExpanded;
    long long _style;
    long long _backgroundStyle;
    id <CMKTopBarDelegate> _delegate;
    CMKFlashButton *_flashButton;
    CMKElapsedTimeView *_elapsedTimeView;
    CMKHDRButton *_HDRButton;
    CMKFlipButton *_flipButton;
    CMKTimerButton *_timerButton;
    long long _orientation;
    UIView *__backgroundView;
    NSMutableArray *__allowedControls;
    CMKExpandableMenuButton *__expandedMenuButton;
    UIView *__flipButtonTopLayoutSpacer;
    struct UIEdgeInsets __expandedMenuButtonTappableInsets;
}

@property(readonly, nonatomic) UIView *_flipButtonTopLayoutSpacer; // @synthesize _flipButtonTopLayoutSpacer=__flipButtonTopLayoutSpacer;
@property(nonatomic, setter=_setExpandedMenuButtonTappableInsets:) struct UIEdgeInsets _expandedMenuButtonTappableInsets; // @synthesize _expandedMenuButtonTappableInsets=__expandedMenuButtonTappableInsets;
@property(retain, nonatomic, setter=_setExpandedMenuButton:) CMKExpandableMenuButton *_expandedMenuButton; // @synthesize _expandedMenuButton=__expandedMenuButton;
@property(nonatomic, getter=_isTimerButtonExpanded, setter=_setTimerButtonExpanded:) _Bool _timerButtonExpanded; // @synthesize _timerButtonExpanded=__timerButtonExpanded;
@property(nonatomic, getter=_isHDRButtonExpanded, setter=_setHDRButtonExpanded:) _Bool _HDRButtonExpanded; // @synthesize _HDRButtonExpanded=__HDRButtonExpanded;
@property(nonatomic, getter=_isFlashButtonExpanded, setter=_setFlashButtonExpanded:) _Bool _flashButtonExpanded; // @synthesize _flashButtonExpanded=__flashButtonExpanded;
@property(readonly, nonatomic) NSMutableArray *_allowedControls; // @synthesize _allowedControls=__allowedControls;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) CMKTimerButton *timerButton; // @synthesize timerButton=_timerButton;
@property(retain, nonatomic) CMKFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) CMKHDRButton *HDRButton; // @synthesize HDRButton=_HDRButton;
@property(retain, nonatomic) CMKElapsedTimeView *elapsedTimeView; // @synthesize elapsedTimeView=_elapsedTimeView;
@property(retain, nonatomic) CMKFlashButton *flashButton; // @synthesize flashButton=_flashButton;
@property(nonatomic) id <CMKTopBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)expandMenuButton:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)expandedFrameForMenuButton:(id)arg1;
- (void)collapseMenuButton:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)collapsedFrameForMenuButton:(id)arg1;
- (void)configureForMode:(long long)arg1;
- (id)_allowedControlsForTimelapseMode;
- (id)_allowedControlsForPanoramaMode;
- (id)_allowedControlsForVideoMode;
- (id)_allowedControlsForStillImageMode;
- (void)layoutSubviews;
- (void)_layoutControls:(id)arg1 apply:(_Bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect *)arg5;
- (void)_setupConstraintsForFloatingRecordingStyle;
- (void)_setupFloatingRecordingElapsedTimeViewConstraints;
- (void)_setupFloatingRecordingBackgroundConstraints;
- (void)_setupConstraintsForFloatingStyle;
- (void)_setupFloatingFlipButtonConstraints;
- (void)_setupFloatingBackgroundConstraints;
- (void)_setupConstraintsForDefaultStyle;
- (void)_setupDefaultElapsedTimeViewConstraints;
- (void)_setupDefaultFlipButtonConstraints;
- (void)_setupDefaultBackgroundConstraints;
- (_Bool)_shouldHideFlipButton;
- (_Bool)_shouldHideTimerButton;
- (_Bool)_shouldHideFlashButton;
- (_Bool)_shouldHideHDRButton;
- (_Bool)_shouldHideElapsedTimeView;
- (_Bool)_buttonsExpandHorizontally;
- (void)_updateHiddenViewsForButtonExpansionAnimated:(_Bool)arg1;
- (void)_updateBackgroundStyleAnimated:(_Bool)arg1;
- (void)_updateStyleAnimated:(_Bool)arg1;
@property(readonly, nonatomic, getter=isFloating) _Bool floating;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKTopBarInitialization;

@end

