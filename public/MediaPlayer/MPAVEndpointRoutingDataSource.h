//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource
{
    NSMapTable *_cachedEndpoints;
    NSObject<OS_dispatch_queue> *_serialQueue;
    void *_discoverySession;
    void *_callbackToken;
}

- (void).cxx_destruct;
- (void)_endpointsDidChange:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)arg1;
- (long long)discoveryMode;
- (void)dealloc;
- (id)init;

@end

