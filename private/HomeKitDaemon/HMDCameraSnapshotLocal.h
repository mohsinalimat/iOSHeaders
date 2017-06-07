//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, HMDCameraSessionID, HMDSnapshotFile, NSDictionary, NSString;
@protocol HMDCameraSnapshotLocalDelegate, HMDSnapshotRequestHandlerProtocol, OS_dispatch_queue;

@interface HMDCameraSnapshotLocal : NSObject <HMDCameraGetSnapshotProtocol, HMFLogging>
{
    HMDCameraSessionID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDAccessory *_accessory;
    NSDictionary *_options;
    id <HMDCameraSnapshotLocalDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDSnapshotFile *_snapshotFile;
    id <HMDSnapshotRequestHandlerProtocol> _snapshotRequestHandler;
}

+ (id)logCategory;
@property(readonly, nonatomic) id <HMDSnapshotRequestHandlerProtocol> snapshotRequestHandler; // @synthesize snapshotRequestHandler=_snapshotRequestHandler;
@property(retain, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotLocalDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)_callDelegate:(id)arg1 error:(id)arg2;
- (void)_handleSnapshotFile:(id)arg1 error:(id)arg2;
- (void)_getSnapshot:(unsigned long long)arg1;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 snapshotRequestHandler:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

