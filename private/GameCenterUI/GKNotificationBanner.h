//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GKNotificationBanner : NSObject
{
}

+ (id)bannerViewWithTitle:(id)arg1 message:(id)arg2 actionMessage:(id)arg3;
+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 touchHandler:(CDUnknownBlockType)arg4;
+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 touchHandler:(CDUnknownBlockType)arg4;
+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 duration:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5;
+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4;

@end

