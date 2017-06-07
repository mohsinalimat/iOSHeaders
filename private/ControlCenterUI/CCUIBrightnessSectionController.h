//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUIControlCenterSectionViewController.h>

@class CCUIControlCenterSlider;

@interface CCUIBrightnessSectionController : CCUIControlCenterSectionViewController
{
    CCUIControlCenterSlider *_slider;
    struct BKSDisplayBrightnessTransaction *_brightnessTransaction;
    _Bool _usesCompactHeight;
}

+ (Class)viewClass;
@property(nonatomic) _Bool usesCompactHeight; // @synthesize usesCompactHeight=_usesCompactHeight;
- (void).cxx_destruct;
- (void)_noteScreenBrightnessDidChange:(id)arg1;
- (void)_sliderDidEndTracking:(id)arg1;
- (void)_sliderDidBeginTracking:(id)arg1;
- (void)_sliderValueDidChange:(id)arg1;
- (void)_setBacklightLevel:(float)arg1;
- (float)_backlightLevel;
- (void)viewDidLayoutSubviews;
- (double)_yOffsetFromCenterForSlider;
- (id)_brightnessContentView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)sectionIdentifier;
- (_Bool)enabled;
- (void)dealloc;

@end

