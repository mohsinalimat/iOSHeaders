//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCManifest : NSObject
{
    NSString *_systemFilePath;
    NSString *_userFilePath;
    NSMutableDictionary *_systemManifest;
    NSMutableDictionary *_userManifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)installedUserProfileDataWithIdentifier:(id)arg1;
+ (id)installedSystemProfileDataWithIdentifier:(id)arg1;
+ (id)installedProfileDataWithIdentifier:(id)arg1;
+ (id)installedUserProfileWithIdentifier:(id)arg1;
+ (id)installedSystemProfileWithIdentifier:(id)arg1;
+ (id)installedProfileWithIdentifier:(id)arg1;
+ (id)sharedManifest;
+ (void)_setSystemManifestPath:(id)arg1 userManifestPath:(id)arg2;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)removeIdentifierFromUserManifest:(id)arg1;
- (void)removeIdentifierFromSystemManifest:(id)arg1;
- (void)addIdentifierToManifest:(id)arg1 flag:(int)arg2;
- (id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)arg1;
- (id)allInstalledSystemProfileIdentifiers;
- (id)allInstalledUserProfileIdentifiers;
- (id)allInstalledProfileIdentifiers;
- (id)identifiersOfProfilesWithFilterFlags:(int)arg1;
- (void)_setSystemManifest:(id)arg1 userManifest:(id)arg2;
- (id)userManifest;
- (id)systemManifest;
- (id)_userManifest;
- (id)_systemManifest;
- (void)dealloc;
- (id)init;
- (id)installedProfileDataWithIdentifier:(id)arg1;
- (id)installedUserProfileWithIdentifier:(id)arg1;
- (id)installedSystemProfileWithIdentifier:(id)arg1;
- (id)installedProfileWithIdentifier:(id)arg1;

@end

