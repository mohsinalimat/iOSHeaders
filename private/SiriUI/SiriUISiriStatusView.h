//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SiriUI/SUICFlamesViewDelegate-Protocol.h>
#import <SiriUI/SiriUISiriStatusViewProtocol-Protocol.h>
#import <SiriUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, SUICFlamesView, SiriUIConfiguration, UIButton, UIImageView, UILongPressGestureRecognizer, UIScreen;
@protocol SiriUISiriStatusViewAnimationDelegate, SiriUISiriStatusViewDelegate;

@interface SiriUISiriStatusView : UIView <SUICFlamesViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol>
{
    UIButton *_button;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_flamesContainerView;
    SUICFlamesView *_flamesView;
    UIImageView *_micGlyphImageView;
    double _lastStateChangeTime;
    UIScreen *_screen;
    int _deferredFlamesViewState;
    SiriUIConfiguration *_configuration;
    _Bool _flamesViewDeferred;
    _Bool _inUITrackingMode;
    long long _mode;
    double _disabledMicOpacity;
    id <SiriUISiriStatusViewDelegate> _delegate;
    double _flamesViewWidth;
    id <SiriUISiriStatusViewAnimationDelegate> _animationDelegate;
}

+ (double)statusViewHeightForWidthSizeClass:(_Bool)arg1;
@property(nonatomic) __weak id <SiriUISiriStatusViewAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic, getter=isInUITrackingMode) _Bool inUITrackingMode; // @synthesize inUITrackingMode=_inUITrackingMode;
@property(nonatomic) _Bool flamesViewDeferred; // @synthesize flamesViewDeferred=_flamesViewDeferred;
@property(nonatomic) double flamesViewWidth; // @synthesize flamesViewWidth=_flamesViewWidth;
@property(nonatomic) __weak id <SiriUISiriStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double disabledMicOpacity; // @synthesize disabledMicOpacity=_disabledMicOpacity;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (float)audioLevelForFlamesView:(id)arg1;
- (struct CGRect)_micGlyphTappableRect;
- (struct CGRect)_flamesFrame;
- (void)_animateMicGlyphHidden:(_Bool)arg1;
- (void)_layoutFlamesViewIfNeeded;
- (void)_attachFlamesViewIfNeeded;
- (void)_setFlamesViewState:(int)arg1;
- (id)_flamesView;
- (void)_micButtonHeld:(id)arg1;
- (void)_micButtonTapped:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect)_flamesViewFrame;
- (void)layoutSubviews;
- (void)forceMicVisible:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIView *flamesContainerView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 screen:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

