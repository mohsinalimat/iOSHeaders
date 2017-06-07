//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@protocol SBFCancelable, SBFObservable, SBFObserver, SBFScheduler;

@protocol SBFObservable <NSObject>
- (id <SBFObservable>)generate:(id (^)(void))arg1;
- (id <SBFObservable>)map:(id (^)(id))arg1;
- (id <SBFObservable>)throttle:(double)arg1 onScheduler:(id <SBFScheduler>)arg2;
- (id <SBFObservable>)observeOn:(id <SBFScheduler>)arg1;
- (id <SBFObservable>)subscribeOn:(id <SBFScheduler>)arg1;
- (id <SBFCancelable>)subscribeWithResultBlock:(void (^)(id))arg1 completionBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (id <SBFCancelable>)subscribeWithResultBlock:(void (^)(id))arg1;
- (id <SBFCancelable>)subscribe:(id <SBFObserver>)arg1;
@end

