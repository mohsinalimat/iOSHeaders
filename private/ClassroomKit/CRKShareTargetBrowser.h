//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATTaskClientDelegate-Protocol.h>
#import <ClassroomKit/CATTaskOperationNotificationDelegate-Protocol.h>

@class CATOperationQueue, CATRemoteTaskOperation, CATTaskClient, NSSet, NSString;
@protocol CRKShareTargetBrowserDelegate, OS_dispatch_queue;

@interface CRKShareTargetBrowser : NSObject <CATTaskClientDelegate, CATTaskOperationNotificationDelegate>
{
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    id <CRKShareTargetBrowserDelegate> mDelegate;
    CATTaskClient *mStudentClient;
    CATTaskClient *mInstructorClient;
    CATOperationQueue *mOperationQueue;
    CATRemoteTaskOperation *mBrowseForStudentTargetsOperation;
    CATRemoteTaskOperation *mBrowseForInstructorTargetsOperation;
    NSSet *mInstructorTargets;
    NSSet *mStudentTargets;
    _Bool mBrowsing;
    _Bool mIsValid;
}

- (void).cxx_destruct;
- (void)delegateDidRemoveTargets:(id)arg1;
- (void)delegateDidFindTargets:(id)arg1;
- (void)delegateDidInterruptWithError:(id)arg1;
- (id)makeShareTargetsWithDictionaries:(id)arg1 taskClient:(id)arg2;
- (void)resumeWithTransport:(id)arg1;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidDisconnect:(id)arg1;
- (void)clientDidConnect:(id)arg1;
- (void)instructorTargetsDidChange:(id)arg1;
- (void)browseForInstructorTargetsOperationDidFinish:(id)arg1;
- (void)stopBrowsingForInstructorTargets;
- (void)startBrowsingForInstructorTargetsIfNeeded;
- (void)fetchInstructorEndpointOperationDidFinish:(id)arg1;
- (void)connectToInstructor;
- (void)studentTargetsDidChange:(id)arg1;
- (void)browseForStudentTargetsOperationDidFinish:(id)arg1;
- (void)stopBrowsingForStudentTargets;
- (void)startBrowsingForStudentTargetsIfNeeded;
- (void)acquireStudentActivityAssertion;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

