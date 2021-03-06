//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSManager, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NGSInternalSettingsManager : NSObject
{
    NSMutableArray *_glanceDefinitions;
    NSMutableDictionary *_installStatesByGlanceID;
    NPSManager *_syncManager;
    NSArray *_storedSettings;
    NSString *_selectedGlanceIdentifier;
    NSArray *_blacklistedWatchKitIDs;
    _Bool _hasSettings;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_willSaveGlanceDefinitions;
- (_Bool)_shouldMergeGlanceDefinitions;
- (_Bool)_shouldSortGlanceDefinitions;
- (_Bool)_shouldSaveGlanceDefinitions;
- (void)_mergeAdditionalGlanceDefinitionsIntoArray:(id)arg1;
- (void)_loadBlacklistedWatchKitIDs;
- (void)_sortGlanceDefinitions:(id)arg1;
- (id)_storedSettingsRepresentationFromGlanceDefinitions:(id)arg1;
- (unsigned long long)_numberOfActiveGlances;
- (void)_saveSettings:(id)arg1;
- (void)_saveSettings;
- (void)_sortGlanceDefinitions;
- (void)sortGlanceDefinitions;
- (_Bool)hasMaximumNumberOfActiveGlances;
- (void)didLoadGlanceDefinitions;
- (void)willSaveGlanceDefinitions;
- (void)loadSettings;
- (void)invalidateAndReloadSettings;
- (_Bool)isWatchKitBundleIDBlacklisted:(id)arg1;
- (id)glanceIdentifierForGlanceDefinitionAtIndex:(unsigned long long)arg1;
- (void)saveSettings;
- (id)glanceDefinitionForWatchKitIdentifier:(id)arg1;
- (id)glanceDefinitionForGlanceIdentifier:(id)arg1;
- (id)glanceDefinitionForAppBundleIdentifier:(id)arg1;
- (void)moveGlanceDefinitionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)enumerateAllGlanceDefinitionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateGlanceDefinitionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeGlanceDefinitionsInArray:(id)arg1;
- (void)addGlanceDefinition:(id)arg1;
- (_Bool)_hasSettings;
@property(readonly, nonatomic) _Bool hasSettings;
@property(copy, nonatomic) NSString *selectedGlanceIdentifier;
- (unsigned long long)_glanceCount;
@property(readonly, nonatomic) unsigned long long glanceCount;
- (id)glanceDefinitions;
- (id)init;

@end

