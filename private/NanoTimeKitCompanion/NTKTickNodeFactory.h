//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKTickNodeFactory : NSObject
{
}

+ (id)_shaderWithTickWidth:(double)arg1 filterWidth:(double)arg2;
+ (id)_shaderCache;
+ (id)_tickTexture;
+ (id)textureAtlas;
+ (id)imagesDictionary;
+ (void)layoutNodes:(id)arg1 offset:(unsigned long long)arg2 center:(struct CGPoint)arg3 radius:(double)arg4 angleMultiplier:(double)arg5 scale:(double)arg6 rotate:(_Bool)arg7 round:(_Bool)arg8;
+ (void)setBackgroundColor:(id)arg1 onTicks:(id)arg2;
+ (void)colorizeTicks:(id)arg1 baseColor:(id)arg2 accentColor:(id)arg3 baseAlpha:(double)arg4 accentAlpha:(double)arg5 accentModulo:(long long)arg6;
+ (id)ticks:(unsigned int)arg1 center:(struct CGPoint)arg2 radius:(double)arg3 color1:(id)arg4 color2:(id)arg5 smallSize:(struct CGSize)arg6 largeSize:(struct CGSize)arg7 smallFilterWidth:(double)arg8 largeFilterWidth:(double)arg9 l1mod:(unsigned int)arg10 l2mod:(unsigned int)arg11;

@end

