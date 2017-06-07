//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPDocumentRoot.h>

#import <iWorkImport/TSDScrollingAwareChangeSource-Protocol.h>
#import <iWorkImport/TSKImportExportDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString, SFUCryptoKey, TSAFunctionBrowserState, TSAShortcutController, TSCECalculationEngine, TSKCustomFormatList, TSKViewState, TSPLazyReference, TSTCustomFormatList;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSADocumentRoot : TSWPDocumentRoot <TSKImportExportDelegate, TSDScrollingAwareChangeSource>
{
    // Error parsing type: Ai, name: _needsToCaptureViewState
    NSMutableDictionary *_upgradeState;
    TSPLazyReference *_viewStateReference;
    NSMutableSet *_warnings;
    NSString *_documentLanguage;
    unsigned long long _documentLanguageWritingDirection;
    TSCECalculationEngine *_calculationEngine;
    TSAFunctionBrowserState *_functionBrowserState;
    TSTCustomFormatList *_deprecatedTablesCustomFormatList;
    TSKCustomFormatList *_tablesCustomFormatList;
    TSAShortcutController *_shortcutController;
    _Bool _didLoadControllers;
    _Bool _needsMediaCompatibilityUpgrade;
    _Bool _isClosed;
    _Bool _documentLocaleWasUpdated;
    NSString *_templateIdentifier;
    long long _documentCacheOnceToken;
    NSObject<OS_dispatch_queue> *_documentCacheDecryptionKeyAccessQueue;
    SFUCryptoKey *_documentCacheDecryptionKey;
    _Bool _documentCurrentlyImporting;
    _Bool _hasPreUFFVersion;
    _Bool _didLoadDocumentFromRevert;
    NSArray *_buildVersionHistory;
}

