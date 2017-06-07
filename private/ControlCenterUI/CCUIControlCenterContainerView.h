//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ControlCenterUI/CCUIControlCenterObserver-Protocol.h>
#import <ControlCenterUI/_UISettingsKeyObserver-Protocol.h>

@class CCUIControlCenterSettings, NSMapTable, NSString, UIPageControl, UIScrollView;
@protocol CCUIControlCenterContainerViewDelegate;

@interface CCUIControlCenterContainerView : UIView <_UISettingsKeyObserver, CCUIControlCenterObserver>
{
    UIScrollView *_pageScrollView;
    UIPageControl *_pageControl;
    double _revealPercentage;
    _Bool _useMaxDarkness;
    CCUIControlCenterSettings *_settings;
    NSMapTable *_plattersToDarkeningViews;
    UIView *_darkeningContainer;
    _Bool _animatingDynamically;
    _Bool _adjustingBrightness;
    id <CCUIControlCenterContainerViewDelegate> _delegate;
    UIView *_dynamicsContainerView;
}

@property(nonatomic, getter=isAdjustingBrightness) _Bool adjustingBrightness; // @synthesize adjustingBrightness=_adjustingBrightness;
@property(nonatomic) _Bool animatingDynamically; // @synthesize animatingDynamically=_animatingDynamically;
@property(readonly, nonatomic) UIView *dynamicsContainerView; // @synthesize dynamicsContainerView=_dynamicsContainerView;
@property(nonatomic) __weak id <CCUIControlCenterContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_applyAlphaToDarkeningViews;
- (void)_updateMasks;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillFinishTransitionOpen:(_Bool)arg1 withDuration:(double)arg2;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)_resetControlCenterToOffscreenState;
- (void)_removeAnimationsForKeys:(id)arg1 onView:(id)arg2 update:(CDUnknownBlockType)arg3;
- (void)abortAnimatedTransition;
@property(nonatomic) double revealPercentage;
- (struct UIEdgeInsets)_marginInsets;
- (double)_contentHeight;
- (void)_updateContentFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

