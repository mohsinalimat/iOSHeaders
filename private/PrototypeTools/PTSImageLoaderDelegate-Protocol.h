//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class NSString, PTSImageLoader, UIImage;

@protocol PTSImageLoaderDelegate <NSObject>
- (void)imageLoaderDidFinishLoadingImages:(PTSImageLoader *)arg1;
- (void)imageLoader:(PTSImageLoader *)arg1 didLoadImage:(UIImage *)arg2 forFilename:(NSString *)arg3;
@end

