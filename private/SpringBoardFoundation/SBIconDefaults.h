//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary;

@interface SBIconDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (void)clearLegacyDefaults;
- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(nonatomic) _Bool didShowIconReorderAlert; // @dynamic didShowIconReorderAlert;
@property(readonly, nonatomic) NSDictionary *legacyIconState; // @dynamic legacyIconState;
@property(readonly, nonatomic) NSDictionary *legacyIconState2; // @dynamic legacyIconState2;
@property(readonly, nonatomic) long long maxIconListCount; // @dynamic maxIconListCount;
@property(readonly, nonatomic) _Bool shouldDisableLiveIcons; // @dynamic shouldDisableLiveIcons;

@end

