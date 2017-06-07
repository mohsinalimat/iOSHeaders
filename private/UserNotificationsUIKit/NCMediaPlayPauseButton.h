//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MTMaterialView, NCMaterialButton, UIButton;

@interface NCMediaPlayPauseButton : UIControl
{
    long long _type;
    NCMaterialButton *_button;
    UIButton *_invisibleButton;
    MTMaterialView *_backgroundCircle;
}

+ (id)_buttonImageNamed:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) MTMaterialView *backgroundCircle; // @synthesize backgroundCircle=_backgroundCircle;
@property(retain, nonatomic) UIButton *invisibleButton; // @synthesize invisibleButton=_invisibleButton;
@property(retain, nonatomic) NCMaterialButton *button; // @synthesize button=_button;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_buttonTouchUpInside:(id)arg1;
- (void)tintColorDidChange;
- (void)setSelected:(_Bool)arg1;
- (void)_updateSelectedForMovieStyle;
- (void)_updateSelectedForAudioStyle;
- (void)_updateSelected;
- (void)_updateStyleForMovieStyle;
- (void)_updateStyleForAudioStyle;
- (void)_updateStyle;
- (void)_updateSizeForMovieStyle;
- (void)_updateSizeForAudioStyle;
- (void)_updateSize;
- (void)_updateBackgroundForMovieStyle;
- (void)_updateBackgroundForAudioStyle;
- (void)_updateBackground;
- (void)_updateType;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2;

@end

