//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSCondition;

__attribute__((visibility("hidden")))
@interface OITSUFastReadInvalidatingCache : NSObject
{
    CDUnknownBlockType mGenerator;
    id mValue;
    long long mReaderCount;
    NSArray *mToDispose;
    _Bool mReentrant;
    NSCondition *mCondition;
    _Bool mIsGenerating;
}

- (void)invalidate;
- (id)value;
- (void)p_setValue:(id)arg1;
- (void)dealloc;
- (id)initForReentrant:(_Bool)arg1 withGenerator:(CDUnknownBlockType)arg2;

@end

