//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface ISOperationQueue : NSObject
{
    NSOperationQueue *_queue;
}

+ (id)mainQueue;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setSuspended:(_Bool)arg1;
- (void)setName:(id)arg1;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
@property _Bool adjustsMaxConcurrentOperationCount;
- (id)operations;
- (id)name;
- (long long)maxConcurrentOperationCount;
- (long long)operationCount;
- (void)cancelAllOperations;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

