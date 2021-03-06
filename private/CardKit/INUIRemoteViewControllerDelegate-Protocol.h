//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CardKit/NSObject-Protocol.h>

@class INIntent, INUIRemoteViewController, NSArray, NSDictionary;

@protocol INUIRemoteViewControllerDelegate <NSObject>

@optional
- (struct CGSize)maximumSizeForRemoteViewController:(INUIRemoteViewController *)arg1;
- (struct CGSize)minimumSizeForRemoteViewController:(INUIRemoteViewController *)arg1;
- (NSArray *)interfaceSectionsForRemoteViewController:(INUIRemoteViewController *)arg1;
- (NSDictionary *)maximumSizesBySystemVersionForRemoteViewController:(INUIRemoteViewController *)arg1;
- (NSDictionary *)minimumSizesBySystemVersionForRemoteViewController:(INUIRemoteViewController *)arg1;
- (void)remoteViewController:(INUIRemoteViewController *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)remoteViewController:(INUIRemoteViewController *)arg1 desiresConstrainedSize:(struct CGSize)arg2;
- (void)remoteViewControllerServiceDidTerminate:(INUIRemoteViewController *)arg1;
@end

