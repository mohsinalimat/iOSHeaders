//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CAMVideoThumbnailOutputConfiguration : NSObject
{
    NSArray *_filters;
    struct CGSize _thumbnailSize;
}

@property(readonly, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
- (void).cxx_destruct;
- (id)initWithMode:(long long)arg1;
- (id)initWithThumbnailSize:(struct CGSize)arg1 filters:(id)arg2;

@end

