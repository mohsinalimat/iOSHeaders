//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HUAlarmTonePickerDelegate-Protocol.h>
#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class HUAlarmEditableTextCell, HUAlarmTonePickerViewController, MTMutableAlarm, NSString, UITableView;
@protocol HUAlarmEditSettingViewControllerDelegate;

@interface HUAlarmEditSettingViewController : UIViewController <HUAlarmTonePickerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <HUAlarmEditSettingViewControllerDelegate> _delegate;
    NSString *_loggedInAppleMusicAccountDSID;
    UITableView *_tableView;
    HUAlarmEditableTextCell *_editingCell;
    HUAlarmTonePickerViewController *_tonePickerViewController;
    long long _setting;
    unsigned long long _firstWeekday;
    unsigned long long _repeatSchedule;
    MTMutableAlarm *_alarm;
}

@property(copy, nonatomic) MTMutableAlarm *alarm; // @synthesize alarm=_alarm;
@property(nonatomic) unsigned long long repeatSchedule; // @synthesize repeatSchedule=_repeatSchedule;
@property(nonatomic) unsigned long long firstWeekday; // @synthesize firstWeekday=_firstWeekday;
@property(nonatomic) long long setting; // @synthesize setting=_setting;
@property(retain, nonatomic) HUAlarmTonePickerViewController *tonePickerViewController; // @synthesize tonePickerViewController=_tonePickerViewController;
@property(retain, nonatomic) HUAlarmEditableTextCell *editingCell; // @synthesize editingCell=_editingCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, copy, nonatomic) NSString *loggedInAppleMusicAccountDSID; // @synthesize loggedInAppleMusicAccountDSID=_loggedInAppleMusicAccountDSID;
@property(nonatomic) __weak id <HUAlarmEditSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textValueChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (unsigned int)maskForRow:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tonePickerViewController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_dismiss;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidUnload;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)addDefaultSongsIfNeeded;
- (void)dealloc;
- (void)_commonInitialization;
- (id)initWithAlarm:(id)arg1 setting:(long long)arg2 loggedInAppleMusicAccountDSID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

