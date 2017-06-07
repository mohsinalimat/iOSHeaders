//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATTaskClientDelegate-Protocol.h>

@class CATOperation, CATOperationQueue, CATTaskClient, NSString;
@protocol CRKToolCommandDelegate, OS_dispatch_source;

@interface CRKToolCommand : NSObject <CATTaskClientDelegate>
{
    NSObject<OS_dispatch_source> *mSIGINTSource;
    CDUnknownBlockType mConnectCompletionBlock;
    CATTaskClient *mStudentClient;
    CATTaskClient *mInstructorClient;
    CATOperationQueue *mOperationQueue;
    CATOperation *mOperation;
    id <CRKToolCommandDelegate> _delegate;
    NSString *_sessionIdentifier;
}

+ (_Bool)handlesProgress;
+ (_Bool)instructorCommand;
+ (void)printHelp;
+ (id)help;
+ (id)description;
+ (id)aliases;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) __weak id <CRKToolCommandDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clientDidDisconnect:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)clientDidConnect:(id)arg1;
- (_Bool)didOperationSucceed:(id)arg1;
- (_Bool)didCommandSucceed;
- (_Bool)isCommandFinished;
- (void)cleanupAndExitIfNeeded;
- (void)_remoteTaskDidFinish:(id)arg1;
- (void)_remoteTaskDidProgress:(id)arg1;
- (void)executeOperation:(id)arg1;
- (void)connectOperationDidFail:(id)arg1;
- (void)connectOperationDidSucceed:(id)arg1;
- (void)connectToTaskClientWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)remoteTaskDidFinish:(id)arg1;
- (void)remoteTaskDidProgress:(id)arg1;
- (id)requestWithArguments:(id)arg1;
- (id)operationWithClient:(id)arg1 arguments:(id)arg2;
- (void)runWithClient:(id)arg1 arguments:(id)arg2;
- (void)runWithArguments:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

