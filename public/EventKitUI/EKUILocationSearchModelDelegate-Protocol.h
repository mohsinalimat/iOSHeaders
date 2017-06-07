//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EKCalendarItem, EKStructuredLocation, EKUILocationSearchModel, NSError;

@protocol EKUILocationSearchModelDelegate
- (void)eventsSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)frequentsSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)conferenceRoomSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)recentsSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)contactsSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)mapSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)currentLocationUpdated:(EKUILocationSearchModel *)arg1;
- (void)locationSearchModel:(EKUILocationSearchModel *)arg1 selectedLocation:(EKStructuredLocation *)arg2 withError:(NSError *)arg3;
- (EKCalendarItem *)calendarItemForSearchModel:(EKUILocationSearchModel *)arg1;
@end
