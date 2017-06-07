//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MDM/SUManagerClientDelegate-Protocol.h>

@class NSString, SUDescriptor, SUDownload, SUManagerClient, SUMutableDownloadMetadata;
@protocol MCSoftwareUpdateManagerDelegate;

@interface MCSoftwareUpdateManager : NSObject <SUManagerClientDelegate>
{
    _Bool _manuallyStartedScan;
    _Bool _anyScanInProgress;
    int _state;
    SUManagerClient *_suManagerClient;
    id <MCSoftwareUpdateManagerDelegate> _delegate;
    SUDescriptor *_update;
    SUDownload *_download;
    SUMutableDownloadMetadata *_downloadMetadata;
}

@property(retain, nonatomic) SUMutableDownloadMetadata *downloadMetadata; // @synthesize downloadMetadata=_downloadMetadata;
@property(retain, nonatomic) SUDownload *download; // @synthesize download=_download;
@property(retain, nonatomic) SUDescriptor *update; // @synthesize update=_update;
@property(nonatomic) __weak id <MCSoftwareUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) SUManagerClient *suManagerClient; // @synthesize suManagerClient=_suManagerClient;
- (void).cxx_destruct;
- (void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;
- (void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 downloadDidFinish:(id)arg2;
- (void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
- (void)client:(id)arg1 downloadDidStart:(id)arg2;
- (void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3;
- (void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;
- (void)scanFinishedWithUpdate:(id)arg1 error:(id)arg2;
- (void)updateStateFromDownload:(id)arg1;
- (_Bool)_SUDownloadPhaseIsQueued:(id)arg1;
- (void)scanForUpdateCompletion:(CDUnknownBlockType)arg1;
- (void)startDownload;
- (void)refreshState;
- (void)_setState:(int)arg1 error:(id)arg2;
- (void)dealloc;
- (id)init;
- (Class)managerClientClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

