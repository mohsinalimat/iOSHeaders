//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject
{
    int mLoadState;
    TSPData *mImageData;
    // Error parsing type: Ai, name: mRetainCount
    // Error parsing type: Ai, name: mOwnerCount
    TSUFlushingManager *mFlushingManager;
    int mInterest;
    struct os_unfair_lock_s mInterestLock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)ownerAccess;
- (void)removeOwner;
- (void)addOwner;
- (_Bool)hasFlushableContent;
- (void)setFlushingManager:(id)arg1;
- (void)flush;
- (void)flushIfInterestLessThan:(int)arg1;
- (void)removeInterest;
- (void)addInterest;
- (int)interest;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (_Bool)isError;
- (_Bool)isValid;
- (struct CGSize)dpiAdjustedNaturalSize;
- (struct CGSize)naturalSize;
- (id)imageData;
- (void)dealloc;
- (void)i_commonInit;
- (id)initWithImageData:(id)arg1;

@end

