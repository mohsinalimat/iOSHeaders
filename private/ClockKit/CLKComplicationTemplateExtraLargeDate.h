//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKDateTextProvider;

@interface CLKComplicationTemplateExtraLargeDate : CLKComplicationTemplate
{
    CLKDateTextProvider *_weekdayTextProvider;
    CLKDateTextProvider *_dayTextProvider;
    unsigned long long _highlightMode;
}

@property(nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(copy, nonatomic) CLKDateTextProvider *dayTextProvider; // @synthesize dayTextProvider=_dayTextProvider;
@property(copy, nonatomic) CLKDateTextProvider *weekdayTextProvider; // @synthesize weekdayTextProvider=_weekdayTextProvider;
- (void).cxx_destruct;
- (_Bool)highlightLine2;
- (void)setHighlightLine2:(_Bool)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
