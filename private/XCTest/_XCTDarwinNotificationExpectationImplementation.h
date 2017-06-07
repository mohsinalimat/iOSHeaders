//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCTDarwinNotificationExpectation;
@protocol OS_dispatch_queue;

@interface _XCTDarwinNotificationExpectationImplementation : NSObject
{
    XCTDarwinNotificationExpectation *_expectation;
    NSString *_notificationName;
    int _notifyToken;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasCleanedUp;
}

@property(readonly, copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)cleanup;
- (void)_handleNotification;
@property(copy) CDUnknownBlockType handler;
- (id)initWithNotificationName:(id)arg1 expectation:(id)arg2;
- (void)dealloc;

@end
