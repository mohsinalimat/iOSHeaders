//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKDateTimelineEntryModel : NTKTimelineEntryModel
{
    _Bool _lunar;
}

@property(nonatomic) _Bool lunar; // @synthesize lunar=_lunar;
- (id)_newExtraLargeLunarTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newCircularTemplateMedium:(_Bool)arg1;
- (id)_newLargeUtilitarianTemplate;
- (id)_newSmallFlatUtilitarianTemplate;
- (id)_newModularLargeLunarTemplate;
- (id)_newModularLargeTemplate;
- (id)_newModularSmallLunarTemplate;
- (id)_newModularSmallTemplate;
- (id)templateForComplicationFamily:(long long)arg1;

@end

