//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationDispatcher, NSDate, NSSet;

@protocol NCNotificationDispatcherSourceDelegate <NSObject>
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2 fromDestinations:(NSSet *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
@end

