//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, TIImageCacheClient, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject
{
    TIImageCacheClient *_store;
    NSSet *_layouts;
    NSMutableSet *_activeRenderers;
    _UIActionWhenIdle *_idleAction;
}

+ (_Bool)enabled;
+ (id)sharedInstance;
@property(retain, nonatomic) _UIActionWhenIdle *idleAction; // @synthesize idleAction=_idleAction;
- (void)decrementExpectedRender:(id)arg1;
- (void)incrementExpectedRender:(id)arg1;
- (void)updateCacheForInputModes:(id)arg1;
- (id)uniqueLayoutsFromInputModes:(id)arg1;
- (void)_didIdleAndShouldWait;
- (void)_didIdle;
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;
- (void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(struct CGContext *)arg3;
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;
- (void)purge;
- (void)clearNonPersistentCache;
- (void)commitTransaction;
- (void)dealloc;
- (id)init;

@end

