//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ISMigrator : NSObject
{
    unsigned long long _platform;
    NSString *_previousVersion;
    NSString *_currentVersion;
    NSDictionary *_preferencesBeforeMigration;
    NSDictionary *_preferencesAfterMigration;
}

+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2 platform:(unsigned long long)arg3;
+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2;
+ (unsigned long long)currentPlatform;
@property(copy, nonatomic) NSDictionary *preferencesAfterMigration; // @synthesize preferencesAfterMigration=_preferencesAfterMigration;
@property(copy, nonatomic) NSDictionary *preferencesBeforeMigration; // @synthesize preferencesBeforeMigration=_preferencesBeforeMigration;
@property(copy, nonatomic) NSString *currentVersion; // @synthesize currentVersion=_currentVersion;
@property(copy, nonatomic) NSString *previousVersion; // @synthesize previousVersion=_previousVersion;
@property(nonatomic) unsigned long long platform; // @synthesize platform=_platform;
- (id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg1;
- (id)importPreferredLanguagesForPreferences:(id)arg1;
- (id)appendRegionalVariantsToLanguageIdentifiers:(id)arg1 regionCode:(id)arg2;
- (id)performMigrationForPreferences:(id)arg1;
- (_Bool)performMigration;
- (void)dealloc;

@end

