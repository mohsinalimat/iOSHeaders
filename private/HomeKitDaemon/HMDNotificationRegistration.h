//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableSet, NSString;
@protocol HMFLogging;

@interface HMDNotificationRegistration : NSObject <HMFLogging>
{
    NSMutableSet *_registeredNotifications;
    id <HMFLogging> _registerer;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak id <HMFLogging> registerer; // @synthesize registerer=_registerer;
@property(readonly, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
- (void).cxx_destruct;
- (void)addObserver:(SEL)arg1 name:(id)arg2 object:(id)arg3;
- (id)logIdentifier;
- (id)initWithRegisterer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

