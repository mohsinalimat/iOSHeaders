//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallCircularImageView : NTKCircularComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateImageViewMulticolorAlphaIfNeeded;
- (void)_updateForTemplateChange;
- (_Bool)_wantsPlatter;
- (void)setUsesMediumLayout:(_Bool)arg1;
- (void)layoutSubviews;

@end

