//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface QLFileThumbnailRequest : NSObject
{
    double _scale;
    NSURL *_fileURL;
    struct CGSize _maximumSize;
}

@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
- (void).cxx_destruct;
- (id)initWithMaximumSize:(struct CGSize)arg1 scale:(double)arg2 fileURL:(id)arg3;

@end
