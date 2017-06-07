//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKTransformableObject-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, TSUMutableRetainedPointerSet, TSURetainedPointerKeyDictionary, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSSStylesheet : TSPObject <TSKTransformableObject>
{
    TSSStylesheet *mParent;
    TSSStylesheet *mChild;
    TSUMutableRetainedPointerSet *mStyles;
    NSMutableDictionary *mIdentifierToStyleMap;
    TSURetainedPointerKeyDictionary *mParentToChildrenStyleMap;
    NSMutableDictionary *mUUIDToStyleMap;
    _Bool mIsLocked;
    _Bool mCanCullStyles;
    _Bool mBaseStyleSetUpdated;
}

+ (id)variationMapForVaryingCharacterStyle:(id)arg1 overParagraphStyle:(id)arg2 withPropertyMap:(id)arg3;
+ (id)p_presenterNotesListStyleIdentifierForListLabelType:(int)arg1;
+ (id)presenterNotesParagraphStyleIdentifier;
@property(readonly, nonatomic) TSSStylesheet *child; // @synthesize child=mChild;
@property(readonly, nonatomic) TSSStylesheet *parent; // @synthesize parent=mParent;
- (id)unusedStyleIdentifierWithPackageString:(id)arg1 styleDescriptor:(id)arg2 contentTag:(id)arg3;
- (void)style:(id)arg1 didChangeUUIDToValue:(id)arg2 fromValue:(id)arg3;
- (id)pVariationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (void)p_removeStyleFromParentChildren:(id)arg1;
- (void)p_addStyleToParentChildren:(id)arg1;
- (void)p_setParent:(id)arg1 ofStyle:(id)arg2;
- (void)p_setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (void)p_removeStyle:(id)arg1;
- (void)p_addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3 shouldDoDOLC:(_Bool)arg4;
- (void)p_addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (_Bool)p_shouldDoDOLCForStyle:(id)arg1;
- (void)unlockStylesheetForDurationOfBlock:(CDUnknownBlockType)arg1;
- (id)styleWithUUIDIfAvailable:(id)arg1;
- (void)moveAllStylestoStylesheet:(id)arg1 stripIdentifiers:(_Bool)arg2;
- (void)moveStyle:(id)arg1 toStylesheet:(id)arg2 stripIdentifiers:(_Bool)arg3 overwriteIdentifiers:(_Bool)arg4;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (id)variationOfStyle:(id)arg1 exactPropertyMap:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 context:(id)arg3;
- (id)variationOfStyleMatchingStyle:(id)arg1 withNewParentStyle:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2;
- (id)firstRootlessStyleOfClass:(Class)arg1 withOverridePropertyMap:(id)arg2;
- (id)namedStylesOfClass:(Class)arg1;
- (id)firstCascadedStylePassingTest:(CDUnknownBlockType)arg1;
- (id)cascadedStylesPassingTest:(CDUnknownBlockType)arg1;
- (id)stylesPassingTest:(CDUnknownBlockType)arg1;
- (void)resetBaseStyleSetUpdatedFlag;
@property(readonly, nonatomic) _Bool baseStyleSetUpdated;
@property(readonly, nonatomic) NSSet *baseStyles;
- (id)p_stylesPassingTest:(CDUnknownBlockType)arg1 cascade:(_Bool)arg2;
- (void)enumerateCascadedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)identifiedStylesOfClass:(Class)arg1;
- (id)identifiedStyles;
- (id)stylesOfClass:(Class)arg1;
- (id)stylesWithName:(id)arg1;
- (id)childrenOfStyle:(id)arg1;
- (void)setParent:(id)arg1 ofStyle:(id)arg2;
- (void)setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (id)cascadedStyleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)styleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)cascadedStyleWithIdentifier:(id)arg1;
- (id)styleWithIdentifier:(id)arg1;
- (_Bool)cascadedContainsStyle:(id)arg1;
- (_Bool)containsStyle:(id)arg1;
- (void)removeStyle:(id)arg1;
- (void)addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3 shouldDoDOLC:(_Bool)arg4;
- (void)addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (void)addStyle:(id)arg1 withParent:(id)arg2;
- (void)addStyle:(id)arg1 withIdentifier:(id)arg2;
- (void)addStyle:(id)arg1;
- (unsigned long long)descendantCount;
- (id)rootAncestor;
- (_Bool)isAncestorOf:(id)arg1;
- (_Bool)isDescendentOf:(id)arg1;
- (_Bool)isParentOf:(id)arg1;
- (_Bool)isChildOf:(id)arg1;
- (void)setParent:(id)arg1 withParentStyleMap:(struct __CFDictionary *)arg2;
- (void)setParent:(id)arg1;
@property(readonly, nonatomic) NSSet *styles;
@property(nonatomic) _Bool canCullStyles;
@property(nonatomic) _Bool isLocked;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 canCullStyles:(_Bool)arg2;
- (id)addDuplicateOfStyle:(id)arg1 withIdentifier:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveStyles:(id)arg1 toArchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (unsigned int)delayedArchivingPriority;
- (_Bool)shouldDelayArchiving;
- (set_713dd2e1 *)p_allFilteredIdentifiersInArchive:(const struct StylesheetArchive *)arg1 unarchiver:(id)arg2;
- (id)headerAndFooterStyle;
- (id)defaultColumnStyle;
- (id)defaultParagraphStyle;
- (id)defaultListStyle;
- (id)hyperlinkStyle;
- (id)defaultCharacterStyle;
- (id)variationOfCharacterStyle:(id)arg1 paragraphStyle:(id)arg2 propertyMap:(id)arg3;
- (id)_defaultStyleOfClass:(Class)arg1 withIdentifier:(id)arg2 wasCreated:(_Bool *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)_defaultColumnStyleWasCreated:(_Bool *)arg1;
- (id)_defaultListStyleWasCreated:(_Bool *)arg1;
- (id)_defaultParagraphStyleWasCreated:(_Bool *)arg1;
- (id)_hyperlinkStyleWasCreated:(_Bool *)arg1;
- (id)_defaultCharacterStyleWasCreated:(_Bool *)arg1;
- (id)allPresenterNotesStyles;
- (id)p_newDefaultPresenterNotesListStyleWithContext:(id)arg1 forListLabelType:(int)arg2;
- (id)p_defaultPresenterNotesListStylePropertyMapForListLabelType:(int)arg1;
- (id)p_defaultPresenterNotesParagraphStyleWithContext:(id)arg1;
- (id)p_defaultPresenterNotesParagraphStylePropertyMap;
- (void)p_upgradeDefaultPresenterNotesStylesResetExisting:(_Bool)arg1;
- (id)p_boxedLabelTypesForNotesListStyles;
- (void)upgradeDefaultPresenterNotesStyles;
- (void)addDefaultPresenterNotesStylesIfAbsent;
@property(readonly, nonatomic) TSWPParagraphStyle *defaultPresenterNotesParagraphStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

