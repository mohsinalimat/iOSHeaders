//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <RemoteUI/UIWebViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, RUIBarButtonItem, RUIElement, RUIObjectModel, RUIPasscodeView, RUISpinnerView, RUIStyle, RUITableView, RUIWebView, UIBarButtonItem, UILabel, UIToolbar, UIView;
@protocol RUITopLevelPageElement;

@interface RUIPage : UIViewController <UIWebViewDelegate>
{
    NSString *_pageID;
    UIView *_containerView;
    RUITableView *_tableViewOM;
    RUIWebView *_webViewOM;
    RUIPasscodeView *_passcodeViewOM;
    RUISpinnerView *_spinnerViewOM;
    NSString *_validationFunction;
    NSString *_navTitle;
    _Bool _hidesBackButton;
    UIToolbar *_toolbar;
    UIBarButtonItem *_leftToolbarItem;
    UIBarButtonItem *_rightToolbarItem;
    UIBarButtonItem *_middleFlexSpace;
    UIBarButtonItem *_leftFlexSpace;
    RUIPage *_parentPage;
    NSMutableArray *_childPages;
    NSMutableArray *_didAppearCallbacks;
    _Bool _showsTitlesAsHeaderViews;
    _Bool _loading;
    NSDictionary *_attributes;
    RUIElement<RUITopLevelPageElement> *_primaryElement;
    RUIStyle *_style;
    NSString *_backButtonTitle;
    RUIBarButtonItem *_rightNavigationBarButtonItem;
    RUIBarButtonItem *_leftNavigationBarButtonItem;
    RUIBarButtonItem *_rightToolbarButtonItem;
    RUIBarButtonItem *_leftToolbarButtonItem;
    RUIBarButtonItem *_middleToolbarButtonItem;
    UIBarButtonItem *_middleToolbarItem;
    RUIObjectModel *_objectModel;
    double _customMargin;
    NSString *_loadingTitle;
    struct UIEdgeInsets _customEdgeInsets;
}

@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *loadingTitle; // @synthesize loadingTitle=_loadingTitle;
@property(nonatomic) struct UIEdgeInsets customEdgeInsets; // @synthesize customEdgeInsets=_customEdgeInsets;
@property(nonatomic) double customMargin; // @synthesize customMargin=_customMargin;
@property(readonly, nonatomic) __weak RUIPage *parentPage; // @synthesize parentPage=_parentPage;
@property(readonly, nonatomic) NSArray *childPages; // @synthesize childPages=_childPages;
@property(nonatomic) __weak RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIBarButtonItem *middleToolbarItem; // @synthesize middleToolbarItem=_middleToolbarItem;
@property(retain, nonatomic) UIBarButtonItem *leftToolbarItem; // @synthesize leftToolbarItem=_leftToolbarItem;
@property(retain, nonatomic) UIBarButtonItem *rightToolbarItem; // @synthesize rightToolbarItem=_rightToolbarItem;
@property(retain, nonatomic) RUIBarButtonItem *middleToolbarButtonItem; // @synthesize middleToolbarButtonItem=_middleToolbarButtonItem;
@property(retain, nonatomic) RUIBarButtonItem *leftToolbarButtonItem; // @synthesize leftToolbarButtonItem=_leftToolbarButtonItem;
@property(retain, nonatomic) RUIBarButtonItem *rightToolbarButtonItem; // @synthesize rightToolbarButtonItem=_rightToolbarButtonItem;
@property(retain, nonatomic) RUIBarButtonItem *leftNavigationBarButtonItem; // @synthesize leftNavigationBarButtonItem=_leftNavigationBarButtonItem;
@property(retain, nonatomic) RUIBarButtonItem *rightNavigationBarButtonItem; // @synthesize rightNavigationBarButtonItem=_rightNavigationBarButtonItem;
@property(nonatomic) _Bool hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property(nonatomic) _Bool showsTitlesAsHeaderViews; // @synthesize showsTitlesAsHeaderViews=_showsTitlesAsHeaderViews;
@property(copy, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(copy, nonatomic) NSString *validationFunction; // @synthesize validationFunction=_validationFunction;
@property(retain, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) RUIElement<RUITopLevelPageElement> *primaryElement; // @synthesize primaryElement=_primaryElement;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)addDidAppearBlock:(CDUnknownBlockType)arg1;
- (id)preferredFocusEnvironments;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)populatePostbackDictionary:(id)arg1;
- (_Bool)hasChoiceView;
- (_Bool)hasSpinnerView;
@property(readonly, nonatomic) RUISpinnerView *spinnerViewOM;
- (_Bool)hasPasscodeView;
@property(readonly, nonatomic) RUIPasscodeView *passcodeViewOM;
- (_Bool)hasWebView;
@property(readonly, nonatomic) RUIWebView *webViewOM;
- (_Bool)hasTableView;
@property(readonly, nonatomic) RUITableView *tableViewOM;
- (id)elementsWithName:(id)arg1;
- (id)subElementWithID:(id)arg1;
- (void)_updateParentPage;
- (void)_updateWithCompletedChild:(id)arg1;
- (void)_addChildPage:(id)arg1;
- (void)_setParentPage:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
@property(readonly, nonatomic) NSArray *accessoryViews;
- (void)_setContentInset:(double)arg1;
- (void)_middleToolbarButtonPressed:(id)arg1;
- (void)_leftToolbarButtonPressed:(id)arg1;
- (void)_rightToolbarButtonPressed:(id)arg1;
- (void)_leftNavigationBarButtonPressed:(id)arg1;
- (void)_rightNavigationBarButtonPressed:(id)arg1;
- (void)_barButtonPressed:(id)arg1 isRight:(_Bool)arg2 isNavbar:(_Bool)arg3;
@property(readonly, nonatomic) NSArray *buttons;
@property(retain, nonatomic) NSDictionary *leftNavigationBarButton;
@property(retain, nonatomic) NSDictionary *rightNavigationBarButton;
@property(retain, nonatomic) NSDictionary *leftToolbarButton;
@property(retain, nonatomic) NSDictionary *middleToolbarButton;
@property(retain, nonatomic) NSDictionary *rightToolbarButton;
- (void)_updateToolbar;
- (id)flexibleSpace;
- (void)setLeftNavigationBarButtonItem:(id)arg1 barButtonItem:(id)arg2;
- (void)setRightNavigationBarButtonItem:(id)arg1 barButtonItem:(id)arg2;
- (void)setButton:(id)arg1 enabled:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *buttonItems;
- (_Bool)needsToShowToolbarInPrefsAppRoot;
- (void)setHasToolbar;
- (void)_reloadTitleLabel;
@property(nonatomic) struct UIEdgeInsets titleLabelPadding;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)_updateLoadingUI;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

