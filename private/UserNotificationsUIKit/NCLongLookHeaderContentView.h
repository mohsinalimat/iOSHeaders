//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MaterialKit/MTPlatterHeaderContentView.h>

@class UIImageView;

@interface NCLongLookHeaderContentView : MTPlatterHeaderContentView
{
    UIImageView *_iconButtonShadow;
}

+ (id)_xImage;
- (void).cxx_destruct;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (double)_largeTextTitleLabelBaselineOffset;
- (struct CGRect)_titleLabelBoundsForSize:(struct CGSize)arg1;
- (double)_titleFirstLineCenterY;
- (void)_layoutDateLabelWithScale:(double)arg1;
- (void)_layoutUtilityButtonWithScale:(double)arg1;
- (void)_layoutTitleLabelWithScale:(double)arg1;
- (void)_layoutIconButtonWithScale:(double)arg1;
- (void)_configureUtilityButton;
- (void)_updateUtilityButtonVibrantStyling;
- (void)_updateUtilityButtonFont;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setDateAllDay:(_Bool)arg1;
- (void)setDate:(id)arg1;
- (void)_configureDateLabel;
- (void)_updateStylingForTitleLabel:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)_configureIconButtonWithIcon:(id)arg1;
- (id)_iconShadowImageForIcon:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_headerHeightForWidth:(double)arg1;

@end

