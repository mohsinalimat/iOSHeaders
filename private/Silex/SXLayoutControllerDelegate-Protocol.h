//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXLayoutBlueprint, SXLayoutController, SXLayoutDataProvider;

@protocol SXLayoutControllerDelegate <NSObject>

@optional
- (void)layoutController:(SXLayoutController *)arg1 didLayoutBlueprint:(SXLayoutBlueprint *)arg2 layoutDataProvider:(SXLayoutDataProvider *)arg3;
- (void)layoutController:(SXLayoutController *)arg1 willLayoutForViewportSize:(struct CGSize)arg2 layoutDataProvider:(SXLayoutDataProvider *)arg3;
@end

