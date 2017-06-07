//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKPaymentWebServiceCompanionTargetDeviceDelegate-Protocol.h>

@class NPKCompanionAgentConnection, NPKPaymentWebServiceCompanionTargetDevice, NSString, PKPaymentWebService;

@interface NPKSharedWebServiceProvider : NSObject <NPKPaymentWebServiceCompanionTargetDeviceDelegate>
{
    PKPaymentWebService *_webService;
    NPKPaymentWebServiceCompanionTargetDevice *_targetDevice;
    NPKCompanionAgentConnection *_companionAgentConnection;
}

+ (id)sharedWebServiceProvider;
@property(retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection; // @synthesize companionAgentConnection=_companionAgentConnection;
@property(retain, nonatomic) NPKPaymentWebServiceCompanionTargetDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
- (void).cxx_destruct;
- (void)setNewAuthRandom:(CDUnknownBlockType)arg1;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)showPaymentSetupForAppDisplayName:(id)arg1;
- (void)sendWebServiceContextToWatch;
- (void)archiveWebServiceBackgroundContext:(id)arg1;
- (void)archiveWebServiceContext:(id)arg1;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;
- (void)handleRemoveTransactionsWithIdentifiers:(id)arg1;
- (void)handleAppletState:(id)arg1 forUniqueID:(id)arg2;
- (void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3;
- (void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 shouldUnregister:(_Bool)arg2;
- (void)handlePushToken:(id)arg1;
- (void)_deviceFailedToPair:(id)arg1;
- (id)_webServiceContext;
- (void)loadWebService;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

