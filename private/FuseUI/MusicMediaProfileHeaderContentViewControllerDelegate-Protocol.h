//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicMediaProfileHeaderContentViewController, UIButton, UIControl;

@protocol MusicMediaProfileHeaderContentViewControllerDelegate <NSObject>

@optional
- (void)mediaProfileHeaderContentViewControllerDidSelectProfileTitle:(MusicMediaProfileHeaderContentViewController *)arg1;
- (void)mediaProfileHeaderContentViewController:(MusicMediaProfileHeaderContentViewController *)arg1 didSelectEditButton:(UIControl *)arg2;
- (void)mediaProfileHeaderContentViewController:(MusicMediaProfileHeaderContentViewController *)arg1 didSelectContextualActionsButton:(UIButton *)arg2;
- (void)mediaProfileHeaderContentViewController:(MusicMediaProfileHeaderContentViewController *)arg1 didSelectShareButton:(UIButton *)arg2;
- (void)mediaProfileHeaderContentViewController:(MusicMediaProfileHeaderContentViewController *)arg1 didUpdateFollowingState:(_Bool)arg2 forStoreID:(long long)arg3;
@end

