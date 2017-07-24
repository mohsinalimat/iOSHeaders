//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VKMemoryObserver : NSObject
{
    struct _geo_weak_ptr<id> {
        id _p;
    } _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)triggerMemoryNotification:(_Bool)arg1;
- (void)_receivedMemoryNotification;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

