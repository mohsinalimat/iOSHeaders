//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinBoard/BBBulletin.h>

@interface BBBulletin (SBUIUtilities)
- (id)_defaultActionWithFilter:(CDUnknownBlockType)arg1;
- (id)_responseForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id)sb_minimalSupplementaryActions;
- (_Bool)bulletinAlertShouldOverridePocketMode;
- (_Bool)bulletinAlertShouldOverrideQuietMode;
- (CDUnknownBlockType)actionBlockForAction:(id)arg1 withOrigin:(int)arg2;
- (id)_launchURLForAction:(id)arg1 context:(id)arg2;
- (CDUnknownBlockType)actionBlockForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id)sb_nonPluginDefaultAction;
- (CDUnknownBlockType)actionBlockForButton:(id)arg1;
- (void)killSound;
- (_Bool)playSound;
@end

