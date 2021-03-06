//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class PSSearchEntry;
@protocol PSSearchIndexOperationDelegate;

@interface PSSearchIndexOperation : NSOperation
{
    PSSearchEntry *_searchEntry;
    id <PSSearchIndexOperationDelegate> _delegate;
}

+ (void)setTopLevelManifestBundlePath:(id)arg1;
+ (id)topLevelManifestBundlePath;
+ (void)setPossibleBundleRoots:(id)arg1;
+ (id)possibleBundleRoots;
+ (id)_loadSearchEntriesFromPlistForEntry:(id)arg1 bundle:(id)arg2;
+ (id)_loadThirdPartySearchEntriesForEntry:(id)arg1 bundle:(id)arg2;
+ (id)_bundleForSearchEntry:(id)arg1 thirdPartyApp:(_Bool *)arg2;
@property __weak id <PSSearchIndexOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PSSearchEntry *searchEntry; // @synthesize searchEntry=_searchEntry;
- (void).cxx_destruct;
- (void)main;
- (void)_cancel;
- (void)_finishedIndexingWithEntries:(id)arg1 cancelled:(_Bool)arg2;
- (void)dealloc;
- (id)initWithSearchEntry:(id)arg1 delegate:(id)arg2;

@end

