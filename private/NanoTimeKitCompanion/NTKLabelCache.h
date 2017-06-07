//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface NTKLabelCache : NSObject
{
    NSMutableDictionary *_atlases;
    NSMutableSet *_preloadSet;
}

+ (void)wipe;
+ (id)numeralsSetFromCurrentLocale;
+ (id)versionFilePath;
+ (id)labelForFaceStyle:(long long)arg1 number:(unsigned long long)arg2 fontSize:(double)arg3 paddedWithZeros:(_Bool)arg4;
+ (id)labelForText:(id)arg1 font:(long long)arg2 fontSize:(double)arg3 padWithZeroes:(_Bool)arg4 filter:(_Bool)arg5;
+ (void)_purgeCache;
+ (_Bool)localeChanged;
+ (void)prime;
+ (_Bool)setNumeralsSet:(id)arg1;
- (void).cxx_destruct;
- (id)labelForFaceStyle:(long long)arg1 number:(unsigned long long)arg2 fontSize:(double)arg3 paddedWithZeros:(_Bool)arg4;
- (void)exportTextureAtlas:(long long)arg1;
- (id)nameForFaceStyle:(long long)arg1;
- (id)labelForText:(id)arg1 font:(long long)arg2 fontSize:(double)arg3 padWithZeroes:(_Bool)arg4 filter:(_Bool)arg5;
- (id)textureFor:(id)arg1 font:(long long)arg2 fontSize:(double)arg3 padWithZeroes:(_Bool)arg4;
- (void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3 padWithZeroes:(_Bool)arg4 preload:(_Bool)arg5;
- (void)exportTextureAtlas:(double)arg1 font:(long long)arg2 values:(id)arg3 padWithZeroes:(_Bool)arg4 preload:(_Bool)arg5;
- (void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3 padWithZeroes:(_Bool)arg4;
- (void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3 preload:(_Bool)arg4;
- (void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3;
- (id)keyForLabelWithFont:(long long)arg1 fontSize:(double)arg2 padWithZeroes:(_Bool)arg3;
- (void)primeFontSize:(double)arg1 font:(long long)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4 step:(unsigned long long)arg5;
- (void)loadAtlases;
- (void)checkVersion;
- (_Bool)_localeChanged;
- (void)dealloc;
- (id)init;

@end

