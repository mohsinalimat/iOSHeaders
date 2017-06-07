//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DAFolder, DAFolderChange, DAMailboxRequest, DAMessageFetchAttachmentRequest, DAResolveRecipientsRequest, DASearchQuery, NSArray, NSData, NSNotification, NSSet, NSString;
@protocol DAMailboxFetchSearchResultConsumer, DAMailboxRequestConsumer, DAMessageFetchAttachmentConsumer, DAMessageMoveRequestConsumer, DAMessageSendConsumer, DAResolveRecipientsConsumer;

@protocol ASAccountActorMessages
- (oneway void)_accountPasswordChanged;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(NSNotification *)arg1;
- (oneway void)_daemonDiedNotification:(NSNotification *)arg1;
- (oneway void)_newASPolicyKeyNotification:(NSNotification *)arg1;
- (NSString *)unactionableICSRepresentationForMetaData:(NSData *)arg1 inFolderWithId:(NSString *)arg2 outSummary:(id *)arg3;
- (_Bool)reattemptInvitationLinkageForMetaData:(NSData *)arg1 inFolderWithId:(NSString *)arg2;
- (DAFolder *)draftsFolder;
- (DAFolder *)deletedItemsFolder;
- (DAFolder *)sentItemsFolder;
- (DAFolder *)inboxFolder;
- (void)performFolderChange:(DAFolderChange *)arg1 isUserRequested:(_Bool)arg2;
- (int)performResolveRecipientsRequest:(DAResolveRecipientsRequest *)arg1 consumer:(id <DAResolveRecipientsConsumer>)arg2;
- (int)performFetchMessageSearchResultRequests:(NSArray *)arg1 consumer:(id <DAMailboxFetchSearchResultConsumer>)arg2;
- (int)performFetchAttachmentRequest:(DAMessageFetchAttachmentRequest *)arg1 consumer:(id <DAMessageFetchAttachmentConsumer>)arg2;
- (int)performMoveRequests:(NSArray *)arg1 consumer:(id <DAMessageMoveRequestConsumer>)arg2;
- (int)performMailboxRequests:(NSArray *)arg1 mailbox:(NSString *)arg2 previousTag:(NSString *)arg3 isUserRequested:(_Bool)arg4 consumer:(id <DAMailboxRequestConsumer>)arg5;
- (int)performMailboxRequest:(DAMailboxRequest *)arg1 mailbox:(NSString *)arg2 previousTag:(NSString *)arg3 isUserRequested:(_Bool)arg4 consumer:(id <DAMailboxRequestConsumer>)arg5;
- (int)sendSmartMessageWithRFC822Data:(NSData *)arg1 messageID:(NSString *)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(NSString *)arg4 originalMessageItemID:(NSString *)arg5 originalMessageLongID:(NSString *)arg6 originalAccountID:(NSString *)arg7 replaceOriginalMime:(_Bool)arg8 isUserRequested:(_Bool)arg9 consumer:(id <DAMessageSendConsumer>)arg10 context:(id)arg11;
- (int)sendMessageWithRFC822Data:(NSData *)arg1 messageID:(NSString *)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(NSString *)arg4 originalMessageItemID:(NSString *)arg5 originalMessageLongID:(NSString *)arg6 originalAccountID:(NSString *)arg7 useSmartTasksIfPossible:(_Bool)arg8 isUserRequested:(_Bool)arg9 consumer:(id <DAMessageSendConsumer>)arg10 context:(id)arg11;
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(NSSet *)arg1 deleted:(NSSet *)arg2 foldersTag:(NSString *)arg3;
- (NSSet *)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id *)arg2;
- (NSSet *)folderIDsThatExternalClientsCareAboutWithTag:(id *)arg1;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)stopMonitoringFoldersForUpdates:(NSArray *)arg1;
- (oneway void)monitorFoldersForUpdates:(NSArray *)arg1 persistent:(_Bool)arg2;
- (oneway void)monitorFoldersForUpdates:(NSArray *)arg1;
- (oneway void)setCustomSignature:(NSString *)arg1;
- (NSString *)customSignature;
- (oneway void)setEncryptionIdentityPersistentReference:(NSData *)arg1;
- (NSData *)encryptionIdentityPersistentReference;
- (oneway void)setSigningIdentityPersistentReference:(NSData *)arg1;
- (NSData *)signingIdentityPersistentReference;
- (oneway void)setGeneratesBulletins:(_Bool)arg1;
- (_Bool)generatesBulletins;
- (int)supportsSmartForwardReply;
- (int)supportsDraftFolderSync;
- (int)supportsConversations;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (int)mailNumberOfPastDaysToSync;
- (NSArray *)mailboxes;
- (oneway void)shutdown;
- (oneway void)setAccount:(id)arg1;
- (oneway void)startup;
- (_Bool)searchQueriesRunning;
- (oneway void)cancelAllSearchQueries;
- (oneway void)cancelSearchQuery:(DASearchQuery *)arg1;
- (oneway void)performSearchQuery:(DASearchQuery *)arg1;
- (oneway void)cancelTaskWithID:(int)arg1;
@end

