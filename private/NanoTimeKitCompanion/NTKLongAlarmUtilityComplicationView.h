//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityImageAndLabelsComplicationView.h>

#import <NanoTimeKitCompanion/NTKAlarmComplicationDisplay-Protocol.h>

@class NSString;
@protocol NTKComplicationDisplayObserver;

@interface NTKLongAlarmUtilityComplicationView : NTKUtilityImageAndLabelsComplicationView <NTKAlarmComplicationDisplay>
{
}

- (void)setStateSnoozingWithDuration:(double)arg1;
- (void)setStateActiveWithDate:(id)arg1;
- (void)setStateNoAlarms;
- (void)setStateAllAlarmsOff;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

