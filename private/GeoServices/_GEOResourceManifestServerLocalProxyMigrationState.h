//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestServerLocalProxyMigrationState : NSObject
{
    NSString *_loadingTileGroupUniqueIdentifier;
    NSArray *_pendingTileGroupMigrationTasks;
}

@property(copy, nonatomic) NSArray *pendingTileGroupMigrationTasks; // @synthesize pendingTileGroupMigrationTasks=_pendingTileGroupMigrationTasks;
@property(readonly, nonatomic) NSString *loadingTileGroupUniqueIdentifier; // @synthesize loadingTileGroupUniqueIdentifier=_loadingTileGroupUniqueIdentifier;
- (void).cxx_destruct;
- (id)initWithTileGroupUniqueIdentifier:(id)arg1;
- (id)init;

@end

