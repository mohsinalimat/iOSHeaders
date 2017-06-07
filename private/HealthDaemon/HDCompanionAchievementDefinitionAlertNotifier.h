//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAchievementDefinitionAlertNotifier-Protocol.h>
#import <HealthDaemon/HDFitnessAppBadgeCountProvider-Protocol.h>

@class HDFitnessAppBadgeManager, NSString;

@interface HDCompanionAchievementDefinitionAlertNotifier : NSObject <HDAchievementDefinitionAlertNotifier, HDFitnessAppBadgeCountProvider>
{
    HDFitnessAppBadgeManager *_badgeManager;
    unsigned long long _achievementDefinitionCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long badgeCount;
- (void)notifyAchievementDefinitions:(id)arg1;
- (id)initWithFitnessAppBadgeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

