//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISSettings.h>

@interface ISPerformanceDiagnosticsSettings : ISSettings
{
    _Bool _shouldTracePerformance;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool shouldTracePerformance; // @synthesize shouldTracePerformance=_shouldTracePerformance;
- (void)setDefaultValues;

@end

