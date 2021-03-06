//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterServices/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSSet, NSString;
@protocol BSDefaultObserver;

@interface CCSModuleRepository : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSArray *_directoryURLs;
    NSSet *_whitelistedModuleIdentifiers;
    NSDictionary *_allModuleMetadataByIdentifier;
    NSSet *_availableModuleIdentifiers;
    NSSet *_interestingBundleIdentifiers;
    struct MGNotificationTokenStruct *_mobileGestaltNotificationToken;
    NSHashTable *_observers;
    NSObject<BSDefaultObserver> *_internalDefaultsObserver;
    _Bool _ignoreWhitelist;
    NSSet *_loadableModuleIdentifiers;
}

+ (id)_defaultModuleIdentifierWhitelist;
+ (id)_defaultModuleDirectories;
+ (id)repositoryWithDefaults;
+ (id)_deviceFamily;
@property(nonatomic) _Bool ignoreWhitelist; // @synthesize ignoreWhitelist=_ignoreWhitelist;
@property(readonly, copy, nonatomic) NSSet *loadableModuleIdentifiers; // @synthesize loadableModuleIdentifiers=_loadableModuleIdentifiers;
- (void).cxx_destruct;
- (void)_unregisterForInternalPreferenceChanges;
- (void)_registerForInternalPreferenceChanges;
- (void)_stopObservingGestaltQuestions;
- (void)_startObservingMobileGestaltQuestions:(id)arg1 withChangeHandler:(CDUnknownBlockType)arg2;
- (id)_gestaltQuestionsForModuleMetadata:(id)arg1;
- (void)_updateGestaltQuestionsForModuleMetadata:(id)arg1;
- (id)_filterModuleMetadataByGestalt:(id)arg1;
- (void)_unregisterForVisiblityPreferenceChanges;
- (void)_registerForVisiblityPreferenceChanges;
- (id)_filterModuleMetadataByVisibilityPreference:(id)arg1;
- (_Bool)_arrayContainsInterestingApplicationProxy:(id)arg1;
- (id)_associatedBundleIdentifiersForModuleMetadata:(id)arg1;
- (void)_updateInterestingBundleIdentifiersForModuleMetadata:(id)arg1;
- (id)_filterModuleMetadataByAssociatedBundleAvailability:(id)arg1;
- (id)_loadAllModuleMetadata;
- (id)_moduleIdentifiersForMetadata:(id)arg1;
- (void)_updateLoadableModuleMetadataForAvailableModuleMetadata:(id)arg1;
- (void)_updateAvailableModuleMetadataForAllModuleMetadata:(id)arg1;
- (void)_updateAllModuleMetadataForAllModuleMetadata:(id)arg1;
- (void)_updateLoadableModuleMetadata;
- (void)_updateAvailableModuleMetadata;
- (void)_updateAllModuleMetadata;
- (void)_applicationsDidChange:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)_runBlockOnObservers:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)moduleMetadataForModuleIdentifier:(id)arg1;
- (void)dealloc;
- (id)_initWithDirectoryURLs:(id)arg1 whitelistedModuleIdentifiers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

