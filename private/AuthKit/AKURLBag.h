//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSURLSessionDataDelegate-Protocol.h>
#import <AuthKit/NSURLSessionDelegate-Protocol.h>

@class AKURLSession, NSDate, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface AKURLBag : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSDictionary *_URLsByIdentifier;
    NSDictionary *_environments;
    NSDictionary *_configurations;
    NSDate *_lastFetchedDate;
    AKURLSession *_URLSession;
    NSObject<OS_dispatch_queue> *_bagFetchQueue;
}

+ (id)_newBagURLRequest;
+ (_Bool)looksLikeiForgotURLKey:(id)arg1;
+ (id)keyForEscapeHatchURL;
+ (id)sharedBag;
- (void).cxx_destruct;
- (id)_urlAtKey:(id)arg1;
- (id)urlAtKey:(id)arg1;
- (void)_handleURLBagResponseWithData:(id)arg1 error:(id)arg2;
- (_Bool)requestNewURLBagIfNecessaryWithError:(id *)arg1;
- (void)_requestNewURLBagIfNecessary;
- (void)refresh;
- (id)configurationAtKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long IDMSEnvironment;
@property(readonly, nonatomic) NSString *APSEnvironment;
@property(readonly, nonatomic) NSURL *fetchUserInfoURL;
@property(readonly, nonatomic) NSURL *fetchFollowUps;
@property(readonly, nonatomic) NSURL *fetchEmailsURL;
@property(readonly, nonatomic) NSURL *circleURL;
@property(readonly, nonatomic) NSURL *renewRecoveryTokenURL;
@property(readonly, nonatomic) NSURL *validateVettingTokenURL;
@property(readonly, nonatomic) NSURL *changePasswordURL;
@property(readonly, nonatomic) NSURL *fetchConfigDataURL;
@property(readonly, nonatomic) NSURL *configurationInfoURL;
@property(readonly, nonatomic) NSURL *tokenUpgradeURL;
@property(readonly, nonatomic) NSURL *absintheSessionURL;
@property(readonly, nonatomic) NSURL *absintheCertURL;
@property(readonly, nonatomic) NSURL *trustedDevicesSummaryURL;
@property(readonly, nonatomic) NSURL *trustedDevicesURL;
@property(readonly, nonatomic) NSURL *createAppleIDURL;
@property(readonly, nonatomic) NSURL *iForgotContinuationURL;
@property(readonly, nonatomic) NSURL *iForgotURL;
@property(readonly, nonatomic) NSURL *notificationAckURL;
@property(readonly, nonatomic) NSURL *checkInURL;
@property(readonly, nonatomic) NSURL *escapeHatchURL;
@property(readonly, nonatomic) NSURL *validateCodeURL;
@property(readonly, nonatomic) NSURL *upgradeUIURL;
@property(readonly, nonatomic) NSURL *upgradeEligibilityCheckURL;
@property(readonly, nonatomic) NSURL *syncAnisetteURL;
@property(readonly, nonatomic) NSURL *endProvisioningURL;
@property(readonly, nonatomic) NSURL *startProvisioningURL;
@property(readonly, nonatomic) NSURL *basicAuthURL;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

