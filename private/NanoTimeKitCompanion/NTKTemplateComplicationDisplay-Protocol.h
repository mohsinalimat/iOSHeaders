//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class CLKComplicationTemplate;

@protocol NTKTemplateComplicationDisplay <NTKComplicationDisplay, NTKTimeTravel>
+ (_Bool)handlesComplicationTemplate:(CLKComplicationTemplate *)arg1;
- (CLKComplicationTemplate *)complicationTemplate;
- (void)setComplicationTemplate:(CLKComplicationTemplate *)arg1;

@optional
+ (_Bool)supportsComplicationFamily:(long long)arg1;
- (long long)layoutOverride;
@end

