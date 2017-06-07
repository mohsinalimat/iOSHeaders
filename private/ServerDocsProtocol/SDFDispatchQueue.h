//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface SDFDispatchQueue : NSObject
{
    NSString *_label;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)queueWithLabel:(id)arg1;
@property(readonly, retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)description;
- (void)dispatchWhen:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAsynchronousBlock:(CDUnknownBlockType)arg1;
- (void)_forceBlockToRetainQueue;
- (void)dispatchSynchronousBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1;

@end

