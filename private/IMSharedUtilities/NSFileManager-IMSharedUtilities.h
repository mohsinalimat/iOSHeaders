//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (IMSharedUtilities)
- (_Bool)__im_getItemsRemovedFromiCloudBackupsAtDirectoryPath:(id)arg1 outPaths:(id *)arg2 outRemovedPaths:(id *)arg3 error:(id *)arg4;
- (_Bool)__im_setiCloudBackupAttribute:(_Bool)arg1 onDirectoryAndChildrenAtPath:(id)arg2 error:(id *)arg3;
- (_Bool)__im_setiCloudBackupAttribute:(_Bool)arg1 onItemAtPath:(id)arg2 error:(id *)arg3;
- (_Bool)__im_getiCloudBackupAttributeForItemAtPath:(id)arg1 attributeValue:(_Bool *)arg2 error:(id *)arg3;
@end

