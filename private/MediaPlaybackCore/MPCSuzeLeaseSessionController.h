//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/ICSuzeLeaseSessionDelegate-Protocol.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface MPCSuzeLeaseSessionController : NSObject <ICSuzeLeaseSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMapTable *_leaseIDToLeaseSessionInfo;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)suzeLeaseSession:(id)arg1 leaseRenewalDidFailWithError:(id)arg2;
- (void)stopLeaseSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startLeaseSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

