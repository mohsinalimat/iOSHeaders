//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HomeUI/HUAlarmDataDelegate-Protocol.h>
#import <HomeUI/HUAlarmEditViewControllerDelegate-Protocol.h>
#import <HomeUI/HUAlarmTableViewCellDelegate-Protocol.h>

@class MTAlarm, NSArray, NSString, UIBarButtonItem, _UIContentUnavailableView;
@protocol HUAlarmDataSource;

@interface HUAlarmTableViewController : UITableViewController <HUAlarmTableViewCellDelegate, HUAlarmEditViewControllerDelegate, HUAlarmDataDelegate>
{
    _Bool _viewVisible;
    _Bool _didScrollToCurrentTime;
    id <HUAlarmDataSource> _dataSource;
    UIBarButtonItem *_doneButtonItem;
    NSArray *_alarms;
    MTAlarm *_alarmToEdit;
    _UIContentUnavailableView *_noItemsView;
    UIBarButtonItem *_addButtonItem;
    UIBarButtonItem *_editDoneButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *editDoneButtonItem; // @synthesize editDoneButtonItem=_editDoneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *addButtonItem; // @synthesize addButtonItem=_addButtonItem;
@property(retain, nonatomic) _UIContentUnavailableView *noItemsView; // @synthesize noItemsView=_noItemsView;
@property(retain, nonatomic) MTAlarm *alarmToEdit; // @synthesize alarmToEdit=_alarmToEdit;
@property(retain, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
@property(nonatomic) _Bool didScrollToCurrentTime; // @synthesize didScrollToCurrentTime=_didScrollToCurrentTime;
@property(nonatomic) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) id <HUAlarmDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_updateNavigationItems:(_Bool)arg1;
- (void)_numberOfItemsDidChangeAnimated:(_Bool)arg1;
- (void)_layoutNoItemsLabel;
- (id)backgroundView;
- (void)_editDoneAction:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)adapter:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)setAlarmEnabled:(_Bool)arg1 forCell:(id)arg2;
- (void)_submitDataModelChange:(id)arg1 editController:(id)arg2 operationType:(id)arg3 retryBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;
- (void)alarmEditControllerDidCancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dismissAddViewController:(id)arg1;
- (id)editViewControllerForAlarm:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_showEditViewForRow:(long long)arg1;
- (void)_showAddView:(id)arg1;
- (void)reloadDataWithAlarms:(id)arg1 animated:(_Bool)arg2;
- (void)reloadDataWithAlarms:(id)arg1;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)reloadData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)contentScrollView;
- (void)viewDidLayoutSubviews;
- (void)setDataSource:(id)arg1 reloadData:(_Bool)arg2;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

