//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRKClassroomConfiguration : NSObject
{
}

+ (id)placeholderFileURL;
+ (_Bool)placeholderFileExists;
+ (_Bool)removePlaceholderFileWithError:(id *)arg1;
+ (_Bool)createPlaceholderFileWithError:(id *)arg1;
+ (_Bool)isStudentdInstalled;
+ (id)studentDaemonConnection;
+ (id)setOfActiveRestrictionUUIDs:(id)arg1;
+ (void)fetchConfiguration:(CDUnknownBlockType)arg1;
+ (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchAdHocConfiguration:(CDUnknownBlockType)arg1;
+ (void)setAdHocConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (unsigned long long)configurationType;

@end

