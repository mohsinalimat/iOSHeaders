//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMScheduler : NSObject
{
}

+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)schedulerWithDispatchQueue:(id)arg1;
+ (id)mainThreadScheduler;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;

@end

