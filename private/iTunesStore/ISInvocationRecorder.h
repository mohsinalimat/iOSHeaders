//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ISInvocationRecorder : NSObject
{
    id _target;
}

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)invokeInvocation:(id)arg1;
- (id)adjustedTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;

@end

