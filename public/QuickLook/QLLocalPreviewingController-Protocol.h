//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class QLPreviewContext;
@protocol QLPrintingProtocol;

@protocol QLLocalPreviewingController <NSObject>
+ (Class)transformerClass;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(QLPreviewContext *)arg2 completionHandler:(void (^)(NSError *))arg3;

@optional
- (void)prepareForActionSheetPresentation;
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
- (_Bool)canEnterFullScreen;
- (id <QLPrintingProtocol>)printer;
@end

