//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDocumentBrowserViewControllerDelegate-Protocol.h>

@class DOCConcreteLocation, NSArray, UIBarButtonItem, UIDocumentBrowserViewController;
@protocol DOCServicePopoverTrackerProtocol;

@protocol UIDocumentBrowserViewControllerPrivateDelegate <UIDocumentBrowserViewControllerDelegate>

@optional
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didPickImportedURLs:(NSArray *)arg2;
- (void)documentManagerWasCancelled:(UIDocumentBrowserViewController *)arg1;
- (void)didDismissDocumentManager:(UIDocumentBrowserViewController *)arg1;
- (void)willDismissDocumentManager:(UIDocumentBrowserViewController *)arg1;
- (_Bool)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldHandleLocation:(DOCConcreteLocation *)arg2;
- (_Bool)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldShowActivityViewControllerForDocumentURLs:(NSArray *)arg2 barButtonItem:(UIBarButtonItem *)arg3 popoverTracker:(id <DOCServicePopoverTrackerProtocol>)arg4;
@end

