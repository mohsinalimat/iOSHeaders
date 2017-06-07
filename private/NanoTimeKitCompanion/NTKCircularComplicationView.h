//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, NSDate, NSString, UIColor;
@protocol NTKComplicationDisplayObserver;

@interface NTKCircularComplicationView : UIView <NTKTemplateComplicationDisplay, NTKComplicationDisplay>
{
    UIView *_platter;
    UIView *_highlightView;
    NSDate *_timeTravelDate;
    _Bool _useRoundedFontDesign;
    _Bool _usesMediumLayout;
    id <NTKComplicationDisplayObserver> displayObserver;
    UIColor *_foregroundColor;
    UIColor *_platterColor;
    CLKComplicationTemplate *_complicationTemplate;
}

+ (id)_stopwatchImageProviderMedium:(_Bool)arg1;
+ (id)_alarmImageProviderMedium:(_Bool)arg1;
+ (id)_timerImageProviderMedium:(_Bool)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (id)mediumViewForComplicationType:(unsigned long long)arg1;
+ (id)viewForComplicationType:(unsigned long long)arg1;
@property(readonly, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property(readonly) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(nonatomic) _Bool usesMediumLayout; // @synthesize usesMediumLayout=_usesMediumLayout;
@property(nonatomic) _Bool useRoundedFontDesign; // @synthesize useRoundedFontDesign=_useRoundedFontDesign;
@property(retain, nonatomic) UIColor *platterColor; // @synthesize platterColor=_platterColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
- (void).cxx_destruct;
- (id)_fontForDynamicFontSize:(long long)arg1;
- (CDStruct_69ceb9b6)_layoutConstants;
- (void)_updateForTemplateChange;
- (_Bool)_wantsPlatter;
- (id)_mediumStackFontForText:(id)arg1;
- (long long)_variableFontSizeForText:(id)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)setComplicationTemplate:(id)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_updateLabelsForFontChange;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

