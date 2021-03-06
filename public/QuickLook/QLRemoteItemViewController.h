//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/QLPrintingProtocol-Protocol.h>

@class NSDictionary, NSExtension, NSLayoutConstraint, QLRemotePreviewHostContext, QLRemotePreviewHostViewController;
@protocol QLPrintingProtocol;

__attribute__((visibility("hidden")))
@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol>
{
    NSExtension *_extension;
    id _request;
    QLRemotePreviewHostContext *_hostContext;
    QLRemotePreviewHostViewController *_remoteViewController;
    NSDictionary *_hostConfiguration;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    id <QLPrintingProtocol> _printer;
    _Bool _visible;
    _Bool _fullScreen;
}

+ (Class)transformerClass;
- (void).cxx_destruct;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)printer;
- (void)dealloc;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (_Bool)canEnterFullScreen;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (id)init;

@end

