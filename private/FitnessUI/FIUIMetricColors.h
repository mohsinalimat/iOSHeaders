//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface FIUIMetricColors : NSObject
{
    UIColor *_gradientLightColor;
    UIColor *_gradientDarkColor;
    UIColor *_adjustmentButtonBackgroundColor;
    UIColor *_nonGradientTextColor;
    UIColor *_lightenedNonGradientColor;
    UIColor *_buttonTextColor;
    UIColor *_buttonDisabledTextColor;
    UIColor *_valueDisplayColor;
    NSString *_workoutRingColorIdentifier;
}

+ (id)keyColors;
+ (id)deepBreathingColors;
+ (id)elevationColors;
+ (id)lapColors;
+ (id)clockColors;
+ (id)heartRateColors;
+ (id)paceColors;
+ (id)elapsedTimeColors;
+ (id)noMetricColors;
+ (id)lapsColors;
+ (id)distanceColors;
+ (id)sedentaryColors;
+ (id)briskColors;
+ (id)energyColors;
+ (struct CGGradient *)newGradientForStartColor:(id)arg1 endColor:(id)arg2;
+ (id)metricColorsForGoalTypeIdentifier:(unsigned long long)arg1;
+ (id)metricColorsForMetricType:(unsigned long long)arg1;
+ (id)systemGrayTextColor;
@property(retain, nonatomic) NSString *workoutRingColorIdentifier; // @synthesize workoutRingColorIdentifier=_workoutRingColorIdentifier;
@property(retain, nonatomic) UIColor *valueDisplayColor; // @synthesize valueDisplayColor=_valueDisplayColor;
@property(retain, nonatomic) UIColor *buttonDisabledTextColor; // @synthesize buttonDisabledTextColor=_buttonDisabledTextColor;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIColor *lightenedNonGradientColor; // @synthesize lightenedNonGradientColor=_lightenedNonGradientColor;
@property(retain, nonatomic) UIColor *nonGradientTextColor; // @synthesize nonGradientTextColor=_nonGradientTextColor;
@property(retain, nonatomic) UIColor *adjustmentButtonBackgroundColor; // @synthesize adjustmentButtonBackgroundColor=_adjustmentButtonBackgroundColor;
@property(retain, nonatomic) UIColor *gradientDarkColor; // @synthesize gradientDarkColor=_gradientDarkColor;
@property(retain, nonatomic) UIColor *gradientLightColor; // @synthesize gradientLightColor=_gradientLightColor;
- (void).cxx_destruct;

@end

