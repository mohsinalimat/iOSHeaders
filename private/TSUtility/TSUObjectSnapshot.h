//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSUObjectSnapshot : NSObject
{
    unsigned long long mEntryCount;
    void **mSnapshot;
    NSArray *mCompared;
}

- (void)dealloc;
- (void)p_clear;
- (void)compare;
- (void)calibrate:(id)arg1;
- (id)init;

@end

