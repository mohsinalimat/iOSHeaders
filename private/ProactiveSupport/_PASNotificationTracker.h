//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _PASNotificationTracker : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _nextNotificationToken;
    NSMutableDictionary *_observers;
}

- (void).cxx_destruct;
- (void)issueNotificationAsyncWithContext:(id)arg1;
- (_Bool)deregisterHandlerAsyncWithToken:(id)arg1;
- (_Bool)deregisterHandlerWithToken:(id)arg1;
- (_Bool)_deregisterHandlerWithToken:(id)arg1 waitOnPending:(_Bool)arg2;
- (id)registerWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

