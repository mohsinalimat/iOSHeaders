//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMFoundation/IMInvocationTrampoline.h>

@interface IMCapturedInvocationTrampoline : IMInvocationTrampoline
{
    id *_outInvocation;
}

- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 outInvocation:(id *)arg2;

@end

