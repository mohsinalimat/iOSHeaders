//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, UIColor;

@interface _UIBatteryView : UIView
{
    _Bool _saverModeActive;
    _Bool _compact;
    long long _sizeCategory;
    double _chargePercent;
    long long _chargingState;
    UIColor *_fillColor;
    UIColor *_bodyColor;
    UIColor *_pinColor;
    CAShapeLayer *_bodyLayer;
    CAShapeLayer *_pinLayer;
    CALayer *_fillLayer;
    double _baselineOffset;
}

@property(nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(nonatomic) _Bool compact; // @synthesize compact=_compact;
@property(retain, nonatomic) CALayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(retain, nonatomic) CAShapeLayer *pinLayer; // @synthesize pinLayer=_pinLayer;
@property(retain, nonatomic) CAShapeLayer *bodyLayer; // @synthesize bodyLayer=_bodyLayer;
@property(copy, nonatomic) UIColor *pinColor; // @synthesize pinColor=_pinColor;
@property(copy, nonatomic) UIColor *bodyColor; // @synthesize bodyColor=_bodyColor;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) _Bool saverModeActive; // @synthesize saverModeActive=_saverModeActive;
@property(nonatomic) long long chargingState; // @synthesize chargingState=_chargingState;
@property(nonatomic) double chargePercent; // @synthesize chargePercent=_chargePercent;
@property(nonatomic) long long sizeCategory; // @synthesize sizeCategory=_sizeCategory;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic, getter=isLowBattery) _Bool lowBattery;
- (void)_updateFillLayer;
- (void)_updateFillColor;
- (void)_updateBodyColors;
- (void)layoutSubviews;
- (double)_insideCornerRadiusForTraitCollection:(id)arg1;
- (double)_outsideCornerRadiusForTraitCollection:(id)arg1;
- (double)_marginForTraitCollection:(id)arg1;
- (double)_lineWidthForTraitCollection:(id)arg1;
- (struct CGSize)_pinSizeForTraitCollection:(id)arg1;
- (struct CGSize)_batterySizeForTraitCollection:(id)arg1;
- (id)_batteryColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSizeCategory:(long long)arg1;
- (void)_commonInit;

@end

