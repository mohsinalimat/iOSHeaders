//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCH3DLightShaderEffectState : NSObject
{
    NSMutableArray *mLights;
    struct LightingPackageShaderEffectState mPackageState;
}

+ (id)effectState;
- (id).cxx_construct;
- (void)removeAllObjects;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)setPackageState:(const struct LightingPackageShaderEffectState *)arg1;
- (const struct LightingPackageShaderEffectState *)packageState;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

