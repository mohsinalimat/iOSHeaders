//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKCompanionAppLibraryObserver-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, NTKCompanionAppLibrary;
@protocol OS_dispatch_queue;

@interface NTKCompanionFeaturedComplicationsAppLibrary : NSObject <NTKCompanionAppLibraryObserver>
{
    NSHashTable *_changeObservers;
    NSMutableArray *_allGalleryFeaturedComplicationApps;
    NTKCompanionAppLibrary *_appLibrary;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerCallbackQueue;
}

+ (id)sharedAppLibrary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerCallbackQueue; // @synthesize observerCallbackQueue=_observerCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NTKCompanionAppLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
@property(retain, nonatomic) NSMutableArray *allGalleryFeaturedComplicationApps; // @synthesize allGalleryFeaturedComplicationApps=_allGalleryFeaturedComplicationApps;
@property(retain, nonatomic) NSHashTable *changeObservers; // @synthesize changeObservers=_changeObservers;
- (void).cxx_destruct;
- (void)_queue_updateAllGalleryFeaturedComplicationApps;
- (id)_queue_thirdPartyAppsWithComplicationBundle;
- (void)_queue_notifyAppIconUpdated:(id)arg1;
- (void)_queue_notifyAppRemoved:(id)arg1;
- (void)_queue_notifyAppUpdated:(id)arg1;
- (void)_queue_notifyAppAdded:(id)arg1;
- (void)_iterateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)appLibrary:(id)arg1 didUpdateAppIcon:(id)arg2;
- (void)appLibrary:(id)arg1 didRemoveApp:(id)arg2;
- (void)appLibrary:(id)arg1 didUpdateApp:(id)arg2;
- (void)appLibrary:(id)arg1 didAddApp:(id)arg2;
@property(readonly, nonatomic) NSArray *topGalleryFeaturedComplicationApps;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

