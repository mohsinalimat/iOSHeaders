//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _WebSafeAsyncForwarder;

__attribute__((visibility("hidden")))
@interface _WebSafeForwarder : NSObject
{
    id target;
    id defaultTarget;
    _WebSafeAsyncForwarder *asyncForwarder;
    long long asyncForwarderPred;
}

- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)clearTarget;
- (void)dealloc;
- (id)asyncForwarder;
- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;

@end