+ (id)persistenceWarningsForData:(id)arg1 flags:(unsigned long long)arg2;
+ (unsigned long long)previewTypeForCurrentDevice;
+ (struct CGSize)previewImageMaxSizeForType:(unsigned long long)arg1;
+ (struct CGSize)previewImageSizeForType:(unsigned long long)arg1;
+ (void)writePreviewImage:(id)arg1 group:(id)arg2 queue:(id)arg3 dataConsumerProvider:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)writePreviewImage:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(_Bool)arg3 name:(id)arg4 group:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (_Bool)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
+ (_Bool)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
+ (void)removeExistingPreviewsForDocumentAtPath:(id)arg1;
+ (_Bool)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2;
+ (_Bool)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2;
+ (id)scaledPreviewImageForType:(unsigned long long)arg1 scalableImage:(id)arg2;
+ (id)supportedPreviewImageExtensions;
+ (id)supportedScalablePreviewNames;
+ (id)buildVersionHistoryPathPreUFF;
+ (id)buildVersionHistoryPath;
+ (void)localizeChartInfo:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeTableInfo:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2;
@property(nonatomic) _Bool didLoadDocumentFromRevert; // @synthesize didLoadDocumentFromRevert=_didLoadDocumentFromRevert;
@property(nonatomic) _Bool hasPreUFFVersion; // @synthesize hasPreUFFVersion=_hasPreUFFVersion;
@property(nonatomic, getter=isDocumentCurrentlyImporting) _Bool documentCurrentlyImporting; // @synthesize documentCurrentlyImporting=_documentCurrentlyImporting;
@property(readonly, nonatomic) _Bool documentLocaleWasUpdated; // @synthesize documentLocaleWasUpdated=_documentLocaleWasUpdated;
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(copy, nonatomic) NSArray *buildVersionHistory; // @synthesize buildVersionHistory=_buildVersionHistory;
- (_Bool)isMultiPageForQuickLook;
- (_Bool)hasICloudConflict;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(_Bool)arg2;
- (id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(_Bool)arg1;
@property(readonly, nonatomic) NSString *defaultDraftName;
@property(readonly, nonatomic) NSString *name;
- (_Bool)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (void)changeDocumentCacheFileProtection:(id)arg1;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg1;
- (_Bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (void)didSaveWithEncryptionChange;
- (void)documentCacheWasInvalidated;
- (id)dataFromDocumentCachePath:(id)arg1;
- (id)p_documentCacheDecryptionKey;
- (id)p_documentCacheDecryptionKeyAccessQueue;
- (void)p_initializeDocumentCacheIfNeeded;
- (id)documentCachePath;
- (id)referencedStylesOfClass:(Class)arg1;
- (_Bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(_Bool)arg2;
- (void)removeRedundantStyleOverridesAndEnsureReferencedStylesAreInStylesheet;
- (void)upgradeToSingleStylesheet;
- (void)upgradeCellStyles;
- (void)upgradeTextboxPresets;
- (void)upgradeTextStylesForUnityPlusFromFileFormatVersion:(unsigned long long)arg1;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (void)upgradeTextStylesForUnityBeforeSingleStylesheetUpgrade;
- (void)p_cleanupColumnStyles;
- (void)enumerateStylesheetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_removeStyles:(id)arg1;
- (void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)pUpgradeHyperlinks;
- (void)pUpgradeHyperlinksInStorage:(id)arg1;
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
- (void)didDownloadRemoteData:(id)arg1;
- (void)didDownloadDocumentResources:(id)arg1 failedOrCancelledDocumentResources:(id)arg2 error:(id)arg3;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id *)arg2;
- (id)warningsByCombiningSortedWarnings:(id)arg1 withWarnings:(id)arg2;
- (long long)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2;
- (id)consolidatedDocumentWarningsFromWarnings:(id)arg1;
@property(readonly, nonatomic) NSSet *missingFontWarningMessages;
- (void)prepareToGeneratePreview;
- (id)previewImageForSize:(struct CGSize)arg1;
- (id)previewImage;
- (void)blockForRecalcWithTimeout:(double)arg1;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)resumeThumbnailing;
- (void)suspendThumbnailing;
- (void)resumeBackgroundActivities;
- (void)suspendBackgroundActivities;
- (void)resetViewState;
- (void)invalidateViewState;
- (id)createViewStateRootForContinuation:(_Bool)arg1;
- (void)p_updateViewStateWithRoot:(id)arg1;
- (void)updateViewStateWithRoot:(id)arg1;
- (id)p_captureViewStateForImport:(_Bool)arg1;
- (id)captureViewStateForImport;
- (id)captureViewState;
- (void)captureViewStateIfNeeded;
@property(readonly, nonatomic) TSKViewState *viewState;
- (void)p_upgradeTablesIfNeeded:(unsigned long long)arg1;
- (void)p_upgradeCustomFormatList;
- (id)customFormatList;
- (void)setCustomFormatListToUpgrade:(id)arg1;
- (void)setFunctionBrowserState:(id)arg1;
- (id)functionBrowserState;
- (void)setShortcutController:(id)arg1;
- (id)shortcutController;
- (void)initializeForImport;
- (void)resumeRecalculation;
- (void)pauseRecalculationSometimeSoon;
- (void)pauseRecalculation;
- (void)setCalculationEngine:(id)arg1;
- (id)calculationEngine;
- (void)willClose;
- (void)fulfillPasteboardPromises;
- (id)additionalDocumentPropertiesForWrite;
- (id)packageDataForWrite;
- (void)saveToArchive:(struct DocumentArchive *)arg1 archiver:(id)arg2;
- (void)p_iterateDrawables:(id)arg1 removeDrawableCommentBlock:(CDUnknownBlockType)arg2 removeTextCommentsBlock:(CDUnknownBlockType)arg3 removeCellCommentBlock:(CDUnknownBlockType)arg4;
- (void)loadFromArchive:(const struct DocumentArchive *)arg1 unarchiver:(id)arg2;
- (void)stashUpgradeState:(const struct DocumentArchive *)arg1 unarchiver:(id)arg2;
- (id)upgradeState;
- (void)documentDidLoad;
- (_Bool)objectsNeedToBeMigrated:(id)arg1;
- (id)makeIsolatedStyleMapper;
- (id)makeStyleMapper;
- (id)tsa_delegate;
- (void)dealloc;
- (unsigned long long)writingDirection;
- (void)updateWritingDirection:(unsigned long long)arg1;
- (void)p_upgradeDocumentCreationLocale;
- (void)p_updateDocumentLanguageToCurrent;
- (void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
@property(nonatomic) _Bool needsMediaCompatibilityUpgrade;
@property(copy, nonatomic) NSString *templateIdentifier;
- (void)setDocumentCreationLocale:(id)arg1;
- (void)setDocumentLanguage:(id)arg1;
- (id)documentLanguage;
- (id)namedTextStyles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
@property(readonly, nonatomic) NSDictionary *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
@property(readonly, nonatomic) _Bool isBrowsingVersions;
@property(readonly) Class superclass;

@end
