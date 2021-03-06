//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class LSApplicationProxy, MCUIProfile, NSString;

@interface MCManagedAppDetailsViewController : UITableViewController <PSStateRestoration>
{
    MCUIProfile *_UIProfile;
    LSApplicationProxy *_managedAppProxy;
}

@property(retain, nonatomic) LSApplicationProxy *managedAppProxy; // @synthesize managedAppProxy=_managedAppProxy;
@property(retain, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
- (void).cxx_destruct;
- (void)_profileChanged:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_setup;
- (id)initWithUIProfile:(id)arg1 managedAppID:(id)arg2;
- (id)initWithUIProfile:(id)arg1 managedApp:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

