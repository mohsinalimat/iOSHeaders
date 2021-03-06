//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@class NSMutableArray, NSObject;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

@interface HAPAccessoryServerBrowserRelay : HAPAccessoryServerBrowser
{
    NSMutableArray *_discoveredAccessoryServers;
    id <HAPAccessoryServerBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *discoveredAccessoryServers; // @synthesize discoveredAccessoryServers=_discoveredAccessoryServers;
- (void).cxx_destruct;
- (void)removeAccessoryServerWithStream:(id)arg1;
- (void)addAccessoryServerWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)_setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (long long)linkType;
- (id)initWithQueue:(id)arg1;

@end

