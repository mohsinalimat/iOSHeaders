//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAddressEditorViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKAddressSearchModelDelegate-Protocol.h>
#import <PassKitUI/UISearchBarDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class CNPostalAddress, NSString, PKAddressSearchModel, UISearchBar, UITableView, _UINavigationControllerPalette;
@protocol PKAddressSearcherViewControllerDelegate;

@interface PKAddressSearcherViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, PKAddressSearchModelDelegate, PKAddressEditorViewControllerDelegate>
{
    id <PKAddressSearcherViewControllerDelegate> _delegate;
    UISearchBar *_searchBar;
    UITableView *_tableView;
    _UINavigationControllerPalette *_palette;
    PKAddressSearchModel *_searchModel;
    long long _style;
    CNPostalAddress *_selectedAddress;
}

@property(retain, nonatomic) CNPostalAddress *selectedAddress; // @synthesize selectedAddress=_selectedAddress;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) PKAddressSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) _UINavigationControllerPalette *palette; // @synthesize palette=_palette;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) id <PKAddressSearcherViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addressEditorViewControllerDidCancel:(id)arg1;
- (void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2;
- (void)selectedAddress:(id)arg1 withError:(id)arg2;
- (void)contactsSearchUpdated:(id)arg1;
- (void)mapSearchUpdated:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_showAddressEditorWithContact:(id)arg1;
- (void)cancel;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
