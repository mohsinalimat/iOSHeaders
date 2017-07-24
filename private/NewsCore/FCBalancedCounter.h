//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface FCBalancedCounter : NSObject
{
    struct os_unfair_lock_s _lock;
    long long _count;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)_bumpCounterPositively:(_Bool)arg1;
- (void)notifyWhenCountReachesZeroOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)decrement;
- (void)increment;
- (id)init;

@end

