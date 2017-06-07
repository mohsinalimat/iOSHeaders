//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOTileServerProxy.h>

@class NSHashTable, NSLock, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface GEOTileServerRemoteProxy : GEOTileServerProxy
{
    NSObject<OS_dispatch_queue> *_connQueue;
    NSObject<OS_xpc_object> *_conn;
    NSLock *_connLock;
    int _suspendCount;
    unsigned long long _handleCounter;
    NSHashTable *_cancellingConnections;
    NSLock *_cancellingConnectionsLock;
}

- (_Bool)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(_Bool)arg2;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)calculateFreeableSize;
- (void)flushPendingWrites;
- (void)open;
- (void)close;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)cancel:(const struct _GEOTileKey *)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)loadTiles:(id)arg1 priorities:(unsigned int *)arg2 options:(unsigned long long)arg3 client:(id)arg4;
- (void)_handleEditionUpgrade:(id)arg1;
- (void)_handleNetworkBegan:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleTile:(id)arg1;
- (void)_handleEvent:(id)arg1 fromConnection:(id)arg2;
- (void)dealloc;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;

@end

