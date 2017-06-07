//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWPrivilegedHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSMutableDictionary *_handlers;
    NSMutableSet *_allKnownEntitlementSet;
    NSMutableArray *_allKnownEntitlementGroup;
}

@property(retain) NSMutableArray *allKnownEntitlementGroup; // @synthesize allKnownEntitlementGroup=_allKnownEntitlementGroup;
@property(retain) NSMutableSet *allKnownEntitlementSet; // @synthesize allKnownEntitlementSet=_allKnownEntitlementSet;
@property(retain) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)handleRequest:(id)arg1 onConnection:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)startThrottlePolicyEventListener;
- (_Bool)startXPCListener;
- (void)registerHelperFunctions;
- (void)registerHandlerFunction:(CDUnknownFunctionPointerType)arg1 type:(int)arg2 allowedEntitlementGroup:(id)arg3;

@end

