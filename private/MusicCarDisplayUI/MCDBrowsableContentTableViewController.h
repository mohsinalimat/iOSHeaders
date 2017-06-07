//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MusicCarDisplayUI/MCDErrorViewDelegate-Protocol.h>
#import <MusicCarDisplayUI/MCDPCContainerDelegate-Protocol.h>
#import <MusicCarDisplayUI/UIGestureRecognizerDelegate-Protocol.h>
#import <MusicCarDisplayUI/UITableViewDataSource-Protocol.h>
#import <MusicCarDisplayUI/UITableViewDelegate-Protocol.h>

@class AVExternalDevice, MCDNowPlayingButton, MCDPCContainer, MPWeakTimer, NSIndexPath, NSObject, NSString, UIActivityIndicatorView, UITableView, UIView, _MCDBrowsableContentTableViewPreloader, _UIFilteredDataSource;
@protocol OS_dispatch_queue;

@interface MCDBrowsableContentTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, MCDPCContainerDelegate, MCDErrorViewDelegate>
{
    UITableView *_tableView;
    MCDNowPlayingButton *_nowPlayingButton;
    MCDPCContainer *_container;
    long long _count;
    NSIndexPath *_selectedNextIndexPath;
    UIActivityIndicatorView *_activityIndicator;
    _UIFilteredDataSource *_dataSource;
    NSIndexPath *_reselectIndexPath;
    MPWeakTimer *_loadingTimer;
    MPWeakTimer *_delayTimer;
    UIView *_MCD_tableView;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _MCDBrowsableContentTableViewPreloader *_selectionPreloader;
    AVExternalDevice *_externalDevice;
    _Bool _limited;
    _Bool _hasCarScreen;
    _Bool _hasNoBrowsableContent;
    _Bool _didPushToNowPlayingAtLaunch;
    _Bool _hasTabbedBrowsing;
    _Bool _visible;
    NSIndexPath *_selectedIndexPath;
    UIView *_placeholderView;
}

@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) MCDPCContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)_limitedUIChanged:(id)arg1;
- (void)_clearTableViewSelectionAnimated:(_Bool)arg1;
- (void)_nowPlayingDidChange:(id)arg1;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_updateNowPlayingButtonVisibility;
- (void)reloadTable;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)_clearLoadingActivity;
- (void)_displayLoadingActivity;
- (void)showActivity:(_Bool)arg1 inCell:(id)arg2;
- (void)containerDidChangeCount:(id)arg1;
- (void)container:(id)arg1 didInvalidateIndicies:(id)arg2;
- (void)containerDidInvalidateRootItem:(id)arg1;
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)contentScrollView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)errorViewDidTapButton:(id)arg1;
- (void)_replacePlaceholderViewWithView:(id)arg1;
- (void)_showTimeoutScreen;
- (void)_showLoadingScreen;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 tabbedBrowsing:(_Bool)arg2;
- (id)initWithContainer:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

