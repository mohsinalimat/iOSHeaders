//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/_UISettingsGroupObserver-Protocol.h>
#import <UIKit/_UISettingsKeyPathObserver-Protocol.h>

@class NSDictionary, NSHashTable, NSSet, NSString;

@interface _UISettings : NSObject <_UISettingsGroupObserver, _UISettingsKeyPathObserver, NSCopying>
{
    NSHashTable *_internal_keyObservers;
    NSHashTable *_internal_keyPathObservers;
    NSSet *_internal_childKeys;
    NSSet *_internal_leafKeys;
    NSDictionary *_internal_keyClasses;
    NSDictionary *_internal_keyStructs;
    _Bool _internal_isObservingPropertiesAndChildren;
}

+ (id)settingsFromArchiveFile:(id)arg1 error:(id *)arg2;
+ (id)settingsFromArchiveDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)_associatedNameOrNilIfDefault;
- (id)_associatedName;
- (void)_setAssociatedName:(id)arg1;
- (void)_sendKeyPathChanged:(id)arg1;
- (void)_sendKeyChanged:(id)arg1;
- (id)_keyForChild:(id)arg1;
- (void)_handleChildGroupChange:(id)arg1;
- (void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_introspectKeys;
- (id)_dictionaryForStructKey:(id)arg1 ofType:(id)arg2;
- (id)_structValueForKey:(id)arg1 ofType:(id)arg2 fromDictionary:(id)arg3;
- (id)_dictionaryForFontKey:(id)arg1;
- (id)_fontForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)_dictionaryForColorKey:(id)arg1;
- (id)_colorForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)_allKeys;
- (void)_stopObservingChild:(id)arg1;
- (void)_startObservingChild:(id)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (_Bool)_isObservingPropertiesAndChildren;
- (void)_startOrStopObservingPropertiesAndChildren;
- (void)_stopObservingPropertiesAndChildren;
- (void)_startObservingPropertiesAndChildren;
- (_Bool)_hasObservers;
- (id)archiveValueForKey:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)setDefaultValues;
- (void)removeKeyPathObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)removeKeyObserver:(id)arg1;
- (void)addKeyObserver:(id)arg1;
- (_Bool)restoreFromArchiveFile:(id)arg1 error:(id *)arg2;
- (void)restoreFromArchiveDictionary:(id)arg1;
- (void)restoreDefaultValues;
- (_Bool)archiveToFile:(id)arg1 error:(id *)arg2;
- (id)archiveDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDefaultValues;
- (id)init;
- (void)_completeInitByApplyingArchiveDictionary:(id)arg1;
- (void)_continueInitBySettingDefaultValues;
- (id)_startInit;
- (id)_initWithArchiveDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

