//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDDemoDataFormula : NSObject
{
}

+ (double)_computeOther2LeanBodyWeightFromWeight:(double)arg1 sex:(long long)arg2 waistCircumference:(double)arg3 forearmCircumference:(double)arg4 wristCircumference:(double)arg5 hipCircumference:(double)arg6;
+ (double)_computeOther1LeanBodyWeightFromWeight:(double)arg1 height:(double)arg2 sex:(long long)arg3;
+ (double)_computeHumeLeanBodyWeightFromWeight:(double)arg1 height:(double)arg2 sex:(long long)arg3;
+ (double)computeLeanBodyMassFromWeight:(double)arg1 height:(double)arg2 sex:(long long)arg3 waistCircumference:(double)arg4 forearmCircumference:(double)arg5 wristCircumference:(double)arg6 hipCircumference:(double)arg7;
+ (double)computeBasalMetabolicRateFromWeight:(double)arg1 height:(double)arg2 age:(double)arg3 sex:(long long)arg4;
+ (double)computeBodyFatPercentageFromWeight:(double)arg1 leanBodyMass:(double)arg2;
+ (double)computeBodyMassIndexFromWeight:(double)arg1 height:(double)arg2;
+ (double)computeBloodAlcoholContentForNumDrinks:(double)arg1 elapsedTime:(double)arg2 weight:(double)arg3 sex:(long long)arg4;
+ (double)convertDegreeFahrenheitToCelsius:(double)arg1;
+ (double)convertDegreeCelsiusToFahrenheit:(double)arg1;

@end

