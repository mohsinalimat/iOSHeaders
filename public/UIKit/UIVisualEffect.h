//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@class _UIBackdropViewSettings, _UIVisualEffectConfig;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>
{
    _UIVisualEffectConfig *_effectConfig;
}

+ (_Bool)supportsSecureCoding;
+ (id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCompositingColor:(id)arg1;
+ (id)effectCompositingImage:(id)arg1;
+ (id)effectCombiningEffects:(id)arg1;
+ (id)emptyEffect;
@property(readonly, nonatomic) _UIVisualEffectConfig *effectConfig; // @synthesize effectConfig=_effectConfig;
- (void).cxx_destruct;
- (long long)_expectedUsage;
- (_Bool)_needsUpdateForOption:(id)arg1;
- (_Bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (_Bool)_selectorOverriden:(SEL)arg1;
- (void)_enumerateEffects:(CDUnknownBlockType)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectConfigForOptions:(id)arg1;
- (id)effectConfigForQuality:(long long)arg1;
@property(readonly, nonatomic) _Bool _isAutomaticStyle;
@property(readonly, nonatomic) _Bool _isATVStyle;
@property(readonly, nonatomic) _UIBackdropViewSettings *effectSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

