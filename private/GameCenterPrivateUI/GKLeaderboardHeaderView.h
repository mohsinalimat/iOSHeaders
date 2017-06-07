//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GKButton, NSString, UIView;

@interface GKLeaderboardHeaderView : UICollectionReusableView
{
    long long _timeScope;
    GKButton *_leaderboardsButton;
    GKButton *_timeScopeButton;
}

@property GKButton *timeScopeButton; // @synthesize timeScopeButton=_timeScopeButton;
@property GKButton *leaderboardsButton; // @synthesize leaderboardsButton=_leaderboardsButton;
- (void)timeButtonPressed:(id)arg1;
- (void)leaderboardButtonPressed:(id)arg1;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(readonly, nonatomic) UIView *timeButton;
@property(copy, nonatomic) NSString *currentLeaderboardTitle;
@property(nonatomic) _Bool leaderboardButtonEnabled;
@property(readonly, nonatomic) UIView *leaderboardButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

