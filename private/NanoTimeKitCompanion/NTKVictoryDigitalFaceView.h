//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKComplicationDisplayWrapperView, NTKUtilityComplicationFactory, UIColor;

@interface NTKVictoryDigitalFaceView : NTKFaceView
{
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    UIColor *_complicationForegroundColor;
    NTKComplicationDisplayWrapperView *_logoWrapperView;
    struct CGPoint _logoPlatterCenter;
    double _currentLogoPlatterXOffset;
}

+ (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
+ (id)_swatchImageForColorOption:(id)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
- (void).cxx_destruct;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_supportsTimeScrubbing;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_keylineEdgeGapForState:(long long)arg1;
- (void)_loadLayoutRules;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (_Bool)_needsForegroundContainerView;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (double)_logoPlatterAlphaForEditMode:(long long)arg1;
- (double)_logoPlatterXOffsetForEditMode:(long long)arg1;
- (double)_bottomComplicationAlphaForEditMode:(long long)arg1;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyColor:(id)arg1 toComplicationView:(id)arg2;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (double)_verticalPaddingForStatusBar;
- (void)_positionLogoPlatterView;
- (void)layoutSubviews;
- (void)_logoTapped;
- (void)_setupLogoViews;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

