//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDetailsHeaderTileSettings : PXSettings
{
    _Bool _showAlways;
    _Bool _showSlideshow;
    _Bool _forceMiroCompelling;
    _Bool _fakeMiroViewController;
    double _aspectRatio;
    double _maximumHeightRelativeToScreenHeight;
    double _maximumAbsoluteHeight;
    double _movieLessTVHeight;
    double _fakeMiroViewAspectRatio;
    double _fakeMiroViewLoadingDuration;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double fakeMiroViewLoadingDuration; // @synthesize fakeMiroViewLoadingDuration=_fakeMiroViewLoadingDuration;
@property(nonatomic) double fakeMiroViewAspectRatio; // @synthesize fakeMiroViewAspectRatio=_fakeMiroViewAspectRatio;
@property(nonatomic) _Bool fakeMiroViewController; // @synthesize fakeMiroViewController=_fakeMiroViewController;
@property(nonatomic) _Bool forceMiroCompelling; // @synthesize forceMiroCompelling=_forceMiroCompelling;
@property(nonatomic) _Bool showSlideshow; // @synthesize showSlideshow=_showSlideshow;
@property(nonatomic) _Bool showAlways; // @synthesize showAlways=_showAlways;
@property(nonatomic) double movieLessTVHeight; // @synthesize movieLessTVHeight=_movieLessTVHeight;
@property(nonatomic) double maximumAbsoluteHeight; // @synthesize maximumAbsoluteHeight=_maximumAbsoluteHeight;
@property(nonatomic) double maximumHeightRelativeToScreenHeight; // @synthesize maximumHeightRelativeToScreenHeight=_maximumHeightRelativeToScreenHeight;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void)setDefaultValues;
- (id)parentSettings;

@end

