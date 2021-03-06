//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/RWIProtocolNetworkDomainHandler-Protocol.h>

@class IKJSInspectorController, NSMutableSet, NSString;

@interface IKJSInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler>
{
    NSMutableSet *_requestRecords;
    IKJSInspectorController *_controller;
}

@property(readonly, nonatomic) __weak IKJSInspectorController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)resolveWebSocketWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 requestId:(id)arg3 objectGroup:(id *)arg4;
- (void)loadResourceWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 frameId:(id)arg3 url:(id)arg4;
- (void)setResourceCachingDisabledWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 disabled:(_Bool)arg3;
- (void)setCacheDisabledWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 cacheDisabled:(_Bool)arg3;
- (void)getResponseBodyWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 requestId:(id)arg3;
- (void)setExtraHTTPHeadersWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 headers:(id)arg3;
- (void)disableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)enableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)clearAllTrackedLoaders;
- (id)registerNetworkRequestLoader:(id)arg1;
- (id)initWithInspectorController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

