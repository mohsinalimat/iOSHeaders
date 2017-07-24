//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationCanceling-Protocol.h>

@class FCForYouCatchUpCondition, NSError, NSString;
@protocol OS_dispatch_group;

@interface FCForYouCatchUpConditionWaiter : NSObject <FCOperationCanceling>
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_group> *_group;
    _Bool _finished;
    NSError *_error;
    FCForYouCatchUpCondition *_condition;
}

@property(retain, nonatomic) FCForYouCatchUpCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)_waitWithTimeoutTime:(unsigned long long)arg1;
- (void)_possiblyFinishWithError:(id)arg1;
- (void)cancel;
- (id)waitWithTimeoutInterval:(double)arg1;
- (id)wait;
- (void)signalWithError:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

