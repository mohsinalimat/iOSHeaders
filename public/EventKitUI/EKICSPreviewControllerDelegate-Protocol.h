//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKICSPreviewController, NSArray;

@protocol EKICSPreviewControllerDelegate <NSObject>

@optional
- (void)icsPreviewControllerWantsDismissal:(EKICSPreviewController *)arg1;
- (void)icsPreviewController:(EKICSPreviewController *)arg1 importDidImportEvents:(NSArray *)arg2;
- (void)icsPreviewControllerImportDidFail:(EKICSPreviewController *)arg1;
- (void)icsPreviewControllerImportDidStart:(EKICSPreviewController *)arg1;
@end

