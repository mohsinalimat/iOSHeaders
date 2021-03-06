//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPStoreBagCoordinator : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (_Bool)requiresStoreBagReloadFromEnvironment:(id)arg1 toEnvironment:(id)arg2;
+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (void)loadStoreBagForEnvironment:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

