//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/NSObject-Protocol.h>

@class UIColor, UIFont, UIImage, UIScreen;

@protocol TKVibrationRecorderStyleProvider <NSObject>
@property(readonly, nonatomic) double vibrationRecorderRippleFingerMovingSpeed;
@property(readonly, nonatomic) double vibrationRecorderRippleFingerStillSpeed;
@property(readonly, nonatomic) double vibrationRecorderRippleFinalRadius;
@property(readonly, nonatomic) double vibrationRecorderRippleInitialRadius;
@property(readonly, nonatomic) double vibrationRecorderRippleRingLineWidth;
@property(readonly, nonatomic) UIColor *vibrationRecorderRippleViewBackgroundColor;
@property(readonly, nonatomic) double vibrationRecorderProgressViewAccessibilityAdditionalHeight;
@property(readonly, nonatomic) UIImage *vibrationRecorderProgressViewResizableDotImage;
@property(readonly, nonatomic) double vibrationRecorderProgressViewDotHorizontalInset;
@property(readonly, nonatomic) UIColor *vibrationRecorderProgressViewTrackColor;
@property(readonly, nonatomic) double vibrationRecorderProgressViewHeight;
@property(readonly, nonatomic) double vibrationRecorderProgressViewHorizontalOffsetFromEdge;
@property(readonly, nonatomic) double vibrationRecorderProgressToolbarAdditionalHeight;
@property(readonly, nonatomic) double vibrationRecorderProgressToolbarVerticalOffset;
@property(readonly, nonatomic) double vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
@property(readonly, nonatomic) double vibrationRecorderControlsToolbarAdditionalHeight;
@property(readonly, nonatomic) double vibrationRecorderControlsToolbarVerticalOffset;
@property(readonly, nonatomic) double vibrationRecorderInstructionsLabelFadeAnimationDuration;
@property(readonly, nonatomic) struct UIEdgeInsets vibrationRecorderInstructionsLabelEdgeInsets;
@property(readonly, nonatomic) struct UIOffset vibrationRecorderInstructionsLabelPositionOffset;
@property(readonly, nonatomic) UIColor *vibrationRecorderInstructionsLabelBackgroundColor;
@property(readonly, nonatomic) UIColor *vibrationRecorderInstructionsLabelTextColor;
@property(readonly, nonatomic) UIFont *vibrationRecorderInstructionsLabelFont;
@property(retain, nonatomic) UIScreen *screen;
@property(readonly, nonatomic) UIColor *vibrationRecorderBarsBackgroundColor;
@end

