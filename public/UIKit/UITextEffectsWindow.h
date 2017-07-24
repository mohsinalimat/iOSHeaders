//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAutoRotatingWindow.h>

#import <UIKit/_UIScreenBasedObject-Protocol.h>

@class NSDictionary, NSString, UIScreen;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject>
{
    _Bool _inDealloc;
    unsigned long long _activeEffectsCount;
    double _defaultWindowLevel;
    struct CGPoint _hostedWindowOffset;
    NSDictionary *_perScreenOptions;
    UIScreen *__intendedScreen;
    unsigned long long _activeRemoteViewCount;
    unsigned long long _windowLevelCount;
    double _windowLevelStack[5];
    struct CGSize _hostedSceneSize;
    _Bool _manualHostingOverride;
}

+ (void)lowerTextEffectsWindowsForHideNotificationCenter;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (void)releaseSharedInstances;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (id)activeTextEffectsWindowForScreen:(id)arg1;
+ (id)sharedTextEffectsWindowForScreen:(id)arg1;
+ (id)sharedTextEffectsWindow;
+ (id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(_Bool)arg2 allowHosted:(_Bool)arg3 matchesStatusBarOrientationOnAccess:(_Bool)arg4;
@property(nonatomic) struct CGSize hostedSceneSize; // @synthesize hostedSceneSize=_hostedSceneSize;
@property(nonatomic) struct CGPoint hostedWindowOffset; // @synthesize hostedWindowOffset=_hostedWindowOffset;
@property(nonatomic) double defaultWindowLevel; // @synthesize defaultWindowLevel=_defaultWindowLevel;
- (void).cxx_destruct;
- (void)_didSnapshot;
- (void)_willSnapshot;
- (_Bool)_isFullscreen;
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;
- (_Bool)_shouldTextEffectsWindowBeHostedForView:(id)arg1;
- (_Bool)_isTextEffectsWindow;
- (_Bool)_shouldTintStatusBar;
- (_Bool)_canAffectStatusBarAppearance;
- (_Bool)isInternalWindow;
- (struct CGRect)_sceneBounds;
- (struct CGRect)_sceneReferenceBounds;
- (struct CGRect)actualSceneFrame;
- (struct CGRect)actualSceneFrameForOrientation:(long long)arg1;
- (struct CGRect)actualSceneBounds;
- (struct CGRect)actualSceneBoundsForLandscape:(_Bool)arg1;
- (void)_updateTransformLayer;
- (void)_sceneBoundsDidChange;
- (_Bool)_shouldResizeWithScene;
- (id)aboveStatusBarWindow;
- (long long)interfaceOrientation;
- (void)_matchDeviceOrientation;
- (void)updateSubviewOrdering;
- (void)resetTransform;
- (void)updateForOrientation:(long long)arg1;
- (void)updateForOrientation:(long long)arg1 forceResetTransform:(_Bool)arg2;
- (void)sortSubviews;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)delayHideWindow;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (struct CGRect)_forHostedProcessConvertRect:(struct CGRect)arg1 forWindow:(id)arg2 wasFromWindow:(_Bool)arg3;
- (struct CGPoint)_forHostedProcessConvertPoint:(struct CGPoint)arg1 forWindow:(id)arg2 wasFromWindow:(_Bool)arg3;
@property(readonly, nonatomic) struct CGRect hostedFrame;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_configureContextOptions:(id)arg1;
- (void)_restoreWindowLevel;
- (void)_setWindowLevel:(double)arg1;
- (void)setEnableRemoteHosting:(_Bool)arg1;
- (_Bool)enableRemoteHosting;
@property(readonly) unsigned int contextID;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(_Bool)arg2;
- (void)_commonTextEffectsInit;
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

