//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaControls/CCUIContentModuleContentViewController-Protocol.h>
#import <MediaControls/MPAVRoutingViewControllerThemeDelegate-Protocol.h>
#import <MediaControls/MPRequestResponseControllerDelegate-Protocol.h>
#import <MediaControls/MediaControlsCollectionItemViewController-Protocol.h>
#import <MediaControls/MediaControlsRatingActionSheet-Protocol.h>

@class MPAVRoutingViewController, MPCPlayerPath, MPCPlayerResponse, MPRequestResponseController, MediaControlsHeaderView, MediaControlsParentContainerView, MediaControlsVolumeSlider, NSString, UIView;
@protocol MediaControlsPanelViewControllerDelegate;

@interface MediaControlsPanelViewController : UIViewController <MPRequestResponseControllerDelegate, MediaControlsRatingActionSheet, MPAVRoutingViewControllerThemeDelegate, CCUIContentModuleContentViewController, MediaControlsCollectionItemViewController>
{
    _Bool _empty;
    _Bool _showRoutingLabel;
    _Bool _transitioning;
    _Bool _dismissing;
    _Bool _showingRoutingPicker;
    _Bool _onlyShowsRoutingPicker;
    MPCPlayerPath *_playerPath;
    UIView *_backgroundView;
    MPAVRoutingViewController *_routingViewController;
    id <MediaControlsPanelViewControllerDelegate> _delegate;
    MPCPlayerResponse *_response;
    long long _style;
    long long _mediaControlsPlayerState;
    MediaControlsHeaderView *_headerView;
    MediaControlsParentContainerView *_parentContainerView;
    MediaControlsVolumeSlider *_volumeSlider;
    MPRequestResponseController *_requestController;
    UIView *_topDividerView;
    UIView *_bottomDividerView;
    CDUnknownBlockType _launchNowPlayingAppBlock;
}

+ (id)panelViewControllerForCoverSheet;
@property(copy, nonatomic) CDUnknownBlockType launchNowPlayingAppBlock; // @synthesize launchNowPlayingAppBlock=_launchNowPlayingAppBlock;
@property(nonatomic) _Bool onlyShowsRoutingPicker; // @synthesize onlyShowsRoutingPicker=_onlyShowsRoutingPicker;
@property(nonatomic, getter=isShowingRoutingPicker) _Bool showingRoutingPicker; // @synthesize showingRoutingPicker=_showingRoutingPicker;
@property(nonatomic, getter=isDismissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(retain, nonatomic) UIView *bottomDividerView; // @synthesize bottomDividerView=_bottomDividerView;
@property(retain, nonatomic) UIView *topDividerView; // @synthesize topDividerView=_topDividerView;
@property(retain, nonatomic) MPRequestResponseController *requestController; // @synthesize requestController=_requestController;
@property(retain, nonatomic) MediaControlsVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) MediaControlsParentContainerView *parentContainerView; // @synthesize parentContainerView=_parentContainerView;
@property(retain, nonatomic) MediaControlsHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) long long mediaControlsPlayerState; // @synthesize mediaControlsPlayerState=_mediaControlsPlayerState;
@property(nonatomic) _Bool showRoutingLabel; // @synthesize showRoutingLabel=_showRoutingLabel;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property(nonatomic) __weak id <MediaControlsPanelViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPAVRoutingViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
- (void).cxx_destruct;
- (void)setRoutingView:(id)arg1;
- (void)routingViewController:(id)arg1 willDisplayCell:(id)arg2;
- (struct UIEdgeInsets)contentInsetsForRoutingViewController:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withCoordinator:(id)arg2;
- (void)presentRatingActionSheet:(id)arg1;
- (void)headerViewLaunchNowPlayingAppButtonPressed:(id)arg1;
- (void)headerViewButtonPressed:(id)arg1;
- (void)_updateControlCenterMetadata:(id)arg1;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (void)_updateStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
@property(readonly, nonatomic) _Bool providesOwnPlatter;
@property(readonly) Class superclass;

@end

