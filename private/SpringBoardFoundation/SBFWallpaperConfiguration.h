//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL, SBFWallpaperConfigurationManager, SBFWallpaperOptions, SBWallpaperImage, UIImage;
@protocol SBFProceduralWallpaper;

@interface SBFWallpaperConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    id <SBFProceduralWallpaper> _proceduralWallpaper;
    long long _wallpaperType;
    SBWallpaperImage *_wallpaperImage;
    SBFWallpaperOptions *_wallpaperOptions;
    NSDictionary *_proceduralWallpaperInfo;
    NSURL *_videoURL;
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;
    long long _variant;
}

@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) SBFWallpaperConfigurationManager *wallpaperConfigurationManager; // @synthesize wallpaperConfigurationManager=_wallpaperConfigurationManager;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSDictionary *proceduralWallpaperInfo; // @synthesize proceduralWallpaperInfo=_proceduralWallpaperInfo;
@property(copy, nonatomic) SBFWallpaperOptions *wallpaperOptions; // @synthesize wallpaperOptions=_wallpaperOptions;
@property(retain, nonatomic) SBWallpaperImage *wallpaperImage; // @synthesize wallpaperImage=_wallpaperImage;
@property(readonly, nonatomic) long long wallpaperType; // @synthesize wallpaperType=_wallpaperType;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <SBFProceduralWallpaper> proceduralWallpaper;
@property(readonly, copy, nonatomic) NSDictionary *proceduralWallpaperOptions;
@property(readonly, copy, nonatomic) NSString *proceduralWallpaperIdentifier;
@property(readonly, nonatomic) UIImage *wallpaperOriginalImage;
- (id)wallpaperThumbnailImageData;
@property(readonly, nonatomic) UIImage *wallpaperThumbnailImage;
- (id)init;
- (id)initWithWallpaperConfigurationManager:(id)arg1 variant:(long long)arg2 type:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

