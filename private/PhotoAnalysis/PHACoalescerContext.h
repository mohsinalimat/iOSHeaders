//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, PHACoalescer;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PHACoalescerContext : NSObject
{
    unsigned long long _coalescedUpdatesCount;
    PHACoalescer *_coalescer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_group;
    NSHashTable *_pendingActivityTokens;
}

@property(retain) NSHashTable *pendingActivityTokens; // @synthesize pendingActivityTokens=_pendingActivityTokens;
@property(retain) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property __weak PHACoalescer *coalescer; // @synthesize coalescer=_coalescer;
@property unsigned long long coalescedUpdatesCount; // @synthesize coalescedUpdatesCount=_coalescedUpdatesCount;
- (void).cxx_destruct;
- (void)notifyActivityTokenCompletionOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly) NSArray *pendingActivityTokensSnapshot;
- (void)cancelPendingActivityTokens;
- (id)activityTokenWithReason:(id)arg1;
- (id)activityToken;
- (void)delayNextInvocationByTimeInterval:(double)arg1;
- (void)pushBack:(CDUnknownBlockType)arg1;
- (id)initWithCoalescer:(id)arg1;

@end

