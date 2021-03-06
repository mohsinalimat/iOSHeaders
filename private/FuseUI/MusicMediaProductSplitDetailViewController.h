//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicEntityEditableVerticalLockupViewDelegate-Protocol.h>
#import <FuseUI/MusicMediaDetailSplitViewController-Protocol.h>
#import <FuseUI/MusicVerticalScrollingContainerViewControllerDelegate-Protocol.h>

@class MPAVController, MusicClientContext, MusicEntityEditableVerticalLockupView, MusicEntityValueContext, MusicMediaDetailTintInformation, MusicVerticalScrollingContainerViewController, NSString, UIImage;
@protocol MusicEntityProviding, MusicMediaProductSplitDetailViewControllerDelegate;

@interface MusicMediaProductSplitDetailViewController : UIViewController <MusicEntityEditableVerticalLockupViewDelegate, MusicVerticalScrollingContainerViewControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController>
{
    id <MusicEntityProviding> _containerEntityProvider;
    MusicEntityValueContext *_containerEntityValueContext;
    MusicClientContext *_clientContext;
    MPAVController *_player;
    MusicEntityEditableVerticalLockupView *_verticalLockupView;
    MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController;
    UIImage *_editedContentArtworkImage;
    NSString *_lockupArtworkProperty;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    id <MusicMediaProductSplitDetailViewControllerDelegate> _mediaSplitViewControllerDelegate;
    UIViewController *_relatedContentViewController;
}

@property(retain, nonatomic) UIViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
@property(nonatomic) __weak id <MusicMediaProductSplitDetailViewControllerDelegate> mediaSplitViewControllerDelegate; // @synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate;
@property(copy, nonatomic) MusicMediaDetailTintInformation *mediaDetailTintInformation; // @synthesize mediaDetailTintInformation=_mediaDetailTintInformation;
@property(copy, nonatomic) NSString *lockupArtworkProperty; // @synthesize lockupArtworkProperty=_lockupArtworkProperty;
@property(retain, nonatomic) UIImage *editedContentArtworkImage; // @synthesize editedContentArtworkImage=_editedContentArtworkImage;
@property(retain, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_updateVerticalLockupViewSize;
- (void)_updatePlaybackStatusForLockupView;
- (void)_reloadVerticalScrollingContainerItems;
- (void)_reloadContainerEntityValueContextProperties;
- (struct UIEdgeInsets)_calculateArtworkEdgeInsets;
- (void)_applyTintInformation;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_containerEntityProviderDidInvalidateNotification:(id)arg1;
- (void)commitEditing;
- (void)cancelEditing;
- (void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(id)arg1;
- (void)editableVerticalLockupView:(id)arg1 didSelectCameraButton:(id)arg2;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (id)contentScrollView;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

