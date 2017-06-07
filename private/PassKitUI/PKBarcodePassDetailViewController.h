//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PassKitUI/PKPassHeaderViewDelegate-Protocol.h>
#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class BluetoothManager, NSArray, NSMutableDictionary, NSObject, NSString, PKLinkedAppView, PKPass, PKPassColorProfile, PKPassDisplayProfile, PKPassHeaderView, PKSettingTableCell, UIRefreshControl, UISegmentedControl, UITableViewCell, UIView, UIVisualEffectView;
@protocol OS_dispatch_source, PKPassDeleteHandler;

@interface PKBarcodePassDetailViewController : UITableViewController <UITextViewDelegate, PKPassHeaderViewDelegate>
{
    PKPassDisplayProfile *_displayProfile;
    PKPassColorProfile *_colorProfile;
    PKLinkedAppView *_linkedApp;
    UIView *_locationHelpView;
    UIRefreshControl *_refreshControl;
    PKSettingTableCell *_automaticUpdatesCell;
    PKSettingTableCell *_showInLockScreenCell;
    PKSettingTableCell *_automaticSelectionCell;
    UITableViewCell *_shareCell;
    UITableViewCell *_personalizePassCell;
    UITableViewCell *_deleteCell;
    NSArray *_rowCountBySection;
    unsigned long long _linkedAppSection;
    unsigned long long _settingsSection;
    unsigned long long _automaticSelectionSection;
    unsigned long long _shareSection;
    unsigned long long _deleteSection;
    unsigned long long _personalizePassSection;
    unsigned long long _fieldsSection;
    NSMutableDictionary *_fieldCellsByIndexPath;
    NSMutableDictionary *_fieldCellHeightsByIndexPath;
    NSObject<OS_dispatch_source> *_refreshTimeout;
    BluetoothManager *_btManager;
    _Bool _isBluetoothEnabled;
    _Bool _isLocationEnabled;
    _Bool _isWifiEnabled;
    _Bool _showsShare;
    _Bool _showsSettings;
    _Bool _showsDelete;
    _Bool _showsLinks;
    _Bool _showsLinkedApp;
    _Bool _showsPersonalize;
    NSArray *_tabBarSegments;
    double _headerHeight;
    struct UIEdgeInsets _headerContentInset;
    double _tabBarHeight;
    _Bool _navigationControllerHidesShadow;
    UIView *_headerView;
    PKPassHeaderView *_passHeaderView;
    UIVisualEffectView *_blurView;
    UISegmentedControl *_tabBar;
    UIView *_keyLine;
    PKPass *_pass;
    unsigned long long _suppressedContent;
    id <PKPassDeleteHandler> _deleteOverrider;
}

+ (_Bool)isWifiEnabled;
+ (id)_linkColor;
+ (id)_linkTextAttributes;
@property(nonatomic) id <PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
@property(nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)_passSettingsChanged:(id)arg1;
- (void)pushSettingsFromViewToModel;
- (id)_relevantBuckets;
- (_Bool)shouldAllowRefresh;
- (void)_refreshFinished:(_Bool)arg1;
- (void)refreshControlValueChanged:(id)arg1;
- (id)_fieldForIndexPath:(id)arg1;
- (id)_fieldCellForIndexPath:(id)arg1;
- (id)_settingsCellForRow:(unsigned long long)arg1;
- (id)_personalizePassCell;
- (id)_deleteCell;
- (id)_shareCell;
- (id)_automaticSelectionCell;
- (_Bool)_personalizeAvailable;
- (_Bool)_settingsAvailable;
- (_Bool)_linkedAppAvailable;
- (void)_updatePassProperties;
- (void)_deletePass;
- (void)_sharePass;
- (void)_tabBarSegmentChanged:(id)arg1;
- (void)_done:(id)arg1;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)_reloadPassAndView;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)_locationHelpViewForTableView:(id)arg1;
- (id)_locationRelevancyHelpText;
- (void)_bluetoothPowerChanged:(id)arg1;
- (_Bool)_isBluetoothEnabled;
- (void)_wifiChanged:(id)arg1;
- (void)setShowsLinks:(_Bool)arg1;
- (id)linkedApp;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (_Bool)_updateHeaderHeight;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTabBar;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_updateTableSections;
- (_Bool)pkui_prefersNavigationBarShadowHidden;
- (void)dealloc;
- (id)initWithPass:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

