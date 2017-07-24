//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallCoordination/IXCoordinatorWithPlaceholderPromise-Protocol.h>

@class IXAppInstallCoordinatorSeed, NSArray, NSError, NSString, NSUUID;
@protocol IXAppInstallCoordinatorObserver, OS_dispatch_queue;

@interface IXAppInstallCoordinator : NSObject <IXCoordinatorWithPlaceholderPromise>
{
    _Bool _complete;
    id <IXAppInstallCoordinatorObserver> _observer;
    IXAppInstallCoordinatorSeed *_seed;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    unsigned long long _observersCalled;
    NSError *_error;
    unsigned long long _errorSourceIdentifier;
}

+ (void)setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)removabilityForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)uninstallAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (void)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 error:(id *)arg3;
+ (void)prioritizeCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)prioritizeCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (void)resumeCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)resumeCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (void)pauseCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)pauseCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (void)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id *)arg4;
+ (void)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id *)arg4;
+ (_Bool)_synchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_asynchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (Class)classForIntent:(unsigned long long)arg1;
+ (void)enumerateCoordinatorsUsingBlock:(CDUnknownBlockType)arg1;
+ (_Bool)enumerateCoordinatorsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (_Bool)enumerateCoordinatorsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;
+ (id)_coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 intent:(unsigned long long)arg3 createIfNotExisting:(_Bool)arg4 created:(_Bool *)arg5 error:(id *)arg6;
+ (_Bool)coordinationIsEnabled;
+ (_Bool)killDaemonForTesting;
+ (_Bool)purgeAllCoordinatorsAndPromisesForCreator:(unsigned long long)arg1;
+ (void)installApplication:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)installApplication:(id)arg1 consumeSource:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_beginInstallForURL:(id)arg1 consumeSource:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) unsigned long long observersCalled; // @synthesize observersCalled=_observersCalled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerCalloutQueue; // @synthesize observerCalloutQueue=_observerCalloutQueue;
@property(readonly, nonatomic) IXAppInstallCoordinatorSeed *seed; // @synthesize seed=_seed;
@property(nonatomic) __weak id <IXAppInstallCoordinatorObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2;
- (oneway void)_clientDelegate_didComplete;
- (oneway void)_clientDelegate_placeholderDidInstall;
- (oneway void)_clientDelegate_shouldBeginRestoringUserData;
- (oneway void)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;
- (oneway void)_clientDelegate_shouldPause;
- (oneway void)_clientDelegate_shouldResume;
- (oneway void)_clientDelegate_shouldPrioritize;
@property(readonly, nonatomic) unsigned long long creatorIdentifier; // @dynamic creatorIdentifier;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, nonatomic) unsigned long long coordinationState;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localDescription;
@property(readonly, copy) NSString *description;
- (_Bool)prioritizeWithError:(id *)arg1;
- (_Bool)isPaused:(_Bool *)arg1 withError:(id *)arg2;
- (_Bool)resumeWithError:(id *)arg1;
- (_Bool)pauseWithError:(id *)arg1;
- (_Bool)setPreparationPromise:(id)arg1 withError:(id *)arg2;
- (id)preparationPromiseWithError:(id *)arg1;
- (id)userDataRestoreShouldBegin:(_Bool *)arg1;
@property(readonly, nonatomic) _Bool hasUserDataPromise;
- (id)userDataPromiseWithError:(id *)arg1;
- (_Bool)setUserDataPromise:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasInitialODRAssetPromises;
- (id)initialODRAssetPromisesWithError:(id *)arg1;
- (_Bool)setInitialODRAssetPromises:(id)arg1 error:(id *)arg2;
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated;
@property(readonly, nonatomic) _Bool hasAutoEnabledExtensionTypes;
- (_Bool)setAutoEnabledExtensionTypes:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasInstallOptions;
- (_Bool)setInstallOptions:(id)arg1 error:(id *)arg2;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id *)arg1;
- (_Bool)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)appAssetPromiseHasBegunFulfillment:(_Bool *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasAppAssetPromise;
- (id)appAssetPromiseWithError:(id *)arg1;
- (_Bool)setAppAssetPromise:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasPlaceholderPromise;
- (id)placeholderPromiseWithError:(id *)arg1;
- (_Bool)setPlaceholderPromise:(id)arg1 error:(id *)arg2;
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;
- (void)cancelForReason:(id)arg1;
- (void)dealloc;
- (void)_updateInitWithSeed:(id)arg1 notifyDaemon:(_Bool)arg2;
- (id)initWithBundleID:(id)arg1 creator:(unsigned long long)arg2 intent:(unsigned long long)arg3;
- (id)initWithSeed:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *validInstallTypes; // @dynamic validInstallTypes;

@end

