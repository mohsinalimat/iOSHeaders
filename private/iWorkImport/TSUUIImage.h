//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSUImage.h>

@class TSUUIImageAutoreleasePoolGuard, UIImage;

__attribute__((visibility("hidden")))
@interface TSUUIImage : TSUImage
{
    UIImage *mUIImage;
    TSUUIImageAutoreleasePoolGuard *mGuard;
}

+ (id)imageNamed:(id)arg1;
+ (void)i_performBlockWithUIImageLock:(CDUnknownBlockType)arg1;
- (long long)imageOrientation;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (struct CGImage *)CGImage;
- (double)scale;
- (struct CGSize)size;
- (id)UIImage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (id)p_initWithUIImage:(id)arg1 needsGuard:(_Bool)arg2;

@end

