//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentManager/DOCKeyCommandRegistryHostProxyProtocol-Protocol.h>

@class DOCItem, NSArray, NSError, NSString, NSURL, NSUUID;
@protocol DOCServicePopoverTrackerProtocol;

@protocol DOCHostDocumentBrowserViewControllerInterface <DOCKeyCommandRegistryHostProxyProtocol>
- (void)_presentActivityViewControllerForItems:(NSArray *)arg1 withPopoverTracker:(id <DOCServicePopoverTrackerProtocol>)arg2;
- (void)_updateRemoteBarButtonFrames:(NSArray *)arg1 forUUID:(NSArray *)arg2;
- (void)_failedToImportDocumentAtURL:(NSURL *)arg1 error:(NSError *)arg2;
- (void)_didImportDocumentAtURL:(NSURL *)arg1 toDestinationItem:(DOCItem *)arg2;
- (void)_didRequestDocumentCreationWithHandler:(void (^)(FPSandboxingURLWrapper *, unsigned long long))arg1;
- (void)_commitDocumentURLPreview:(DOCItem *)arg1;
- (void)_didPickItems:(NSArray *)arg1;
- (void)_didTriggerBarButtonWithUUID:(NSUUID *)arg1;
- (void)_didTriggerActionWithIdentifier:(NSString *)arg1 onItems:(NSArray *)arg2;
@end

