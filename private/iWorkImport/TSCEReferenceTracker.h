//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSCEFormulaOwning-Protocol.h>

@class NSLock, NSMutableArray, NSString, TSCECalculationEngine;
@protocol TSCEReferenceTrackerDelegate;

__attribute__((visibility("hidden")))
@interface TSCEReferenceTracker : TSPObject <TSCEFormulaOwning>
{
    struct __CFUUID *mUUID;
    TSCECalculationEngine *mCalculationEngine;
    _Bool mIsRegisteredWithCalculationEngine;
    id <TSCEReferenceTrackerDelegate> mDelegate;
    NSLock *mTrackedRefsLock;
    NSMutableArray *mTrackedReferences;
    unsigned long long mNextEmptyTrackedReferencesIndex;
    unsigned long long mNumberOfTrackedReferences;
    struct vector<TSCEFormulaID, std::__1::allocator<TSCEFormulaID>> mFormulaIDsToRewrite;
}

@property(readonly, nonatomic) id <TSCEReferenceTrackerDelegate> delegate; // @synthesize delegate=mDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (_Bool)trackedReferencesExistForTable:(struct __CFUUID *)arg1;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(struct __CFUUID *)arg2;
- (id)cellRangeWasInserted:(CDStruct_fc93c73e)arg1;
- (id)trackedReferenceAtID:(CDStruct_a91f2c80)arg1;
- (void)setFormulaOwnerID:(struct __CFUUID *)arg1;
- (struct __CFUUID *)formulaOwnerID;
- (unsigned long long)numberOfTrackedReferences;
- (id)allTrackedReferences;
- (void)endTrackingReference:(id)arg1;
- (id)beginTrackingReferenceWithCReference:(struct TSCECReference)arg1;
- (void)beginTrackingReference:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)calculationEngine;
- (void)setCalculationEngine:(id)arg1;
- (void)unregisterFromCalculationEngine;
- (void)registerWithCalculationEngine:(_Bool)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 delegate:(id)arg3;
- (id)objectToArchiveInDependencyTracker;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)retainForCalculationEngine:(id)arg1;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 rewriteSpec:(id)arg3;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;
- (CDStruct_22e7ec3e)recalculateForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 isInCycle:(_Bool)arg3 hasCalculatedPrecedents:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

