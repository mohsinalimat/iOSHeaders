//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSString, UIImage, WBSSiteMetadataImageCache;

@protocol WBSSiteMetadataImageCacheDelegate <NSObject>

@optional
- (void)siteMetadataImageCacheDidEmptyCache:(WBSSiteMetadataImageCache *)arg1;
- (void)siteMetadataImageCache:(WBSSiteMetadataImageCache *)arg1 didRemoveImageFromCacheForKeyString:(NSString *)arg2;
- (void)siteMetadataImageCache:(WBSSiteMetadataImageCache *)arg1 didFinishLoadingImage:(UIImage *)arg2 forKeyString:(NSString *)arg3;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(WBSSiteMetadataImageCache *)arg1;
@end

