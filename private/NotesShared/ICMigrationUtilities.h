//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICMigrationUtilities : NSObject
{
}

+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1;
+ (void)saveDidChooseToMigrate:(_Bool)arg1 didFinishMigration:(_Bool)arg2 didMigrateOnMac:(_Bool)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)fetchAndSetMigrationStateWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)fetchMigrationStateAndUserRecordWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)fetchMigrationStateWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

