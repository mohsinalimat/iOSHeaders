//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class ADBannerView, NSError;

@protocol ADBannerViewDelegate <NSObject>

@optional
- (void)bannerViewActionDidFinish:(ADBannerView *)arg1;
- (_Bool)bannerViewActionShouldBegin:(ADBannerView *)arg1 willLeaveApplication:(_Bool)arg2;
- (void)bannerView:(ADBannerView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)bannerViewDidLoadAd:(ADBannerView *)arg1;
- (void)bannerViewWillLoadAd:(ADBannerView *)arg1;
@end
