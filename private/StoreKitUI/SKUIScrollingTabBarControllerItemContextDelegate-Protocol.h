//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIScrollingTabBarControllerItemContext;
@protocol SKUIObservableNavigationStack;

@protocol SKUIScrollingTabBarControllerItemContextDelegate <NSObject>

@optional
- (void)scrollingTabBarControllerItemContext:(SKUIScrollingTabBarControllerItemContext *)arg1 observedNavigationStackDidChange:(id <SKUIObservableNavigationStack>)arg2;
- (void)scrollingTabBarControllerItemContextRequestsContentSizeUpdate:(SKUIScrollingTabBarControllerItemContext *)arg1;
- (void)scrollingTabBarControllerItemContextRequestsContentOffsetUpdate:(SKUIScrollingTabBarControllerItemContext *)arg1;
@end

