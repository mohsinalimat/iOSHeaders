//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DASubCal/DATask-Protocol.h>

@class DAStatusReport, DATaskManager, NSString;

@interface SubCalDATask : NSObject <DATask>
{
    _Bool _finished;
    DATaskManager *_taskManager;
    DAStatusReport *_statusReport;
}

@property(retain, nonatomic) DAStatusReport *statusReport; // @synthesize statusReport=_statusReport;
@property(nonatomic) __weak DATaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)didFinish;
- (void)performDelegateCallbackWithError:(id)arg1;
- (void)willFinish;
- (void)finishWithError:(id)arg1;
- (_Bool)shouldHoldPowerAssertion;
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
- (void)performTask;
- (id)consumerDictKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

