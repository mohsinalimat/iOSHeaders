//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface NCNotificationEventTracker : NSObject
{
    PETScalarEventTracker *_shortLookDefaultActionTracker;
    PETScalarEventTracker *_shortLookDismissTracker;
    PETScalarEventTracker *_shortLookClearTracker;
    PETScalarEventTracker *_notificationCenterClearDayTracker;
    PETScalarEventTracker *_notificationCenterClearAllTracker;
    PETScalarEventTracker *_longLookPresentationTracker;
    PETScalarEventTracker *_longLookDefaultActionTracker;
    PETScalarEventTracker *_longLookCustomActionTracker;
    PETScalarEventTracker *_longLookDismissTracker;
    PETScalarEventTracker *_longLookReparkTracker;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)longLookReparkInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookDismissInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookCustomAction:(id)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookDidPresentWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)notificationCenterClearAll;
- (void)notificationCenterDayCleared;
- (void)shortLookClearedForNotificationRequest:(id)arg1 withState:(id)arg2;
- (void)shortLookDismissInvokedForNotificationRequest:(id)arg1 withState:(id)arg2;
- (void)shortLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (id)_longLookReparkTracker;
- (id)_longLookDismissTracker;
- (id)_longLookCustomActionTracker;
- (id)_longLookDefaultActionTracker;
- (id)_longLookPresentationTracker;
- (id)_notificationCenterClearAllTracker;
- (id)_notificationCenterClearDayTracker;
- (id)_shortLookClearTracker;
- (id)_shortLookDismissTracker;
- (id)_shortLookDefaultActionTracker;
- (id)_firstPartyAppProperty;
- (id)_customActionsCountProperty;
- (id)_customExtensionProperty;
- (id)_primaryAttachmentTypeProperty;
- (id)_attachmentCountProperty;
- (id)_textInputProperty;
- (id)_triggerPropertyForEvent:(id)arg1;
- (id)_destinationProperty;
- (id)notificationDestinationForState:(id)arg1;
- (unsigned long long)primaryAttachmentTypeForRequest:(id)arg1;

@end

