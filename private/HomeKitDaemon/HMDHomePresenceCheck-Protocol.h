//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HMDUser, NSArray;

@protocol HMDHomePresenceCheck
- (_Bool)isAnyUserAtHome;
- (_Bool)isNoUserAtHome;
- (_Bool)areUsersNotAtHome:(NSArray *)arg1;
- (_Bool)areUsersAtHome:(NSArray *)arg1;
- (_Bool)isUserNotAtHome:(HMDUser *)arg1;
- (_Bool)isUserAtHome:(HMDUser *)arg1;
@end

