//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsKit/NSObject-Protocol.h>

@class NCNotificationSectionSettings, NSSet, NSString;
@protocol NCNotificationDestination;

@protocol NCNotificationSectionSettingsProvider <NSObject>
- (NCNotificationSectionSettings *)notificationSectionSettingsForDestination:(id <NCNotificationDestination>)arg1 forSectionIdentifier:(NSString *)arg2;
- (NSSet *)notificationSectionSettingsForDestination:(id <NCNotificationDestination>)arg1;
@end
