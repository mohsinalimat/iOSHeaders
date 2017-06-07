//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, PricePopoverBar, StockChartView, StockGraphView, StocksTapDragGestureRecognizer, UILabel;

@interface ChartHUDView : UIView
{
    UILabel *_leftDateLabel;
    UILabel *_centeredLabel;
    UILabel *_rightDateLabel;
    long long _interval;
    NSMutableSet *_inactiveTouchInfoSet;
    NSMutableSet *_touchInfoSet;
    _Bool _forceTouchUpdate;
    PricePopoverBar *_pricePopoverBar;
    StocksTapDragGestureRecognizer *_tapDragGesture;
    _Bool _enabled;
    _Bool _overlayHidden;
    StockChartView *_chartView;
    StockGraphView *_graphView;
    double _barHeight;
}

+ (id)newHUDLabel;
+ (id)stringForTimeIntervalSince1970:(double)arg1 withInterval:(long long)arg2 isDouble:(_Bool)arg3 isLeft:(_Bool)arg4;
+ (void)initializeDateFormattersIfNeededForInterval:(long long)arg1 withTimeZone:(id)arg2;
+ (id)_dateRangeSeparatorString;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
@property(nonatomic, getter=isOverlayHidden) _Bool overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) StockGraphView *graphView; // @synthesize graphView=_graphView;
@property(nonatomic) __weak StockChartView *chartView; // @synthesize chartView=_chartView;
- (void).cxx_destruct;
- (void)tapDragGestureChanged:(id)arg1;
- (void)_showHUD;
- (_Bool)isTrackingTouches;
- (void)setShowingTracking:(_Bool)arg1 withTouchInfo:(id)arg2 animated:(_Bool)arg3;
- (void)setSelectedInterval:(long long)arg1 timeZone:(id)arg2;
- (void)layoutSubviews;
- (void)resizeSelectedClipViewsIfNeeded;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)resetLocale;

@end

