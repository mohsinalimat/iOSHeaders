//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface IMDMessageServicesCenter : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;
- (void)requestWatchdogForMessageGuid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestWatchdogWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestWatchdogWithGUID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestExpireStateForMessageGuid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestExpireStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestExpireStateWithGUID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)requestRoutingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)_connect;
- (_Bool)_disconnect;
- (void)_disconnected;
- (void)dealloc;
- (id)init;

@end

