//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class CNObservableContractEnforcement, NSMutableArray, NSString, _CNObservableEventBufferingStrategy;
@protocol CNScheduler, CNSchedulerProvider;

@interface CNReplaySubject : CNObservable <CNObserver>
{
    NSMutableArray *_observers;
    _CNObservableEventBufferingStrategy *_recentEvents;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNScheduler> _resourceLock;
    CNObservableContractEnforcement *_enforcement;
}

@property(readonly, nonatomic) CNObservableContractEnforcement *enforcement; // @synthesize enforcement=_enforcement;
@property(readonly, nonatomic) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(retain, nonatomic) _CNObservableEventBufferingStrategy *recentEvents; // @synthesize recentEvents=_recentEvents;
@property(readonly, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)resourceLock_swapBufferingStrategiesGivenNewTerminatingEvent:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (void)resourceLock_scheduleReplayToObserver:(id)arg1;
- (id)_addObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)performWithResourceLock:(CDUnknownBlockType)arg1;
- (id)resultWithResourceLock:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 schedulerProvider:(id)arg2;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

