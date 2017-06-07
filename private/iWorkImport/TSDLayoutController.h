//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, TSDCanvas, TSDLayout, TSDRootLayout;

__attribute__((visibility("hidden")))
@interface TSDLayoutController : NSObject
{
    TSDCanvas *mCanvas;
    TSDRootLayout *mRootLayout;
    struct __CFDictionary *mLayoutsByInfo;
    NSMutableSet *mInvalidLayouts;
    NSMutableSet *mLayoutsNeedingRecreating;
    NSMutableSet *mInvalidChildrenLayouts;
    TSDLayout *mValidatingLayout;
}

+ (void)temporaryLayoutControllerForInfos:(id)arg1 useInBlock:(CDUnknownBlockType)arg2;
+ (id)allInteractiveLayoutControllers;
- (void)i_removeAllLayouts;
- (void)i_unregisterLayout:(id)arg1;
- (void)i_registerLayout:(id)arg1;
- (void)notifyThatLayoutsChangedOutsideOfLayout;
- (id)validatedLayoutForInfo:(id)arg1 childOfLayout:(id)arg2;
- (id)validatedLayoutsForInfo:(id)arg1;
- (id)validatedLayoutForInfo:(id)arg1;
- (void)validateLayoutWithDependencies:(id)arg1;
- (void)validateLayoutsWithDependencies:(id)arg1;
- (void)validateLayouts:(id)arg1;
- (id)sortLayoutsForDependencies:(id)arg1;
- (void)validateLayouts;
- (struct CGRect)rectOfTopLevelLayouts;
- (id)layoutsInRect:(struct CGRect)arg1;
- (id)layoutForInfo:(id)arg1 childOfLayout:(id)arg2;
- (id)layoutsForInfos:(id)arg1;
- (id)layoutsForInfo:(id)arg1;
- (id)layoutForInfo:(id)arg1;
- (void)invalidateLayoutForRecreation:(id)arg1;
- (void)invalidateChildrenOfLayout:(id)arg1;
- (void)invalidateLayout:(id)arg1;
- (void)setInfos:(id)arg1;
- (id)rootLayout;
- (id)canvas;
- (void)dealloc;
- (id)initWithCanvas:(id)arg1;
- (_Bool)isLayoutOffscreen;

@end

