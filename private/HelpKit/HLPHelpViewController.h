//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HelpKit/HLPHelpLoadingViewDelegate-Protocol.h>
#import <HelpKit/HLPHelpTableOfContentViewControllerDelegate-Protocol.h>
#import <HelpKit/HLPHelpTopicViewControllerDelegate-Protocol.h>
#import <HelpKit/HLPReachabilityManagerDelegate-Protocol.h>

@class HLPHelpBookController, HLPHelpLoadingView, HLPHelpLocaleController, HLPHelpTableOfContentViewController, HLPHelpTopicViewController, HLPHelpUsageController, HLPReachabilityManager, NSArray, NSLayoutConstraint, NSMutableDictionary, NSString, NSURL, UIBarButtonItem;
@protocol HLPHelpViewControllerDelegate;

@interface HLPHelpViewController : UIViewController <HLPHelpTableOfContentViewControllerDelegate, HLPHelpTopicViewControllerDelegate, HLPReachabilityManagerDelegate, HLPHelpLoadingViewDelegate>
{
    _Bool _showingHelpTopic;
    NSString *_helpBookBasePath;
    NSString *_helpbookVersion;
    NSURL *_helpBookURL;
    NSMutableDictionary *_localHelpBookNameIDMap;
    UIBarButtonItem *_doneBarButtonItem;
    NSLayoutConstraint *_loadingViewTopConstraint;
    HLPHelpUsageController *_usageController;
    HLPHelpLocaleController *_localeListController;
    HLPHelpBookController *_helpBookController;
    HLPHelpTopicViewController *_topicViewController;
    _Bool _hideDoneButton;
    _Bool _displayHelpTopicsOnly;
    _Bool _showTopicNameAsTitle;
    _Bool _showTopicViewOnLoad;
    id <HLPHelpViewControllerDelegate> _delegate;
    NSString *_identifier;
    NSString *_version;
    NSString *_subpath;
    NSURL *_localHelpBookFileURL;
    NSString *_selectedHelpTopicID;
    NSArray *_preferredLanguagesOverride;
    NSString *_selectedHelpTopicName;
    HLPReachabilityManager *_reachabilityManager;
    HLPHelpLoadingView *_loadingView;
    HLPHelpTableOfContentViewController *_tableOfContentViewController;
}

+ (id)helpViewControllerWithTitle:(id)arg1 identifier:(id)arg2 version:(id)arg3 subpath:(id)arg4;
+ (id)helpViewControllerWithTitle:(id)arg1 identifier:(id)arg2 version:(id)arg3;
+ (id)helpViewControllerWithIdentifier:(id)arg1 version:(id)arg2;
+ (id)helpViewControllerWithLocalHelpBookFileURL:(id)arg1;
+ (id)helpViewController;
@property(retain, nonatomic) HLPHelpTableOfContentViewController *tableOfContentViewController; // @synthesize tableOfContentViewController=_tableOfContentViewController;
@property(retain, nonatomic) HLPHelpLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) HLPReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(copy, nonatomic) NSString *selectedHelpTopicName; // @synthesize selectedHelpTopicName=_selectedHelpTopicName;
@property(copy, nonatomic) NSArray *preferredLanguagesOverride; // @synthesize preferredLanguagesOverride=_preferredLanguagesOverride;
@property(copy, nonatomic) NSString *selectedHelpTopicID; // @synthesize selectedHelpTopicID=_selectedHelpTopicID;
@property(copy, nonatomic) NSURL *localHelpBookFileURL; // @synthesize localHelpBookFileURL=_localHelpBookFileURL;
@property(copy, nonatomic) NSString *subpath; // @synthesize subpath=_subpath;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <HLPHelpViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showTopicViewOnLoad; // @synthesize showTopicViewOnLoad=_showTopicViewOnLoad;
@property(nonatomic) _Bool showTopicNameAsTitle; // @synthesize showTopicNameAsTitle=_showTopicNameAsTitle;
@property(nonatomic) _Bool displayHelpTopicsOnly; // @synthesize displayHelpTopicsOnly=_displayHelpTopicsOnly;
@property(nonatomic) _Bool hideDoneButton; // @synthesize hideDoneButton=_hideDoneButton;
- (void).cxx_destruct;
- (void)showHelpBookInfo:(id)arg1;
- (void)reachabilityManagerConnectionStatusChanged:(id)arg1 connected:(_Bool)arg2;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewController:(id)arg1 selectedHelpTopicItem:(id)arg2;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewControllerTableOfContentButtonTapped:(id)arg1;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1;
- (void)tableOfContentViewControllerShowHelpBookInfo:(id)arg1;
- (id)currentHelpTopicItemForTableOfContentViewController:(id)arg1;
- (void)tableOfContentViewController:(id)arg1 showHelpTopicItem:(id)arg2;
- (void)popWelcomeTopicView;
- (void)dismiss;
- (id)topicIDForTopicName:(id)arg1 locale:(id)arg2;
- (void)showHelpTopicItem:(id)arg1 anchor:(id)arg2 animate:(_Bool)arg3;
- (void)showMessageForError:(id)arg1;
- (void)loadFromStaticServer;
- (void)loadHelpBook;
- (void)displayHelpBookWithLocale:(id)arg1;
- (void)setupTableContentViewController;
- (void)showTopicView;
- (void)updateDoneButton;
- (void)updateTOCButton;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

