//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SLAggregateLogger : NSObject
{
}

+ (_Bool)_attachmentsContainURL:(id)arg1;
+ (_Bool)_attachmentsContainImage:(id)arg1;
+ (id)_logIdentifierForPID:(int)arg1;
+ (void)logVimeoAppInstallChoice:(_Bool)arg1;
+ (void)logFlickrAppInstallChoice:(_Bool)arg1;
+ (void)logTencentWeiboAppInstallChoice:(_Bool)arg1;
+ (void)logWeiboAppInstallChoice:(_Bool)arg1;
+ (void)logPostWithServiceNameKey:(id)arg1 text:(id)arg2 attachments:(id)arg3 locationAttached:(_Bool)arg4 fromProcessWithPID:(int)arg5;
+ (void)logTencentWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(_Bool)arg3 fromProcessWithPID:(int)arg4;
+ (void)logWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(_Bool)arg3 fromProcessWithPID:(int)arg4;
+ (void)logTwitterAppInstallChoice:(_Bool)arg1;
+ (void)logTweetWithText:(id)arg1 attachments:(id)arg2 locationAttached:(_Bool)arg3 fromProcessWithPID:(int)arg4;
+ (void)logFacebookAppInstallChoice:(_Bool)arg1;
+ (void)logFacebookPost:(id)arg1 fromProcessWithPID:(int)arg2;

@end
