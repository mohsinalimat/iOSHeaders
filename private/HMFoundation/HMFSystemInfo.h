//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface HMFSystemInfo : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    struct MGNotificationTokenStruct *_notificationToken;
}

+ (id)systemInfo;
@property(readonly) struct MGNotificationTokenStruct *notificationToken; // @synthesize notificationToken=_notificationToken;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)notifyNameUpdated:(id)arg1;
- (void)updateName;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)startMonitoringSystemChanges;
- (void)dealloc;
- (id)init;

@end

