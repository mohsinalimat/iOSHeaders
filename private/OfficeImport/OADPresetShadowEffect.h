//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADShadowEffect.h>

__attribute__((visibility("hidden")))
@interface OADPresetShadowEffect : OADShadowEffect
{
    int mPresetShadowType;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)equivalentOuterShadowEffect;
- (void)setPresetShadowType:(int)arg1;
- (int)presetShadowType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

