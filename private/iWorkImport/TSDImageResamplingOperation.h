//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TSDImageProvider, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSDImageResamplingOperation : NSObject
{
    TSDImageProvider *mImageProvider;
    struct CGSize mDesiredSize;
    NSString *mDisplayName;
    TSPObjectContext *mObjectContext;
}

@property(retain, nonatomic) TSPObjectContext *objectContext; // @synthesize objectContext=mObjectContext;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=mDisplayName;
@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=mDesiredSize;
@property(retain, nonatomic) TSDImageProvider *imageProvider; // @synthesize imageProvider=mImageProvider;
- (id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithImageProvider:(id)arg1 desiredSize:(struct CGSize)arg2;

@end

