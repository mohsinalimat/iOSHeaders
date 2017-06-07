//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationRequest, NSArray, NSIndexPath, NSIndexSet;
@protocol NCNotificationSectionList;

@protocol NCNotificationSectionListDelegate <NSObject>
- (void)notificationSectionListNeedsReload:(id <NCNotificationSectionList>)arg1;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didRemoveSectionsAtIndices:(NSIndexSet *)arg2;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didRemoveSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didInsertSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 requestsReloadAtIndices:(NSArray *)arg2;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didRemoveNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didReplaceNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didInsertNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

