//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUSoftwareUpdateItemModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>

@class HUSoftwareUpdateItemModuleController, HUSoftwareUpdateStandaloneItemManager, NAFuture, NSString;

@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController <HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate>
{
    HUSoftwareUpdateItemModuleController *_softwareUpdateModule;
    NAFuture *_softwareUpdateFetchFuture;
}

@property(retain, nonatomic) NAFuture *softwareUpdateFetchFuture; // @synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture;
@property(retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateModule; // @synthesize softwareUpdateModule=_softwareUpdateModule;
- (void).cxx_destruct;
- (id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)itemModuleControllers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUSoftwareUpdateStandaloneItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

