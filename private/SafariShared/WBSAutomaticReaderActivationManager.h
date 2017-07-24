//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSPerSitePreferenceManager.h>

#import <SafariShared/WBSPerSitePreferenceBinaryToggleItemManager-Protocol.h>
#import <SafariShared/WBSPerSitePreferenceManagerDefaultsDelegate-Protocol.h>
#import <SafariShared/WBSPerSitePreferenceManagerStorageDelegate-Protocol.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferenceValue, WBSPerSitePreferencesSQLiteStore;

@interface WBSAutomaticReaderActivationManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager>
{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreferenceValue *_doNotAutomaticallyEnableReaderOnLoad;
    WBSPerSitePreferenceValue *_automaticallyEnableReaderOnLoad;
    WBSPerSitePreference *_readerPreference;
}

@property(readonly, nonatomic) WBSPerSitePreference *readerPreference; // @synthesize readerPreference=_readerPreference;
- (void).cxx_destruct;
- (id)_defaultPreferenceValue;
- (id)_perSitePreferenceValue:(_Bool)arg1;
- (void)_submitOptInOutStateForAnalyticsGivenAutomaticReaderIsNotGloballyEnabled;
- (void)submitOptInOutStateForAnalytics;
- (void)setAutomaticReaderEnabledByDefault:(_Bool)arg1 removingExistingPreferencesForSites:(_Bool)arg2;
- (void)getAutomaticReaderEnabledByDefaultUsingBlock:(CDUnknownBlockType)arg1;
- (void)setAutomaticReaderEnabled:(_Bool)arg1 forDomain:(id)arg2;
- (void)getAutomaticReaderEnabledForDomain:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getAutomaticReaderStateForDomain:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)offValueForPreference:(id)arg1;
- (id)onValueForPreference:(id)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (id)valuesForPreference:(id)arg1;
- (id)preferences;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

