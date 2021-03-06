//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SPXPCConnection;
@protocol OS_os_transaction, OS_xpc_object;

@interface SPXPCMessage : NSObject
{
    SPXPCConnection *_receivingConnection;
    NSObject<OS_xpc_object> *_x_reply_connection;
    NSObject<OS_xpc_object> *_x_message;
    NSObject<OS_xpc_object> *_x_rootObject;
    NSObject<OS_xpc_object> *_x_reply;
    NSObject<OS_xpc_object> *_x_feedbackData;
    NSObject<OS_os_transaction> *_replyTransaction;
    NSString *_name;
    NSDictionary *_info;
}

@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)needsReply;
- (void)sendReply:(id)arg1;
- (id)_createXPCMessage;
- (void)setRootObjectForFeedback:(id)arg1;
- (id)rootObjectOfClassesForFeedback:(id)arg1;
- (void)setRootObject:(id)arg1;
- (id)rootObjectOfClasses:(id)arg1;
- (id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2;
- (id)initWithName:(id)arg1;

@end

