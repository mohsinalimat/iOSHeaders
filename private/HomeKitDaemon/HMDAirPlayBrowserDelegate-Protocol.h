//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAirPlayAccessoryAdvertisement, HMDAirPlayBrowser, HMDAirPlayEndpoint;

@protocol HMDAirPlayBrowserDelegate <NSObject>
- (void)browser:(HMDAirPlayBrowser *)arg1 didUpdateEndpoint:(HMDAirPlayEndpoint *)arg2;
- (void)browser:(HMDAirPlayBrowser *)arg1 didRemoveAdvertisement:(HMDAirPlayAccessoryAdvertisement *)arg2;
- (void)browser:(HMDAirPlayBrowser *)arg1 didAddAdvertisement:(HMDAirPlayAccessoryAdvertisement *)arg2;
@end

