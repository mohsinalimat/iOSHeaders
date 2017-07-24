//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPhotoEffect : NSObject
{
    _Bool _isLegacy;
    NSString *_filterIdentifier;
    NSString *_displayName;
    NSString *_CIFilterName;
}

+ (id)effectWithCIFilterName:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1;
+ (unsigned long long)indexOfEffectWithIdentifier:(id)arg1;
+ (_Bool)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2;
+ (_Bool)isEffectNoneForIdentifier:(id)arg1;
+ (id)allSupportedEffects;
+ (id)standardSupportedEffects;
+ (id)allEffects;
+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 type:(long long)arg4 isLegacy:(_Bool)arg5;
+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 type:(long long)arg4;
+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
+ (id)_legacyEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2;
@property(readonly, nonatomic) _Bool isLegacy; // @synthesize isLegacy=_isLegacy;
@property(readonly, copy, nonatomic) NSString *CIFilterName; // @synthesize CIFilterName=_CIFilterName;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *filterIdentifier; // @synthesize filterIdentifier=_filterIdentifier;
- (id)newEffectFilter;
@property(readonly, nonatomic) long long latestVersion;
- (id)description;
- (void)dealloc;

@end

