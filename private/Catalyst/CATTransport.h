//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CATOperationQueue, CATStateMachine, NSString;
@protocol CATTransportDelegate;

@interface CATTransport : NSObject
{
    CATStateMachine *mFSM;
    CATOperationQueue *mControlQueue;
    CATOperationQueue *mMessageQueue;
    CATTransport *mStrongSelf;
    NSString *_name;
    id <CATTransportDelegate> _delegate;
}

@property(nonatomic) __weak id <CATTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)delegateDidInvalidate;
- (void)enqueueDelegateDidInterruptWithError:(id)arg1;
- (void)enqueueDelegateCouldNotConnectWithError:(id)arg1;
- (void)enqueueDelegateDidReceiveMessage:(id)arg1;
- (void)enqueueDelegateDidConnect;
- (void)delegateDidResume;
- (id)operationToSendMessage:(id)arg1;
- (void)invalidateConnection;
- (void)suspendConnection;
- (void)resumeConnection;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)invalidSendForMessage:(id)arg1;
- (void)enqueueSendForMessage:(id)arg1;
- (void)suspendQueue;
- (void)resumeQueue;
- (void)suspendQueueAndConnection;
- (void)resumeQueueAndConnection;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)sendHelloMessageAndResumeQueue;
- (void)didInvalidate;
- (void)didInterruptWithError:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)dealloc;

@end

