//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface WFImgArrayCache : NSObject
{
    NSMutableString *imageAlternativeDescriptions;
    long long numberOfUnknownSizedImages;
    long long numberOfKnownImagePixels;
}

+ (id)imgArrayCacheWithArray:(id)arg1;
- (void)dealloc;
- (long long)numberOfKnownImagePixels;
- (long long)numberOfUnknownSizedImages;
- (id)imageAlternativeDescriptions;
- (id)initWithArray:(id)arg1;

@end

