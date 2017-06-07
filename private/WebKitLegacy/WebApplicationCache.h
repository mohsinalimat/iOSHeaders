//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebApplicationCache : NSObject
{
}

+ (id)originsWithCache;
+ (void)deleteCacheForOrigin:(id)arg1;
+ (void)deleteAllApplicationCaches;
+ (long long)diskUsageForOrigin:(id)arg1;
+ (void)setDefaultOriginQuota:(long long)arg1;
+ (long long)defaultOriginQuota;
+ (void)setMaximumSize:(long long)arg1;
+ (long long)maximumSize;
+ (void)initializeWithBundleIdentifier:(id)arg1;

@end

