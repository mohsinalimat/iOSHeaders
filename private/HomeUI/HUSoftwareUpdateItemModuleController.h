//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUSoftwareUpdateUIPresentationDelegate-Protocol.h>

@class HUSoftwareUpdateItemModule, NSString;
@protocol HUSoftwareUpdateItemModuleControllerDelegate;

@interface HUSoftwareUpdateItemModuleController : HUItemTableModuleController <HUSoftwareUpdateUIPresentationDelegate>
{
    id <HUSoftwareUpdateItemModuleControllerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <HUSoftwareUpdateItemModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)softwareUpdateUIManager:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateUIManager:(id)arg1 presentViewController:(id)arg2;
- (void)_startUpdateOnAccessory:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (id)initWithModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUSoftwareUpdateItemModule *module; // @dynamic module;
@property(readonly) Class superclass;

@end
