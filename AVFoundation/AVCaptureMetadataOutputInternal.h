//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray;
@protocol OS_dispatch_queue;

@interface AVCaptureMetadataOutputInternal : NSObject
{
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSArray *metadataObjectTypes;
    struct CGRect rectOfInterest;
    AVWeakReference *weakReference;
    struct OpaqueFigSimpleMutex *remoteQueueMutex;
    void *remoteReceiverQueue;
    NSObject<OS_dispatch_queue> *objectQueue;
}

- (void)dealloc;
- (id)init;

@end
