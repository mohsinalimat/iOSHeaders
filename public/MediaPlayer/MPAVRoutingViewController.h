//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaPlayer/MPAVRoutingTableViewCellDelegate-Protocol.h>
#import <MediaPlayer/UITableViewDataSource-Protocol.h>
#import <MediaPlayer/UITableViewDelegate-Protocol.h>

@class MPAVRoute, MPAVRoutingController, MPAVRoutingEmptyStateView, MPAVRoutingTableHeaderView, MPWeakTimer, NSArray, NSNumber, NSString, UIColor, UITableView;
@protocol MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate;

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    MPAVRoutingTableHeaderView *_tableHeaderView;
    MPAVRoutingEmptyStateView *_emptyStateView;
    NSArray *_cachedRoutes;
    _Bool _cachedRoutesHasRoutePickedOnPairedDevice;
    MPAVRoute *_lastPendingPickedRoute;
    MPWeakTimer *_updateTimer;
    MPAVRoutingController *_routingController;
    long long _routeDiscoveryMode;
    UIColor *_tableCellsBackgroundColor;
    UIColor *_tableCellsContentColor;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;
    _Bool _cachedShowAirPlayDebugButton;
    _Bool _hasCachedAirPlayDebugButtonStatus;
    _Bool _needsDisplayedRoutesUpdate;
    _Bool _suspendedDiscoveryModeDueToApplicationState;
    _Bool _shouldAutomaticallyUpdateRoutesList;
    _Bool _shouldPickRouteOnSelection;
    unsigned long long _updatesSincePresentation;
    long long _discoveryModeBeforeEnteringBackground;
    unsigned long long _style;
    id <MPAVRoutingViewControllerDelegate> _delegate;
    long long _avItemType;
    unsigned long long _mirroringStyle;
    unsigned long long _iconStyle;
    NSNumber *_discoveryModeOverride;
    id <MPAVRoutingViewControllerThemeDelegate> _themeDelegate;
}

@property(nonatomic) __weak id <MPAVRoutingViewControllerThemeDelegate> themeDelegate; // @synthesize themeDelegate=_themeDelegate;
@property(copy, nonatomic) NSNumber *discoveryModeOverride; // @synthesize discoveryModeOverride=_discoveryModeOverride;
@property(nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
@property(nonatomic) unsigned long long mirroringStyle; // @synthesize mirroringStyle=_mirroringStyle;
@property(nonatomic, setter=setAVItemType:) long long avItemType; // @synthesize avItemType=_avItemType;
@property(nonatomic) __weak id <MPAVRoutingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (double)_tableViewFooterViewHeight;
- (double)_tableViewHeaderViewHeight;
- (id)_tableHeaderView;
- (unsigned long long)_tableViewNumberOfRows;
- (void)_showAirPlayDebug;
- (_Bool)_shouldShowAirPlayDebugButton;
- (void)_pickRoute:(id)arg1;
- (void)_updateDisplayedRoutes;
- (void)_reloadEmptyStateVisibility;
- (id)_displayableRoutesInRoutes:(id)arg1;
- (void)_setNeedsDisplayedRoutesUpdate;
- (void)_setNeedsRouteDiscoveryModeUpdate;
- (void)_setRouteDiscoveryMode:(long long)arg1;
- (void)_setupUpdateTimerIfNecessary;
- (id)_displayedRoutes;
- (void)_endRouteDiscovery;
- (void)_beginRouteDiscovery;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (double)_tableViewHeightAccordingToDataSource;
@property(nonatomic, setter=_setShouldPickRouteOnSelection:) _Bool _shouldPickRouteOnSelection;
@property(nonatomic, setter=_setShouldAutomaticallyUpdateRoutesList:) _Bool _shouldAutomaticallyUpdateRoutesList;
@property(retain, nonatomic, setter=_setTableCellsContentColor:) UIColor *_tableCellsContentColor;
@property(retain, nonatomic, setter=_setTableCellsBackgroundColor:) UIColor *_tableCellsBackgroundColor;
@property(readonly, nonatomic) double _expandedCellHeight;
@property(readonly, nonatomic) double _normalCellHeight;
@property(readonly, nonatomic) UITableView *_tableView;
@property(readonly, nonatomic) MPAVRoutingController *_routingController;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(_Bool)arg2;
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) _Bool allowMirroring;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1 routingController:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_initWithStyle:(unsigned long long)arg1 routingController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

