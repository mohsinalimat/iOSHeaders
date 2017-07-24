//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCUserInfo, NSString;

@protocol FCUserInfoObserving <NSObject>

@optional
- (void)userInfo:(FCUserInfo *)arg1 didChangeAccessTokenForTagID:(NSString *)arg2;
- (void)userInfo:(FCUserInfo *)arg1 didAddAccessTokenForTagID:(NSString *)arg2;
- (void)userInfoDidChangeDateLastViewedSaved:(FCUserInfo *)arg1 fromCloud:(_Bool)arg2;
- (void)userInfoDidChangeNotificationsUserID:(FCUserInfo *)arg1;
- (void)userInfoDidChangeOnboardingStatus:(FCUserInfo *)arg1;
- (void)userInfoDidChangeFeldsparID:(FCUserInfo *)arg1 fromCloud:(_Bool)arg2;
@end

