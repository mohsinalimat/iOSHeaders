//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallSimpleText : CLKComplicationTemplate
{
    CLKTextProvider *_textProvider;
    long long _maxDynamicFontSize;
}

@property(nonatomic) long long maxDynamicFontSize; // @synthesize maxDynamicFontSize=_maxDynamicFontSize;
@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;
- (id)init;

@end

