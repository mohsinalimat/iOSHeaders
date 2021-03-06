//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPClient : NSObject
{
    NSMutableSet *_assertions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    unsigned int _type;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateAssertionWithIdentifier:(id)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (id)init;

@end

