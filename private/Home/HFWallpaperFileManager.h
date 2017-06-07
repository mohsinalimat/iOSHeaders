//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface HFWallpaperFileManager : NSObject
{
    NSURL *_wallpaperFolderURL;
}

@property(retain, nonatomic) NSURL *wallpaperFolderURL; // @synthesize wallpaperFolderURL=_wallpaperFolderURL;
- (void).cxx_destruct;
- (id)filenameForWallpaper:(id)arg1;
- (void)pruneUnusedOriginalWallpaperImages:(id)arg1;
- (void)saveOriginalImage:(id)arg1 forWallpaper:(id)arg2;
- (id)originalImageForWallpaper:(id)arg1;
- (_Bool)originalImageExistsForWallpaper:(id)arg1;
- (id)init;

@end

