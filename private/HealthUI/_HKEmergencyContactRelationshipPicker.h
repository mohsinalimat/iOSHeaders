//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

@class NSArray;
@protocol _HKEmergencyContactRelationshipPickerDelegate;

@interface _HKEmergencyContactRelationshipPicker : HKTableViewController
{
    NSArray *_tokens;
    NSArray *_labels;
    id <_HKEmergencyContactRelationshipPickerDelegate> _delegate;
}

@property(nonatomic) __weak id <_HKEmergencyContactRelationshipPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cancelTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

