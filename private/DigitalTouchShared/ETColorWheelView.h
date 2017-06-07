//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DigitalTouchShared/DTSColorWheel.h>

@class ETColorGradientView, UIColor;

@interface ETColorWheelView : DTSColorWheel
{
    ETColorGradientView *_gradientView;
    double _originalRotation;
    double _originalPickerRotation;
    _Bool _handlingTouches;
    UIColor *_selectedColor;
}

+ (struct CGColor *)pickerBorderColor;
+ (double)pickerWidth;
+ (double)pickerDiameter;
+ (double)colorWheelWidth;
@property(readonly, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void).cxx_destruct;
- (void)animatePickerToOriginalPosition;
- (void)hideColorWheelPickingColor:(_Bool)arg1;
- (void)doneButtonTapped:(id)arg1;
- (double)colorWheelDismissalRotation;
- (_Bool)pickerShouldDismissClockwise;
- (void)finishedTouches;
- (void)beganTouches:(id)arg1;
- (void)addPickerCircleForPaletteCircle:(id)arg1;
- (void)hideDoneButtonAnimated;
- (void)showDoneButtonAnimated;
- (void)showColorWheelFromPaletteCircle:(id)arg1 rotation:(double)arg2;
- (void)hideDoneButton;
- (double)pickerDiameter;
- (double)gradientWidth;
- (double)colorWheelRadius;
- (id)pickerViewHighlightedColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

