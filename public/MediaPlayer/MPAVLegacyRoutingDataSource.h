//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAVLegacyRoutingDataSource : MPAVRoutingDataSource
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _discoveryMode;
    _Bool _routesDetected;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_parseAVRouteDescriptions:(id)arg1;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)arg1;
- (long long)discoveryMode;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

