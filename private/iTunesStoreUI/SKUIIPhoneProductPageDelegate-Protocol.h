//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class NSURL, SKUIIPhoneProductPageViewController, SKUIItem;

@protocol SKUIIPhoneProductPageDelegate <NSObject>

@optional
- (_Bool)iPhoneProductPage:(SKUIIPhoneProductPageViewController *)arg1 shouldOpenURL:(NSURL *)arg2;
- (_Bool)iPhoneProductPage:(SKUIIPhoneProductPageViewController *)arg1 shouldOpenItem:(SKUIItem *)arg2;
@end

