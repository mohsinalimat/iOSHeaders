//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCRecordSource.h>

@interface FCArticleListRecordSource : FCRecordSource
{
}

+ (unsigned long long)highThresholdDataSizeLimit;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (unsigned long long)storeVersion;
+ (id)storeFilename;
+ (id)recordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)desiredKeys;

@end

