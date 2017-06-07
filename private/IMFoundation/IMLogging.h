//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMLogging : NSObject
{
}

+ (void)enableConsoleLoggingForLevel:(int)arg1;
+ (void)logString:(id)arg1 toFolder:(id)arg2 toFileNamed:(id)arg3;
+ (id)timeFormatter;
+ (id)dateFormatter;
+ (id)logFileDirectory;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(_Bool)arg4 simpleLogString:(id)arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(_Bool)arg4 simpleLogString:(id)arg5 time:(unsigned long long)arg6;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(_Bool)arg4 format:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(_Bool)arg4 simpleLogString:(id)arg5 format:(id)arg6 arguments:(struct __va_list_tag [1])arg7 time:(unsigned long long)arg8;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(_Bool)arg4 format:(id)arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4;
+ (id)stringForDate;
+ (_Bool)loggingEnabledForLevel:(int)arg1;

@end

