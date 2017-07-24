//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSURL, PHAnimatedImage;

@interface _PHAnimatedImageLoadOperation : NSOperation
{
    long long _cacheStrategy;
    _Bool _useSharedImageDecoding;
    NSURL *_animatedImageURL;
    PHAnimatedImage *_animatedImage;
}

+ (id)_requestIsolationQueue;
+ (id)_inq_animatedImageLoadingOperations;
+ (id)_animatedImageSharedLoadingQueue;
+ (id)_removeOperation:(long long)arg1;
+ (void)_registerOperation:(id)arg1 forRequestID:(long long)arg2;
+ (long long)nextRequestID;
@property(retain) PHAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
- (void).cxx_destruct;
- (void)main;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(_Bool)arg3;

@end

