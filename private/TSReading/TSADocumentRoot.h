//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSKDocumentRoot.h>

#import <TSReading/TSKImportExportDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, TSADrawableFactory, TSTCustomFormatList;
@protocol TSADocumentRootDelegate;

@interface TSADocumentRoot : TSKDocumentRoot <TSKImportExportDelegate>
{
    int _needsToCaptureViewState;
    id <TSADocumentRootDelegate> _delegate;
    NSMutableDictionary *_upgradeState;
    NSMutableSet *_warnings;
    NSString *_creationLanguage;
    unsigned long long _creationLanguageWritingDirection;
    TSTCustomFormatList *_tablesCustomFormatList;
    _Bool _needsMovieCompatibilityUpgrade;
    _Bool _isClosed;
    NSString *_templateIdentifier;
    _Bool _hasPreUFFVersion;
}

+ (id)persistenceWarningsForData:(id)arg1 isReadable:(_Bool)arg2 isExternal:(_Bool)arg3;
@property(nonatomic) _Bool hasPreUFFVersion; // @synthesize hasPreUFFVersion=_hasPreUFFVersion;
@property(nonatomic) id <TSADocumentRootDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isMultiPageForQuickLook;
- (_Bool)hasICloudConflict;
- (long long)addObserverForICloudTeardownWithBlock:(CDUnknownBlockType)arg1;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(_Bool)arg2;
@property(readonly, nonatomic) TSADrawableFactory *drawableFactory;
@property(readonly, nonatomic, getter=isDocumentEditedSinceLastSave) _Bool documentEditedSinceLastSave;
@property(readonly, nonatomic) NSString *defaultDraftName;
@property(readonly, nonatomic) NSString *name;
- (void)changeDocumentCacheFileProtection:(id)arg1;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg1;
- (_Bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (void)didSaveWithEncryptionChange;
- (id)dataFromDocumentCachePath:(id)arg1;
- (id)documentCachePath;
- (id)referencedStylesOfClass:(Class)arg1;
- (_Bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(_Bool)arg2;
- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_removeStyles:(id)arg1;
- (void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)pUpgradeHyperlinks;
- (void)pUpgradeHyperlinksInStorage:(id)arg1;
- (id)p_characterStyleWithProperties:(id)arg1 stylesheet:(id)arg2 override:(id)arg3;
- (id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(_Bool *)arg2 number:(unsigned long long *)arg3;
- (void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(_Bool)arg2;
- (id)protected_defaultTextPresetOrdering;
- (void)prepareForSavingAsTemplate;
- (void)removeWarning:(id)arg1;
- (void)addWarning:(id)arg1;
- (id)warnings;
- (_Bool)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (_Bool)exportToPath:(id)arg1 exporter:(id)arg2 error:(id *)arg3;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id *)arg3;
- (void)importerDidFinish:(id)arg1;
- (void)p_registerAllFormulasAfterImport;
- (void)didDownloadDocumentResources:(id)arg1 failedOrCancelledDocumentResources:(id)arg2 error:(id)arg3;
@property(readonly, nonatomic) NSSet *missingFontWarningMessages;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)resumeThumbnailing;
- (void)suspendThumbnailing;
- (void)resumeBackgroundActivities;
- (void)suspendBackgroundActivities;
- (void)setCustomFormatList:(id)arg1;
- (id)customFormatList;
- (void)initializeForImport;
- (void)willClose;
- (void)fulfillPasteboardPromises;
- (id)additionalDocumentPropertiesForWrite;
- (id)packageDataForWrite;
- (void)documentDidSave;
- (id)upgradeState;
- (void)documentDidLoad;
- (void)dealloc;
- (unsigned long long)writingDirection;
- (void)updateWritingDirection:(unsigned long long)arg1;
- (void)p_updateCreationLanguage;
- (void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
@property(nonatomic) _Bool needsMovieCompatibilityUpgrade;
@property(copy, nonatomic) NSString *templateIdentifier;
- (void)setCreationLanguage:(id)arg1;
- (id)creationLanguage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool importingDesignDemoDoc;
@property(readonly, nonatomic) _Bool isBrowsingVersions;
@property(readonly) Class superclass;

@end

