//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PreferencesUI/PSSpecifierGroupController-Protocol.h>
#import <PreferencesUI/RemoteUIControllerDelegate-Protocol.h>

@class CTCarrierSpaceCapabilities, NSString, PSListController, PSSpecifier, RemoteUIController;

@interface PSUICarrierSpaceGroupController : NSObject <RemoteUIControllerDelegate, PSSpecifierGroupController>
{
    RemoteUIController *_remoteUIController;
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
    CTCarrierSpaceCapabilities *_capabilities;
}

@property(retain, nonatomic) CTCarrierSpaceCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(retain, nonatomic) RemoteUIController *remoteUIController; // @synthesize remoteUIController=_remoteUIController;
- (void).cxx_destruct;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)dismissUserConsent;
- (void)openURLWithSpecifier:(id)arg1;
- (void)showConsentFlow:(id)arg1;
- (void)carrierSpaceChanged;
- (id)descriptionForUsage:(id)arg1;
- (id)descriptionForPlans:(id)arg1;
- (void)newCarrierNotification;
- (id)carrierServicesSpecifier;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

