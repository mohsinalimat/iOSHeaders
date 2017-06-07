//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSString, WLKChannelDetails;
@protocol OS_dispatch_queue;

@interface _WLKAppInstallSession : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressHandler;
    WLKChannelDetails *_channel;
}

+ (id)_matchingAppProxyFromProxies:(id)arg1 forChannel:(id)arg2;
@property(readonly, nonatomic) WLKChannelDetails *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (_Bool)_canOpenAppWithBundleID:(id)arg1;
- (void)_sendCompletionWithError:(id)arg1;
- (void)beginInstallationWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)dealloc;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

