//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemAggregatedViewController.h>

@class QLItem, QLPasswordItemViewController, QLWKWebItemViewController;

__attribute__((visibility("hidden")))
@interface QLProtectedItemViewController : QLItemAggregatedViewController
{
    QLItem *_previewItem;
    QLPasswordItemViewController *_passwordItemViewController;
    QLWKWebItemViewController *_webViewController;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
@property(retain) QLWKWebItemViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain) QLPasswordItemViewController *passwordItemViewController; // @synthesize passwordItemViewController=_passwordItemViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

