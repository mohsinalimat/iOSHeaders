//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MaterialKit/MTSystemModuleMaterialSettings.h>

#import <MaterialKit/_MTLuminanceMapConfiguring-Protocol.h>

@class NSString;

@interface MTSystemLegacyLuminanceSettings : MTSystemModuleMaterialSettings <_MTLuminanceMapConfiguring>
{
}

+ (id)sharedMaterialSettings;
@property(readonly, copy, nonatomic, getter=_luminanceColorMapName) NSString *luminanceColorMapName;
- (double)brightness;
- (double)saturation;
- (double)luminanceAlpha;
- (double)blurRadius;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
