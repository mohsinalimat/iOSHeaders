//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSNumber, QLItem;
@protocol QLPrintingProtocol;

@protocol QLPreviewingController <NSObject>
- (void)loadPreviewControllerWithPreviewItem:(QLItem *)arg1 completionHandler:(void (^)(NSError *))arg2;

@optional
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(NSNumber *)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillFinishAppearing;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canShowToolBar;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (_Bool)canRotate;
- (_Bool)canEnterFullScreen;
- (id <QLPrintingProtocol>)printer;
@end
