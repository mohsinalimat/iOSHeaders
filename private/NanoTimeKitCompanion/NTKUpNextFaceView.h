//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>

#import <NanoTimeKitCompanion/NTKUpNextCellDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKUpNextElementActionDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKUpNextFaceElementControllerDelegate-Protocol.h>
#import <NanoTimeKitCompanion/UICollectionViewDataSource-Protocol.h>
#import <NanoTimeKitCompanion/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <NanoTimeKitCompanion/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSOrderedSet, NSString, NSTimer, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKUpNextCollectionView, NTKUpNextCollectionViewFlowLayout, NTKUpNextFaceElementController, NTKUpNextScheduler, NTKUtilityComplicationFactory, UIImage, UITapGestureRecognizer, UIView;

@interface NTKUpNextFaceView : NTKDigitalFaceView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, NTKUpNextFaceElementControllerDelegate, NTKUpNextElementActionDelegate, NTKUpNextCellDelegate>
{
    NTKDigitalTimeLabel *_timeLabel;
    NTKDigitalTimeLabelStyle *_timeLabelDefaultStyle;
    NTKDigitalTimeLabelStyle *_timeLabelSmallInUpperRightCornerStyle;
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    NTKUpNextCollectionView *_contentView;
    NTKUpNextCollectionViewFlowLayout *_layout;
    NTKUpNextFaceElementController *_elementController;
    UITapGestureRecognizer *_viewModeTapGesture;
    long long _previousViewMode;
    NSTimer *_viewResetTimer;
    NSTimer *_wheelDelayTimer;
    NSTimer *_buttonPressTimer;
    double _lastCrownVelocity;
    double _accumulatedCrownDelta;
    NSArray *_complicationDisplays;
    _Bool _isAnimating;
    UIImage *_cellContentBackground;
    UIView *_timeLabelPlatter;
    _Bool _needsUpdatesWhileSuppressed;
    _Bool _isInflightScroll;
    _Bool _cancelInflightScroll;
    _Bool _isProgramaticScrollEvent;
    _Bool _crownInverted;
    _Bool _suppressUpdates;
    NSOrderedSet *_currentApplicationIdentifiers;
    NTKUpNextScheduler *_applicationIdentifierUpdateScheduler;
    long long _interactiveState;
    CDUnknownBlockType _modeTransitionApplier;
    CDUnknownBlockType _modeTransitionCompletion;
    struct CGPoint _startOffsetForModeTransition;
    struct CGPoint _targetOffsetForModeTransition;
    struct CGPoint _secondaryOffsetForModeTransition;
    _Bool _scrollingStoppedTransition;
    long long _previousDataMode;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_deviceOrientationInvertedDidChangeNotification:(id)arg1;
- (void)_updateCrownInvertedSetting;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_presentTrainingSheetForElementAtIndexPath:(id)arg1;
- (void)upNextElementAction:(id)arg1 wantsToPerformTapActionForComplicationSlot:(id)arg2;
- (void)cellDidLongPress:(id)arg1;
- (void)upNextElementAction:(id)arg1 wantsViewControllerDisplayed:(id)arg2;
- (void)upNextElementAction:(id)arg1 didFinishTask:(_Bool)arg2;
- (void)_switchViewModeForCurrentMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_handleViewModeTapGesture:(id)arg1;
- (void)_layoutTimeLabelForViewMode:(long long)arg1;
- (void)_layoutTimeLabelPlatterViewMode:(long long)arg1;
- (id)_timeLabelStyleForViewMode:(long long)arg1;
- (void)_allowContentViewInteractive:(_Bool)arg1;
- (void)_cleanupAfterSettingViewMode:(long long)arg1 scroll:(_Bool)arg2 targetOffset:(struct CGPoint)arg3 needsLayout:(_Bool)arg4;
- (void)_setViewMode:(long long)arg1 scroll:(_Bool)arg2 scrollToPoint:(struct CGPoint)arg3 secondaryPoint:(struct CGPoint)arg4 force:(_Bool)arg5 velocity:(double)arg6 animated:(_Bool)arg7;
- (struct CGPoint)_defaultPointForDefaultMode;
- (_Bool)faceElementController:(id)arg1 isElementAtIndexPathVisible:(id)arg2;
- (void)faceElementController:(id)arg1 didMoveElement:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)faceElementController:(id)arg1 didInsertElement:(id)arg2 atIndexPath:(id)arg3;
- (void)faceElementController:(id)arg1 didRemoveElement:(id)arg2 atIndexPath:(id)arg3;
- (void)faceElementController:(id)arg1 didReloadElement:(id)arg2 atIndexPath:(id)arg3;
- (void)faceElementController:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)setViewMode:(long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_applyShowsLockedUI;
- (_Bool)_applyShowIdealizedContent;
- (_Bool)_applyShouldUseCanonicalContent;
- (void)_applyShowsCanonicalContent;
- (_Bool)_shouldUseCanonicalContent;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_handleOrdinaryScreenWake;
- (void)_applyDataMode;
- (_Bool)_usesCustomZoom;
- (_Bool)_supportsTimeScrubbing;
- (_Bool)_wantsStatusBarHidden;
- (void)_loadLayoutRules;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)_dismissPresentedViewControllerIfNecessary:(_Bool)arg1;
- (void)_stopViewResetTimer;
- (void)_startViewResetTimer;
- (unsigned long long)_distanceForIndexPathFromNow:(id)arg1;
- (void)_updateApplicationIdentifiers;
- (void)_switchViewModeToDefault;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (_Bool)_needsForegroundContainerView;
- (double)_verticalPaddingForStatusBar;
- (void)_reloadContentIfNeeded;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_detachedComplicationDisplays;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

