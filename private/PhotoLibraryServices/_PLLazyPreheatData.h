//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface _PLLazyPreheatData : NSData
{
    NSString *_path;
    NSData *_data;
}

+ (id)dataWithContentsOfFile:(id)arg1;
- (void)dealloc;
- (const void *)bytes;
- (unsigned long long)length;
- (void)_loadData;
- (id)initWithContentsOfFile:(id)arg1;

@end

