//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAVListingFaceBaseView.h>

@class NTKComplicationDisplayWrapperView, NTKFaceLayoutContentProvider, NTKInfinityController, NTKInfinityListing, UILabel;

@interface NTKInfinityFaceView : NTKAVListingFaceBaseView
{
    unsigned int _tapToPlayGestureEnabled:1;
    unsigned int _isComplicationColorApplied:1;
    unsigned int _tapPromptedVideoChange:1;
    UILabel *_reviewLabel;
    NTKInfinityController *_controller;
    NTKComplicationDisplayWrapperView *_touchWrapper;
    NTKFaceLayoutContentProvider *_layoutContentProvider;
    NTKInfinityListing *_currentQueueListing;
}

- (void).cxx_destruct;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_updateReviewLabel;
- (void)updateReviewDirection:(id)arg1;
- (void)_handleSingleTap:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_complicationDisplayWrapperForTouch:(id)arg1;
- (id)_onDeckPosterImageView;
- (id)_posterImageView;
- (id)_posterImageViewForStyle:(unsigned long long)arg1;
- (id)_currentPosterImageView;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_viewForEditOption:(id)arg1;
- (void)_applyComplicationContentSpecificAttributesWithColor:(id)arg1 animated:(_Bool)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (void)didAddSubview:(id)arg1;
- (double)_adjustmentForBottomTimeLayout;
- (double)_rightSideMarginForDigitalTimeHeroPosition;
- (void)_layoutForegroundContainerView;
- (_Bool)_shouldQueueKeepAlive;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidFinishPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewWillBeginPlaying:(id)arg1;
- (id)_nextListing;
- (void)_selectDefaultListing;
- (void)_updatePaused;
- (void)_performPreloadVideoTask;
- (_Bool)_supportsTimeScrubbing;
- (_Bool)_wantsTimeTravelStatusModule;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

