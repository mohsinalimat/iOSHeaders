//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIPhysicalCirclesView, UIView;

@protocol SKUIPhysicalCirclesDataSource <NSObject>
- (UIView *)circlesView:(SKUIPhysicalCirclesView *)arg1 circleForIndex:(long long)arg2;
- (long long)numberOfCirclesInCircleView:(SKUIPhysicalCirclesView *)arg1;
@end

