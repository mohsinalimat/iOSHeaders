//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFObservable, SBFScheduler;

@interface _SBFScheduledObservable : SBFObservable
{
    id <SBFObservable> _observable;
    id <SBFScheduler> _scheduler;
}

- (void).cxx_destruct;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 scheduler:(id)arg2;

@end

