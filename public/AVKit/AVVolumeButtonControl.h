//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <AVKit/AVPlaybackControlsViewItem-Protocol.h>

@class AVMicaPackage, NSString, NSTimer, UISelectionFeedbackGenerator, UIViewPropertyAnimator;

@interface AVVolumeButtonControl : UIControl <AVPlaybackControlsViewItem>
{
    long long _trackingState;
    _Bool _included;
    _Bool _collapsed;
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
    _Bool _longPressEnabled;
    _Bool _showsHighlightedAppearance;
    AVMicaPackage *_micaPackage;
    UIViewPropertyAnimator *_highlightAnimator;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    NSTimer *_longPressTimer;
    struct CGSize _extrinsicContentSize;
    struct CGPoint _translationOfPanFromPreviousTouch;
    struct CGPoint _cumulativeTranslationSincePanningBegan;
    struct CGPoint _locationOfTouchInWindow;
    struct CGPoint _initialPreciseLocationOfTouch;
    struct NSDirectionalEdgeInsets _hitRectInsets;
}

@property(nonatomic) _Bool showsHighlightedAppearance; // @synthesize showsHighlightedAppearance=_showsHighlightedAppearance;
@property(nonatomic) long long trackingState; // @synthesize trackingState=_trackingState;
@property(nonatomic) __weak NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property(nonatomic) struct CGPoint initialPreciseLocationOfTouch; // @synthesize initialPreciseLocationOfTouch=_initialPreciseLocationOfTouch;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) __weak UIViewPropertyAnimator *highlightAnimator; // @synthesize highlightAnimator=_highlightAnimator;
@property(nonatomic) struct CGPoint locationOfTouchInWindow; // @synthesize locationOfTouchInWindow=_locationOfTouchInWindow;
@property(nonatomic) struct CGPoint cumulativeTranslationSincePanningBegan; // @synthesize cumulativeTranslationSincePanningBegan=_cumulativeTranslationSincePanningBegan;
@property(nonatomic) struct CGPoint translationOfPanFromPreviousTouch; // @synthesize translationOfPanFromPreviousTouch=_translationOfPanFromPreviousTouch;
@property(nonatomic) struct NSDirectionalEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(nonatomic, getter=isLongPressEnabled) _Bool longPressEnabled; // @synthesize longPressEnabled=_longPressEnabled;
@property(retain, nonatomic) AVMicaPackage *micaPackage; // @synthesize micaPackage=_micaPackage;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)layoutSubviews;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)triggerSelectionChangedFeedback;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

