//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, PKPass, PKPaymentPass, PKPaymentWebService, PKTrustedDeviceEnrollmentInfo, PKVerificationChannel;

@protocol PKPaymentWebServiceTargetDeviceProtocol <NSObject>
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (_Bool)claimSecureElementForCurrentUser;
- (void)paymentWebService:(PKPaymentWebService *)arg1 validateTransferPreconditionsWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)downloadAllPaymentPassesForPaymentWebService:(PKPaymentWebService *)arg1;
- (void)paymentWebService:(PKPaymentWebService *)arg1 addPaymentPass:(PKPaymentPass *)arg2 withCompletionHandler:(void (^)(void))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 validateAddPreconditionsWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (_Bool)paymentWebService:(PKPaymentWebService *)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(NSString *)arg2;
- (_Bool)paymentWebService:(PKPaymentWebService *)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(void (^)(_Bool, NSData *, NSData *))arg2;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningUserInterfaceDidAppear;
- (NSArray *)secureElementIdentifiers;
- (_Bool)supportsAutomaticPassPresentation;
- (NSString *)deviceRegion;
- (NSString *)bridgedClientInfo;
- (NSString *)deviceName;
- (NSString *)deviceDescriptionForPaymentWebService:(PKPaymentWebService *)arg1;
- (int)paymentSupportedInCurrentRegionForWebService:(PKPaymentWebService *)arg1;
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 filterVerificationChannels:(NSArray *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didRegisterWithRegionMap:(NSDictionary *)arg2 primaryRegionTopic:(NSString *)arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 deleteApplicationWithAID:(NSString *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 provisioningDataWithCompletionHandler:(void (^)(PKPaymentDeviceProvisioningData *, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 signData:(NSData *)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(void (^)(NSData *, PKSecureElementSignatureInfo *, NSError *))arg4;
- (void)paymentWebService:(PKPaymentWebService *)arg1 registrationDataWithAuthToken:(NSString *)arg2 completionHandler:(void (^)(PKPaymentDeviceRegistrationData *, NSError *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 configurationDataWithCompletionHandler:(void (^)(PKPaymentDeviceConfigurationData *, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(NSString *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)paymentWebServiceDidUpdateConfiguration:(PKPaymentWebService *)arg1;

@optional
- (void)paymentWebService:(PKPaymentWebService *)arg1 removePass:(PKPass *)arg2 withCompletionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 addPaymentPass:(PKPaymentPass *)arg2 withCompletionHandlerV2:(void (^)(PKPaymentPass *))arg3;
- (_Bool)supportsExpressModeForExpressPassType:(long long)arg1;
- (_Bool)felicaSecureElementIsAvailable;
- (void)paymentWebService:(PKPaymentWebService *)arg1 handlePotentialExpressPass:(PKPaymentPass *)arg2 withCompletionHandler:(void (^)(NSSet *))arg3;
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 passesOfType:(unsigned long long)arg2;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (unsigned long long)maximumPaymentCards;
- (void)startBackgroundVerificationObserverForPass:(PKPaymentPass *)arg1 verificationMethod:(PKVerificationChannel *)arg2;
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;
- (PKTrustedDeviceEnrollmentInfo *)trustedDeviceEnrollmentInfoForWebService:(PKPaymentWebService *)arg1;
@end

