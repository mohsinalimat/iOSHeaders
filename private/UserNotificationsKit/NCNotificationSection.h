//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/NCDebugInfoProvider-Protocol.h>

@class NSMutableDictionary, NSString;

@interface NCNotificationSection : NSObject <NCDebugInfoProvider>
{
    NSMutableDictionary *_coalescedNotifications;
}

@property(retain, nonatomic) NSMutableDictionary *coalescedNotifications; // @synthesize coalescedNotifications=_coalescedNotifications;
- (void).cxx_destruct;
- (id)debugInfoPlist;
@property(readonly, nonatomic) unsigned long long notificationsCount;
- (id)coalescedNotificationForThreadIdentifier:(id)arg1;
- (id)removeNotificationRequest:(id)arg1;
- (id)replaceNotificationRequest:(id)arg1;
- (id)addNotificationRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

