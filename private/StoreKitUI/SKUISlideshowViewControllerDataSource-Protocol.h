//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSURL, SKUIScreenshotDataConsumer, UIImage, UIViewController;

@protocol SKUISlideshowViewControllerDataSource <NSObject>
- (UIImage *)slideshowViewController:(UIViewController *)arg1 placeholderImageAtIndex:(long long)arg2;
- (NSURL *)slideshowViewController:(UIViewController *)arg1 imageURLAtIndex:(long long)arg2;
- (SKUIScreenshotDataConsumer *)slideshowViewController:(UIViewController *)arg1 dataConsumerAtIndex:(long long)arg2;
- (long long)numberOfItemsInSlideshowViewController:(UIViewController *)arg1;
@end

