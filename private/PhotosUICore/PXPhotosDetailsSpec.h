//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@class PXPhotosDetailsBarSpec, PXWidgetCompositionSpec, PXWidgetSpec, UIColor;

@interface PXPhotosDetailsSpec : PXFeatureSpec
{
    unsigned long long _detailsOptions;
    PXWidgetCompositionSpec *_compositionSpec;
    PXWidgetSpec *_widgetSpec;
    PXPhotosDetailsBarSpec *_barSpec;
    struct UIColor *_backgroundColor;
    struct UIColor *_dimmingColor;
    double _dimmingAlpha;
}

@property(readonly, nonatomic) double dimmingAlpha; // @synthesize dimmingAlpha=_dimmingAlpha;
@property(readonly, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) PXPhotosDetailsBarSpec *barSpec; // @synthesize barSpec=_barSpec;
@property(readonly, nonatomic) PXWidgetSpec *widgetSpec; // @synthesize widgetSpec=_widgetSpec;
@property(readonly, nonatomic) PXWidgetCompositionSpec *compositionSpec; // @synthesize compositionSpec=_compositionSpec;
@property(readonly, nonatomic) unsigned long long detailsOptions; // @synthesize detailsOptions=_detailsOptions;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool enableActionsWidget;
@property(readonly, nonatomic) _Bool shouldInitializeBarsController;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;

@end

