//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNSNotificationServiceExtensionSessionDelegate-Protocol.h>

@class NSExtension, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface UNSNotificationServiceExtension : NSObject <UNSNotificationServiceExtensionSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSExtension *_extension;
    NSMutableDictionary *_sessionBySessionUUID;
}

+ (void)extensionForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_setSession:(id)arg1 forSessionUUID:(id)arg2;
- (id)_takeSessionForSessionUUID:(id)arg1;
- (void)_setupExtension;
- (void)session:(id)arg1 wasCancelledWithError:(id)arg2;
- (void)beginSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)proxy;
- (id)_initWithExtension:(id)arg1;

@end

