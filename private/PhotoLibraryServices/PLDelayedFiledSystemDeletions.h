//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject
{
    NSMutableArray *_deletionInfos;
}

+ (id)deletionsFromChangeHubEvent:(id)arg1;
+ (void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2;
+ (void)waitForAllDelayedDeletionsToFinish;
+ (id)filesystemDeletionQueue;
- (id)initWithFilesystemDeletionInfos:(id)arg1;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2;
- (void)addFilesystemDeletionInfo:(id)arg1;
- (void)dealloc;
- (id)debugDescription;

@end

