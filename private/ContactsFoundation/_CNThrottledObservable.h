//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNCancelable, CNObservable, CNScheduler;

__attribute__((visibility("hidden")))
@interface _CNThrottledObservable : CNObservable
{
    id <CNObservable> _observable;
    double _interval;
    id <CNScheduler> _observerScheduler;
    id <CNScheduler> _resourceLock;
    id _mostRecentResult;
    id <CNCancelable> _delayToken;
}

@property(retain) id <CNCancelable> delayToken; // @synthesize delayToken=_delayToken;
@property(retain) id mostRecentResult; // @synthesize mostRecentResult=_mostRecentResult;
@property(readonly) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property(readonly) id <CNScheduler> observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property(readonly) double interval; // @synthesize interval=_interval;
@property(readonly) CNObservable *observable; // @synthesize observable=_observable;
- (void).cxx_destruct;
- (void)observerScheduler_sendResultToObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 observable:(id)arg2 schedulerProvider:(id)arg3;

@end

