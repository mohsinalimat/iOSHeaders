//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>

#import <NanoTimeKitCompanion/NTKWorldClockComplicationDisplay-Protocol.h>

@class NSString, NSTimeZone, NTKColoringLabel, NTKDigitalTimeLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKWorldClockLargeModuleView : NTKComplicationModuleView <NTKWorldClockComplicationDisplay>
{
    NTKColoringLabel *_cityLabel;
    NTKDigitalTimeLabel *_timeLabel;
    NTKColoringLabel *_dayLabel;
    NTKColoringLabel *_differenceLabel;
    NSTimeZone *_timeZone;
}

- (void).cxx_destruct;
- (void)endTimeTravelAnimated:(_Bool)arg1;
- (void)startTimeTravelAnimated:(_Bool)arg1;
- (void)_updateTimeFont:(_Bool)arg1;
- (id)_timeFontOfSize:(double)arg1 monospace:(_Bool)arg2;
- (id)_timeFontOfSize:(double)arg1;
- (void)_updateDayAndDifferenceLabels;
- (void)setOverrideDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setLongCity:(id)arg1;
- (void)_layoutContentView;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

