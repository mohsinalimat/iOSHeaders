//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNSuspendableSchedulerDecorator;
@protocol CNCancelable;

__attribute__((visibility("hidden")))
@interface _CNFlatMapInnerSubscriptionContext : NSObject
{
    CNSuspendableSchedulerDecorator *_decorator;
    id <CNCancelable> _token;
}

@property(readonly, nonatomic) id <CNCancelable> token; // @synthesize token=_token;
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *decorator; // @synthesize decorator=_decorator;
- (void).cxx_destruct;
- (id)initWithDecorator:(id)arg1 token:(id)arg2;

@end

