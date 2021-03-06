//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/CTCellularPlanClientDelegate-Protocol.h>

@class NSData, NSMutableArray, NSString, NSXPCConnection;

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate>
{
    NSMutableArray *_subscriptionCompletions;
    struct dispatch_queue_s *_queue;
    NSString *_lastSessionId;
    NSData *_cookieData;
    NSXPCConnection *_connection;
}

+ (long long)calculateInstallConsentTextTypeFor:(id)arg1;
+ (id)sharedManager;
- (void)dealloc;
- (void)subscriptionDetailsForCompletion:(id)arg1;
- (void)remoteProvisioningDidBecomeAvailable;
- (void)planInfoDidUpdate;
- (void)userDidProvideConsentResponse:(long long)arg1 forPlan:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)eraseAllRemotePlansWithCompletion:(CDUnknownBlockType)arg1;
- (void)remotePlanSubscriptionStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)remotePlansSignupParamsForCsn:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remoteplansWithCsn:(id)arg1 parameters:(id)arg2 andRemoteCompletion:(CDUnknownBlockType)arg3;
- (void)_remotePlansWithCsn:(id)arg1 parameters:(id)arg2 remoteCompletion:(CDUnknownBlockType)arg3;
- (void)remotePlanLaunchInfoForEid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remotePlanLaunchInfoForCsn:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didCancelRemotePlan;
- (void)didPurchaseRemotePlanForEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSmdpFqdn:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getRemoteInfo:(CDUnknownBlockType)arg1;
- (void)deleteAllRemoteProfiles;
- (void)deleteRemoteProfile:(id)arg1;
- (void)selectRemoteProfile:(id)arg1;
- (void)setAutoPlanSelection:(_Bool)arg1;
- (void)getAutoPlanSelectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRemoteProfiles:(id)arg1;
- (void)didDeleteRemotePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didSelectRemotePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remotePlanItemsWithUpdateFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remotePlanItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(_Bool)arg5 userConsent:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(_Bool)arg3 userConsent:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addNewRemotePlanWithCardData:(id)arg1 isPairing:(_Bool)arg2 userConsent:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addNewRemotePlan:(_Bool)arg1 userConsent:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addNewRemotePlanWithCardData:(id)arg1 isPairing:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addNewRemotePlan:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)manageAccountForRemotePlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishRemoteProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)startRemoteProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)shouldShowAddNewRemotePlanWithFlowType:(CDUnknownBlockType)arg1;
- (void)shouldShowAddNewRemotePlan:(CDUnknownBlockType)arg1;
- (void)isRemotePlanCapable:(CDUnknownBlockType)arg1;
- (void)launchDataActivationNextWithUrl:(id)arg1;
- (void)updatePlansDatabase;
- (void)expirePlan;
- (void)launchSequoia;
- (void)getCurrentPlanType:(CDUnknownBlockType)arg1;
- (void)openInternalUrlId:(long long)arg1;
- (void)getDeviceInfo:(CDUnknownBlockType)arg1;
- (void)carrierHandoffToken:(CDUnknownBlockType)arg1;
- (void)setUserInPurchaseFlow:(_Bool)arg1;
- (void)didProvisionEsimWithIccid:(id)arg1;
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(_Bool)arg2;
- (void)setActivePlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)manageAccountForPlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didSelectPlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willDisplayPlanItems;
- (void)planItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)isAddButtonEnabled:(CDUnknownBlockType)arg1;
- (void)shouldShowPlanList:(CDUnknownBlockType)arg1;
- (void)subscriptionDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)plansForRenewalWithCompletion:(CDUnknownBlockType)arg1;
- (void)plansWithCompletion:(CDUnknownBlockType)arg1 latitude:(id)arg2 longitude:(id)arg3;
- (void)plansWithCompletion:(CDUnknownBlockType)arg1;
- (void)plansForRenewalWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)plansWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2 additionalParameters:(id)arg3;
- (void)plansWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)_plansForRenewal:(_Bool)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 latitude:(id)arg4 longitude:(id)arg5 additionalParameters:(id)arg6;
- (void)setLatitude:(id)arg1 andLongitude:(id)arg2;
- (void)latitudeLongitudeOverride:(CDUnknownBlockType)arg1;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)mccMncOverride:(CDUnknownBlockType)arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)getSelectedProxy:(CDUnknownBlockType)arg1;
- (void)setSelectedEnv:(long long)arg1;
- (void)getSelectedEnv:(CDUnknownBlockType)arg1;
- (void)setESimServerURL:(id)arg1;
- (void)getESimServerURL:(CDUnknownBlockType)arg1;
- (void)setIMEIPrefix:(id)arg1;
- (void)getIMEIPrefix:(CDUnknownBlockType)arg1;
- (void)connectionSettings:(CDUnknownBlockType)arg1;
- (void)triggerAddNewDataPlan:(CDUnknownBlockType)arg1;
- (void)isRoamingPlanSupportAvailable:(CDUnknownBlockType)arg1;
- (void)isMultipleDataPlanSupportAvailable:(CDUnknownBlockType)arg1;
- (void)isNewDataPlanCapable:(CDUnknownBlockType)arg1;
- (void)ping;
- (id)init;
- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (void)_reconnect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

