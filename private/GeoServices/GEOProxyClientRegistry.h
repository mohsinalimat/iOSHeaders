//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOProxyClient, NSLock, NSMutableSet;

@interface GEOProxyClientRegistry : NSObject
{
    NSLock *_lock;
    GEOProxyClient *_currentComposite;
    NSMutableSet *_currentSet;
}

+ (id)sharedRegistry;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_updateComposite;
- (void)dealloc;
- (void)enableRegistry;

@end

