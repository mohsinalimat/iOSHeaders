//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/ISSingleton-Protocol.h>
#import <iTunesStoreUI/ISStoreURLOperationDelegate-Protocol.h>

@class ISStoreURLOperation, NSString, NSTimer;

@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate>
{
    ISStoreURLOperation *_partnerDetectOperation;
    _Bool _partnersEnabled;
    NSString *_partnerIdentifier;
    NSTimer *_startupTimer;
    long long _storeServicesNetworkUsageCount;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (void)_updateNetworkActivityIndicator;
- (void)_startupTimer:(id)arg1;
- (void)_mainThreadSetPartnerIdentifier:(id)arg1;
- (void)_mainThreadScheduleNetworkActivityUpdate;
- (void)_mainThreadHandleNetworkTypeChange:(id)arg1;
- (void)_handleUsingNetworkChange:(id)arg1;
- (void)_handleNetworkTypeChange:(id)arg1;
- (void)_cancelStartupTimer;
- (void)_storeServicesNetworkStopNotification:(id)arg1;
- (void)_storeServicesNetworkStartNotification:(id)arg1;
- (void)_partnerHeaderChanged:(id)arg1;
- (void)_networkUsageStateChanged:(id)arg1;
- (void)_networkTypeChanged:(id)arg1;
- (void)startNetworkAvailabilityTimer;
- (void)setPartnersEnabled:(_Bool)arg1;
@property(retain, nonatomic) NSString *partnerIdentifier; // @synthesize partnerIdentifier=_partnerIdentifier;
- (void)checkPartnerAvailability;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

