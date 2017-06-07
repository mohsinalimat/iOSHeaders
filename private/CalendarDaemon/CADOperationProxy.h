//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ClientConnection, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CADOperationProxy : NSObject
{
    ClientConnection *_conn;
    NSMutableDictionary *_operationGroups;
}

+ (Class)_operationGroupClassFromSelector:(SEL)arg1;
+ (Class)operationProxyClassForClientWithConnection:(id)arg1;
+ (id)allOperationGroupClasses;
- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(int)arg3;
- (id)_copyReplyBlockFromInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_emptyMethod;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_operationGroupForClass:(Class)arg1;
- (void)dealloc;
- (id)initWithClientConnection:(id)arg1;

@end

