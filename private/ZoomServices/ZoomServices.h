//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ZoomServices/AXUIClientDelegate-Protocol.h>

@class AXUIClient, NSMutableArray, NSString;

@interface ZoomServices : NSObject <AXUIClientDelegate>
{
    NSMutableArray *_zoomListeners;
    _Bool _showingZoomLens;
    _Bool _registeredForZoomListener;
    AXUIClient *_zoomWindowClient;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool registeredForZoomListener; // @synthesize registeredForZoomListener=_registeredForZoomListener;
@property(nonatomic, getter=isShowingZoomLens) _Bool showingZoomLens; // @synthesize showingZoomLens=_showingZoomLens;
@property(retain, nonatomic) AXUIClient *zoomWindowClient; // @synthesize zoomWindowClient=_zoomWindowClient;
- (void).cxx_destruct;
- (double)zoomLevel;
- (struct CGRect)zoomFrame;
- (double)appSwitcherRevealAnimationStartDelay;
- (double)reachabilityScaleFactor;
- (double)appDeactivationAnimationStartDelay;
- (double)appActivationAnimationStartDelay;
- (void)_handleChangedAttributes:(id)arg1;
- (void)registerInterestInZoomAttributes;
- (_Bool)notifyZoomWillHideBrailleInputUI;
- (void)notifyZoomSOSMedicalIDShown;
- (_Bool)notifyZoomWillShowBrailleInputUI;
- (_Bool)notifyZoomAppDidEnterBackground:(id)arg1;
- (_Bool)notifyZoomAppDidBecomeActive:(id)arg1 keyboardFrameIfVisible:(struct CGRect)arg2;
- (_Bool)notifyZoomAppActivationAnimationDidFinish;
- (_Bool)notifyZoomWaterLockEnded;
- (_Bool)notifyZoomWaterLockBegan;
- (_Bool)notifyZoomReturnedToClockFaceAtIdle;
- (_Bool)notifyZoomAppSwitcherRevealAnimationWillBegin;
- (_Bool)notifyZoomAppDeactivationAnimationWillBegin;
- (_Bool)notifyZoomAppActivationAnimationWillBegin;
- (_Bool)notifyZoomIdleSlugOpacityChangedTo:(double)arg1;
- (_Bool)notifyZoomDockPositionWasChangedInSettingsTo:(id)arg1;
- (_Bool)notifyZoomLensModeWasChangedInSettingsTo:(id)arg1;
- (_Bool)notifyZoomHomeButtonWasPressed;
- (_Bool)notifyZoomDeviceWasUnlocked;
- (_Bool)notifyZoomLockButtonWasPressed;
- (_Bool)notifyZoomKeyboardWillHideInAppWithBundleID:(id)arg1;
- (_Bool)notifyZoomKeyboardWillBecomeVisibleWithFrame:(struct CGRect)arg1 inAppWithBundleID:(id)arg2;
- (_Bool)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(struct CGRect)arg2 contextId:(unsigned int)arg3 keyboardFrame:(struct CGRect)arg4;
- (_Bool)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(struct CGRect)arg2 contextId:(unsigned int)arg3;
- (void)removeZoomLevelHandler:(id)arg1;
- (id)registerZoomLevelChangeHandler:(CDUnknownBlockType)arg1;
- (_Bool)_isPrimaryZoomWindowClient;
- (_Bool)_isAllowedMagnifierClient;
- (void)_zoomChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
- (void)isMagnifierVisibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)showMagnifier;
- (void)hideZoomLens;
- (void)showZoomLens;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

