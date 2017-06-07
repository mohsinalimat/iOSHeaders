//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DisplayListPoolPrivate;

@interface DisplayListPool : NSObject
{
    DisplayListPoolPrivate *_private;
}

+ (id)sharedPool;
- (void).cxx_destruct;
- (struct CGDisplayList *)_drawDisplayListPage:(id)arg1;
- (id)_findDisplayList:(id)arg1;
- (id)_findRequest:(id)arg1;
- (id)_getNextRequest:(int)arg1;
- (_Bool)_hasWork;
- (void)_update;
- (int)displayListCount;
- (void)updateActivePageIndex:(int)arg1;
- (void)releaseDisplayList:(struct CGDisplayList *)arg1 forPage:(id)arg2;
- (void)requestDisplayListForPage:(id)arg1 forTarget:(id)arg2;
- (void)dealloc;
- (id)init;

@end
