//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel
{
    float _level;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) float level; // @synthesize level=_level;
- (id)_ringTextProvider;
- (id)_levelTintColor;
- (id)_newExtraLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newCircularTemplateMedium:(_Bool)arg1;
- (id)_newUtilitarianSmallTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)templateForComplicationFamily:(long long)arg1;

@end

