//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSXPCListenerDelegate-Protocol.h>

@class GEONavigationServer, NSString, NSXPCListener;

@interface GEONavdServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_pushNavigationStateListener;
    NSXPCListener *_getNavigationStateListener;
    NSXPCListener *_monitorDestinationListener;
    GEONavigationServer *_navigationServer;
}

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

