//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBSlideState : NSObject
{
    NSMutableDictionary *mBuildOrderMap;
    unsigned int mCurrentGroupId;
}

- (unsigned int)generateGroupId;
- (id)buildOrderMap;
- (void)addBuild:(id)arg1 order:(unsigned int)arg2;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

