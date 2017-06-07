//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CKRecordID, HMDBackingStoreLocal, HMDHome, HMDHomeManager, HMDObjectLookup, NSString;
@protocol HMDBackingStoreObjectProtocol;

@interface HMDBackingStore : HMFObject <HMFLogging>
{
    id <HMDBackingStoreObjectProtocol> _delegate;
    CKRecordID *_root;
    HMDBackingStoreLocal *_local;
    HMDHomeManager *_homeManager;
    HMDHome *_home;
    HMDObjectLookup *_lookup;
}

+ (id)logCategory;
+ (id)flushBackingStore;
+ (id)allowedTypes;
+ (void)start;
@property(retain, nonatomic) HMDObjectLookup *lookup; // @synthesize lookup=_lookup;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDBackingStoreLocal *local; // @synthesize local=_local;
@property(readonly, nonatomic) CKRecordID *root; // @synthesize root=_root;
@property(nonatomic) __weak id <HMDBackingStoreObjectProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)submitBlock:(CDUnknownBlockType)arg1;
- (void)saveToPersistentStoreWithReason:(id)arg1;
- (id)dumpState;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (void)registerObject:(id)arg1 forUUID:(id)arg2;
- (void)submit:(id)arg1;
- (void)commit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)transaction:(id)arg1 options:(id)arg2;
- (id)transactionWithOptions:(id)arg1;
- (id)initWithUUID:(id)arg1 home:(id)arg2;
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
