//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/ISURLBagObserver-Protocol.h>
#import <Radio/MCProfileConnectionObserver-Protocol.h>

@class NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface RadioAvailabilityController : NSObject <ISURLBagObserver, MCProfileConnectionObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    NSObject<OS_dispatch_queue> *_restrictionLoadQueue;
    _Bool _hasSuccessfullyLoadedURLBag;
    _Bool _isRadioAvailable;
    _Bool _isRadioAvailableFromBag;
    _Bool _isRadioRestricted;
    NSNumber *_lastActiveAccountUniqueIdentifier;
}

- (void).cxx_destruct;
- (id)_userDefaultsDomain;
- (void)_updateRadioAvailabilityAllowingNotifications:(_Bool)arg1;
- (void)_updateRadioAvailabilityWithStoreBagDictionary:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reloadRadioRestriction;
- (void)_reloadRadioBagAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_currentStoreFrontIdentifier;
- (_Bool)_calculateRadioRestricted;
- (void)getRadioAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isRadioAvailable) _Bool radioAvailable;
@property(readonly, nonatomic) _Bool hasLoadedRadioAvailability;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)bagDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

