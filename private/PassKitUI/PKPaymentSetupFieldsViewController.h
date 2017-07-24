//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKNavigationItemController-Protocol.h>
#import <PassKitUI/PKPaymentSetupFieldCellDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, PKPaymentSetupFieldsModel, PKPaymentWebService, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFieldsViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentSetupFieldCellDelegate, PKNavigationItemController>
{
    PKTableHeaderView *_headerView;
    _Bool _hasScrolledToShowFields;
    PKPaymentSetupFieldsModel *_fieldsModel;
    NSMapTable *_fieldIdentifierToCellMap;
    id _currentNextActionBlock;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    _Bool _navigationEnabled;
    _Bool _rightBarButtonItemsEnabled;
    _Bool _hidesBackButton;
    _Bool _showingActivitySpinner;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentWebService *_webService;
}

@property(readonly, nonatomic, getter=isShowingActivitySpinner) _Bool showingActivitySpinner; // @synthesize showingActivitySpinner=_showingActivitySpinner;
@property(retain, nonatomic) PKPaymentSetupFieldsModel *fieldsModel; // @synthesize fieldsModel=_fieldsModel;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
- (void).cxx_destruct;
- (void)logAggDCheckpointForKey:(id)arg1;
- (void)logAggDContextSpecificCheckpointForKey:(id)arg1;
- (id)_contextSpecificStringForAggDKey:(id)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (_Bool)isEmpty;
- (id)firstEmptyField;
- (id)allCells;
- (id)firstResponderCell;
- (id)firstEmptySetupField;
- (id)firstEmptyCell;
- (id)nextResponderCellForCurrentIdentifier:(id)arg1;
- (id)cellForIdentifier:(id)arg1;
- (id)fieldForIdentifier:(id)arg1;
- (void)noteFieldIdentifiersChanged;
- (id)readonlyFieldIdentifiers;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (void)_updateRightBarButtonState;
- (void)_updateNavigationItemAnimated:(_Bool)arg1;
- (void)_destroyNavigationBarButtonItemsAnimated:(_Bool)arg1;
- (void)_setRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)_setLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)_setRightBarButtonItemsEnabled:(_Bool)arg1;
- (void)_setNavigationBarEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHidesBackButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setIdleTimerDisabled:(_Bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (void)_setTableViewHeaderActivityIndicatorActive:(_Bool)arg1 title:(id)arg2 subtitle:(id)arg3 animated:(_Bool)arg4;
- (void)hideActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2 animated:(_Bool)arg3;
- (void)hideActivitySpinner;
- (void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)handleNextActionError:(id)arg1 shouldContinue:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)handleNextActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_triggerNextActionLoop;
- (void)handleNextButtonTapped:(id)arg1;
- (void)_handleNextButtonTapped:(id)arg1;
- (_Bool)fieldCellEditableTextFieldShouldClear:(id)arg1;
- (_Bool)fieldCellEditableTextFieldShouldReturn:(id)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(id)arg1;
- (_Bool)fieldCellEditableTextFieldShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
- (id)footerView;
- (id)headerView;
- (_Bool)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

