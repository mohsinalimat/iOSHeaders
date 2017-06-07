//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKExtensionHostContext.h>

#import <GameCenterUI/GKTurnBasedMatchmakerHostProtocol-Protocol.h>
#import <GameCenterUI/GKTurnBasedMatchmakerServiceProtocol-Protocol.h>

@class GKGame, NSString;

@interface GKTurnBasedMatchmakerExtensionHostContext : GKExtensionHostContext <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)playerQuitMatch:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)refreshMatches;
- (void)setShowQuit:(_Bool)arg1;
- (void)setShowPlay:(_Bool)arg1;
- (void)setShowExistingMatches:(_Bool)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (id)extensionObjectProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

