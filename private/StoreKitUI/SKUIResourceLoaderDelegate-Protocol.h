//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIResourceLoader;

@protocol SKUIResourceLoaderDelegate <NSObject>

@optional
- (void)resourceLoader:(SKUIResourceLoader *)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidIdle:(SKUIResourceLoader *)arg1;
- (void)resourceLoaderDidBeginLoading:(SKUIResourceLoader *)arg1;
@end

