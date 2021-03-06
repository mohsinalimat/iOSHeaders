//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARConfiguration.h>

@interface ARWorldTrackingConfiguration : ARConfiguration
{
    _Bool _relocalizationEnabled;
    unsigned long long _planeDetection;
}

+ (id)new;
+ (_Bool)isSupported;
@property(nonatomic) _Bool relocalizationEnabled; // @synthesize relocalizationEnabled=_relocalizationEnabled;
@property(nonatomic) unsigned long long planeDetection; // @synthesize planeDetection=_planeDetection;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)techniques;
- (id)init;

@end

