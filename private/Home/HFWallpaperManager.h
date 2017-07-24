//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeManagerObserver-Protocol.h>
#import <Home/HFHomeObserver-Protocol.h>

@class HFWallpaperFileManager, HFWallpaperImageCache, HFWallpaperLegacyFileManager, NSMutableDictionary, NSOperationQueue, NSString, NSUserDefaults;
@protocol HFNamedWallpaperSource;

@interface HFWallpaperManager : NSObject <HFHomeManagerObserver, HFHomeObserver>
{
    _Bool _wallpaperSourceRegistered;
    id <HFNamedWallpaperSource> _namedWallpaperSource;
    HFWallpaperFileManager *_fileManager;
    HFWallpaperLegacyFileManager *_legacyFileManager;
    HFWallpaperImageCache *_imageCache;
    NSUserDefaults *_userDefaults;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_wallpapers;
    NSMutableDictionary *_wallpaperSlices;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *wallpaperSlices; // @synthesize wallpaperSlices=_wallpaperSlices;
@property(retain, nonatomic) NSMutableDictionary *wallpapers; // @synthesize wallpapers=_wallpapers;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) HFWallpaperImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) HFWallpaperLegacyFileManager *legacyFileManager; // @synthesize legacyFileManager=_legacyFileManager;
@property(retain, nonatomic) HFWallpaperFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) id <HFNamedWallpaperSource> namedWallpaperSource; // @synthesize namedWallpaperSource=_namedWallpaperSource;
@property(readonly, nonatomic) _Bool wallpaperSourceRegistered; // @synthesize wallpaperSourceRegistered=_wallpaperSourceRegistered;
- (void).cxx_destruct;
- (void)_logUserMetricsAfterSettingWallpaper;
- (void)dispatchWallpaperChangedForHomeKitObject:(id)arg1;
- (long long)namedCollectionTypeForHomeKitObject:(id)arg1;
- (void)_queue_pruneUnusedWallpapers;
- (void)_queue_setWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3;
- (id)_queue_wallpaperForHomeKitObject:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)_queue_originalImageForWallpaper:(id)arg1;
- (void)preloadWallpaperSlicesForHomeKitObject:(id)arg1;
- (void)preloadWallpapersForHome:(id)arg1;
- (void)migrateIfNeeded;
- (void)initializeCacheWithHome:(id)arg1;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)setWallpaper:(id)arg1 image:(id)arg2 forHomeKitObject:(id)arg3;
- (id)sliceFromWallpaper:(id)arg1 variant:(long long)arg2;
- (id)wallpaperForHomeKitObject:(id)arg1;
- (id)generateProcessedImageFromWallpaper:(id)arg1 originalImage:(id)arg2;
- (id)imageForNamedWallpaper:(id)arg1;
- (id)defaultNamedWallpaperForCollection:(long long)arg1;
- (id)allNamedWallpapersForCollection:(long long)arg1;
- (void)registerWallpaperSource:(id)arg1 processedSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

