//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/SBFWallpaperDataStore-Protocol.h>

@class NSString, SBFWallpaperDefaults, SBWallpaperDefaults;

@interface SBFWallpaperUserDefaultsDataStore : NSObject <SBFWallpaperDataStore, BSDescriptionProviding>
{
    SBWallpaperDefaults *_userDefaults;
    SBFWallpaperDefaults *_wallpaperOptionsDefaults;
}

@property(readonly, nonatomic) SBFWallpaperDefaults *wallpaperOptionsDefaults; // @synthesize wallpaperOptionsDefaults=_wallpaperOptionsDefaults;
@property(readonly, nonatomic) SBWallpaperDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (_Bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2;
- (id)wallpaperOptionsForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (_Bool)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
- (void)updateProceduralWallpaperDefaultsWithIdentifier:(id)arg1 options:(id)arg2 forVariant:(long long)arg3;
- (id)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (_Bool)setVideoURL:(id)arg1 forVariant:(long long)arg2;
- (id)verifiedVideoURLForVariant:(long long)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (_Bool)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2;
- (_Bool)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2;
- (_Bool)setWallpaperImage:(id)arg1 forVariant:(long long)arg2;
- (id)wallpaperOriginalImageForVariant:(long long)arg1;
- (id)wallpaperThumbnailDataForVariant:(long long)arg1;
- (_Bool)hasWallpaperImageForVariant:(long long)arg1;
- (id)wallpaperImageForVariant:(long long)arg1;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

