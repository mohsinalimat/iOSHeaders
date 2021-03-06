//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKUIRemoteViewController.h>

#import <GameCenterUI/GKGameCenterDashboardServiceProtocol-Protocol.h>

@class GKGame, GKGameCenterViewController, NSObject, NSString;

@interface GKDashboardHostViewController : GKUIRemoteViewController <GKGameCenterDashboardServiceProtocol>
{
    GKGameCenterViewController *_delegateWeak;
    NSObject *_dashboardAssetController;
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)dashboardExtension;
@property(retain, nonatomic) NSObject *dashboardAssetController; // @synthesize dashboardAssetController=_dashboardAssetController;
- (void)extensionIsFinishing;
- (void)extensionIsCanceling;
- (void)playerQuitMatch:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)playPressedForChallenge:(id)arg1;
- (void)messageFromExtension:(id)arg1;
- (void)hostSupportsShowingQuitForTurnBasedMatch:(_Bool)arg1;
- (void)hostSupportsShowingPlayForTurnBasedMatch:(_Bool)arg1;
- (void)hostSupportsShowingPlayForChallenge:(_Bool)arg1;
- (void)hostDidChangeLeaderboardTimeScope:(id)arg1;
- (void)hostDidChangeLeaderboardIdentifier:(id)arg1;
- (void)hostDidChangeViewState:(id)arg1;
- (id)extensionObjectProxy;
- (void)viewWillAppear:(_Bool)arg1;
@property(nonatomic) GKGameCenterViewController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

