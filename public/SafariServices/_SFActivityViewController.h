//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class LPMetadataProvider, NSString, NSURL, _SFSafariSharingExtensionController;
@protocol _SFActivityViewControllerDelegate;

@interface _SFActivityViewController : UIActivityViewController
{
    LPMetadataProvider *_pendingMessageMetadataProvider;
    _Bool _viewCanEarlyDismiss;
    _SFSafariSharingExtensionController *_sharingExtensionController;
    id <_SFActivityViewControllerDelegate> _delegate;
    NSURL *_sharingURL;
    NSString *_currentExtensionIdentifier;
}

+ (id)activeWebPageExtensionItemForURL:(id)arg1 withPreviewImageHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *currentExtensionIdentifier; // @synthesize currentExtensionIdentifier=_currentExtensionIdentifier;
@property(readonly, nonatomic) NSURL *sharingURL; // @synthesize sharingURL=_sharingURL;
@property(nonatomic) __weak id <_SFActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak _SFSafariSharingExtensionController *sharingExtensionController; // @synthesize sharingExtensionController=_sharingExtensionController;
@property(readonly, nonatomic) _Bool viewCanEarlyDismiss; // @synthesize viewCanEarlyDismiss=_viewCanEarlyDismiss;
- (void).cxx_destruct;
- (void)prepareMessageActivity:(id)arg1 withWebView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processJavaScriptFinalizeReturnedItems:(id)arg1 forExtension:(id)arg2;
- (id)_extensionItemForExtensionActivity:(id)arg1;
- (id)_javaScriptProcessingFileURLInExtension:(id)arg1;
- (void)_prepareJavaScriptExtensionItemForActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executeActivity;
- (void)activityDidComplete:(id)arg1 withReturnedItems:(id)arg2 success:(_Bool)arg3;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3;

@end

