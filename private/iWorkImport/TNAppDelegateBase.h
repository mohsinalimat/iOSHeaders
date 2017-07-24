//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSABaseApplicationDelegate.h>

@class NSArray, TSUColor;

__attribute__((visibility("hidden")))
@interface TNAppDelegateBase : TSABaseApplicationDelegate
{
    TSUColor *_numbersKeyColor;
}

@property(readonly, nonatomic) TSUColor *numbersKeyColor; // @synthesize numbersKeyColor=_numbersKeyColor;
- (id)bladerunnerContainerIdentifier;
- (id)cloudKitContainerIdentifier;
- (void)p_inputMethodsChanged:(id)arg1;
- (_Bool)supportsRTL;
- (id)stringForOwnerHasCollabEnabledMessage;
- (id)stringForOwnerHasCollabEnabledTitle;
- (id)stringForBoxCollaborationOptInLearnMoreURL;
- (id)stringForBoxCollaborationOptInTermsOfServiceURL;
- (id)stringForBoxCollaborationOptInMessage;
- (id)stringForCouldntCreatePDFTitle;
- (id)stringForCloseDocumentConfirmationWillContinueToUpdateInformativeText;
- (id)stringForCloseDocumentConfirmationAlertMessage;
- (id)stringForApplicationUpdateError;
- (id)stringForCollaborationConnecting;
- (id)stringForCollaborationOnline;
- (id)stringForGenericServerUnreachable;
- (id)stringForICloudUnreachable;
- (id)stringForCollaborationOffline;
- (id)stringForRemoveLastPrivateParticipantAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationTitle;
- (id)stringForStopSharingAlertConfirmationMessage;
- (id)stringForStopSharingAlertConfirmationTitle;
- (id)stringForLearnMoreSharingURL;
- (id)sharedAlertMessageWithUserName:(id)arg1;
- (id)sharedReadOnlyAlertMessageWithUserName:(id)arg1;
- (id)stringForCollaboratorsBlockedWhileOffline;
- (id)stringForRemoteVersionRestorationWithUnsavedChangesAlertMessage;
- (id)stringForRemoteVersionRestorationAlertMessage;
- (id)stringForDocumentUpdatedByOwnerWithKeepDetails;
- (id)stringForDocumentUpdatedByOwnerDetails;
- (id)stringForDocumentUpdated;
- (id)stringForDocumentUpdatedTitle;
- (id)stringForCloseDocument;
- (id)stringForOwnerPasswordOnConflictAlertMessage;
- (id)stringForOwnerPasswordOnConflictAlertTitle;
- (id)stringForCollaborator1_6ConflictWithKeepDetails;
- (id)stringForCollaborator1_6ConflictDetails;
- (id)stringForCollaboratorConflictWithKeepDetails;
- (id)stringForCollaboratorConflictDetails;
- (id)stringForCollaboratorConflict;
- (id)stringForUpdatingDocument;
- (id)templateTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)documentTypeDisplayName;
- (id)defaultAppStoreURLString;
- (id)applicationName;
- (unsigned long long)applicationType;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateSFFDocumentType;
- (id)templateDocumentType;
- (id)nativeDocumentType;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (id)universalPreviewImageNameForDocumentType:(id)arg1;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg1;
- (id)appChartPropertyOverrides;
@property(readonly, nonatomic) NSArray *excelDocumentTypes;
- (id)importableDocumentTypes;
- (Class)documentViewControllerClass;
- (id)createCompatibilityDelegate;
- (Class)documentRootClass;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)configureSharedCode;
- (void)registerClassTypeMappings;
- (id)init;

@end

