//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LogDumpUtility : NSObject
{
}

+ (void)removeOldFilesInDefaultLogDumpPath;
+ (void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2;
+ (id)filesSortedByTimestamp:(id)arg1;
+ (id)logFilename:(int)arg1 dumpID:(unsigned int)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5;
+ (_Bool)createDirectory:(id)arg1;
+ (id)getDefaultLogDumpPath;
+ (id)getCachesDirectoryPath;

@end

