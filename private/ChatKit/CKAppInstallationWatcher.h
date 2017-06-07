//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CKAppInstallationWatcher : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    _Bool _observingApplicationWorkspace;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_installations;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool observingApplicationWorkspace; // @synthesize observingApplicationWorkspace=_observingApplicationWorkspace;
@property(retain, nonatomic) NSMutableArray *installations; // @synthesize installations=_installations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
@property(readonly, nonatomic) NSArray *inProgressInstallations;
- (void)_callDelegateAsynchronouslyWithProgressForAppInstallation:(id)arg1 added:(_Bool)arg2 updated:(_Bool)arg3;
- (void)_updateAppProgressWithKnownChangedProxiesLocked:(id)arg1;
- (void)_updateAppProgressWithKnownChangedProxies:(id)arg1;
- (void)_updateObservingApplicationWorkspaceLocked;
- (void)_saveBundleIdentifiersToDiskLocked;
- (void)_loadBundleIdentifiersFromDiskLocked;
- (id)_applicationWorkspace;
- (void)fetchAllAppInstallations:(CDUnknownBlockType)arg1;
- (void)startListeningForAppBundleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

