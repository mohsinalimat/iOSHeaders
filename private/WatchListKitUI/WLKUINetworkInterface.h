//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <WatchListKitUI/WLKUINetworkInterface-Protocol.h>

@interface WLKUINetworkInterface : IKJSObject <WLKUINetworkInterface>
{
    _Bool _suppressServerConfigNotifications;
}

- (void)_handleServerConfigChange:(id)arg1;
- (void)_handleAppLibChange:(id)arg1;
- (void)_fireInitConfigCallbackWithUUID:(id)arg1;
- (void)invalidateConfiguration;
- (void)fetchConfiguration:(_Bool)arg1:(id)arg2;
- (void)cancelRequest:(id)arg1;
- (id)makeRequest:(id)arg1:(id)arg2;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

@end

