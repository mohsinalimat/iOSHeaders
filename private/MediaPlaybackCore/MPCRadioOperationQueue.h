//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RadioRequestContext;
@protocol OS_dispatch_queue;

@interface MPCRadioOperationQueue : NSObject
{
    RadioRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedQueue;
@property(copy, nonatomic) RadioRequestContext *requestContext; // @synthesize requestContext=_requestContext;
- (void).cxx_destruct;
- (void)loadRadioConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

