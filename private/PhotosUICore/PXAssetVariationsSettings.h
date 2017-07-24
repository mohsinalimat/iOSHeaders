//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXAssetVariationsSettings : PXSettings
{
    _Bool _addSimulatedProgressComponent;
    _Bool _simulateLoadingFailure;
    _Bool _simulateSavingFailure;
    _Bool _useNeutrinoRendering;
    _Bool _showStatusInDisclosureLabel;
    _Bool _allowOrbPreview;
    _Bool _showLoopBadges;
    _Bool _invalidateCachedPreviews;
    _Bool _useLiveRenderedPreviews;
    long long _selectionBehavior;
    double _selectionDetailsDismissalDelay;
    long long _suggestionsScheme;
    long long _layoutStyle;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) _Bool useLiveRenderedPreviews; // @synthesize useLiveRenderedPreviews=_useLiveRenderedPreviews;
@property(nonatomic) _Bool invalidateCachedPreviews; // @synthesize invalidateCachedPreviews=_invalidateCachedPreviews;
@property(nonatomic) _Bool showLoopBadges; // @synthesize showLoopBadges=_showLoopBadges;
@property(nonatomic) _Bool allowOrbPreview; // @synthesize allowOrbPreview=_allowOrbPreview;
@property(nonatomic) _Bool showStatusInDisclosureLabel; // @synthesize showStatusInDisclosureLabel=_showStatusInDisclosureLabel;
@property(nonatomic) _Bool useNeutrinoRendering; // @synthesize useNeutrinoRendering=_useNeutrinoRendering;
@property(nonatomic) _Bool simulateSavingFailure; // @synthesize simulateSavingFailure=_simulateSavingFailure;
@property(nonatomic) _Bool simulateLoadingFailure; // @synthesize simulateLoadingFailure=_simulateLoadingFailure;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) _Bool addSimulatedProgressComponent; // @synthesize addSimulatedProgressComponent=_addSimulatedProgressComponent;
@property(nonatomic) long long suggestionsScheme; // @synthesize suggestionsScheme=_suggestionsScheme;
@property(nonatomic) double selectionDetailsDismissalDelay; // @synthesize selectionDetailsDismissalDelay=_selectionDetailsDismissalDelay;
@property(nonatomic) long long selectionBehavior; // @synthesize selectionBehavior=_selectionBehavior;
- (void)setDefaultValues;
- (id)parentSettings;

@end

