//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBaseGameCell.h>

@class UILabel;

@interface GKPlayerGameCell : GKBaseGameCell
{
    UILabel *_statsLabel;
    UILabel *_dateLabel;
}

@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *statsLabel; // @synthesize statsLabel=_statsLabel;
- (void)prepareForReuse;
- (id)statText;
- (id)leaderboardStringWithGameRecord:(id)arg1;
- (id)achievementsStringWithGameRecord:(id)arg1;
- (void)dealloc;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

