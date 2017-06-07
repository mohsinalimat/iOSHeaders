//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSUUID, TSCHStyleOwnerReference, TSCHStyleSemanticTag, TSPObject, TSSPropertyMap, TSSPropertySet, TSSStyle;
@protocol TSCHStyleSwapSupporting;

__attribute__((visibility("hidden")))
@interface TSCHStyleSwapUndoTuple : NSObject
{
    TSSStyle *mOldValue;
    TSSStyle *mNewValue;
    int mSwapType;
    int mIndex;
    NSUUID *mRefLineUUID;
    TSPObject<TSCHStyleSwapSupporting> *mStyleSwapSupporting;
    TSSPropertySet *mMutatedProperties;
}

+ (id)convertedSwapTuplesForSwapTuples:(id)arg1 chartInfo:(id)arg2;
+ (_Bool)hasSwapTuplesRequiringConversion:(id)arg1;
+ (id)migratedSwapTuplesForSwapTuples:(id)arg1 documentRoot:(id)arg2;
@property(readonly) NSUUID *refLineUUID; // @synthesize refLineUUID=mRefLineUUID;
@property(readonly) int swapType; // @synthesize swapType=mSwapType;
@property(readonly) TSSStyle *afterValue; // @synthesize afterValue=mNewValue;
@property(readonly) TSSStyle *beforeValue; // @synthesize beforeValue=mOldValue;
@property(readonly, retain, nonatomic) TSPObject<TSCHStyleSwapSupporting> *styleSwapSupporting; // @synthesize styleSwapSupporting=mStyleSwapSupporting;
- (id)convertedSwapTupleForChartInfo:(id)arg1;
- (id)migratedSwapTupleForDocumentRoot:(id)arg1;
- (id)migratedStyleForStyle:(id)arg1 documentRoot:(id)arg2;
@property(readonly) TSSPropertyMap *reverseDelta;
@property(readonly) TSSPropertyMap *forwardDelta;
- (id)p_deltaFrom:(id)arg1 to:(id)arg2;
@property(readonly) TSCHStyleOwnerReference *styleOwnerReference;
@property(readonly) TSCHStyleSemanticTag *semanticTag;
- (_Bool)canApplyTupleToStyleSwapSupporting:(id)arg1;
- (id)description;
@property(readonly) TSSPropertySet *mutatedProperties;
- (id)p_nonequalPropertiesFromMap:(id)arg1 toMap:(id)arg2;
@property(readonly) unsigned long long index;
- (unsigned long long)hash;
- (_Bool)isSwappingSameStyleValues:(id)arg1;
- (_Bool)isSwappingSameStyleObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)inverse;
- (void)dealloc;
- (id)initFromSOSWithSwapType:(int)arg1 index:(unsigned long long)arg2 oldValue:(id)arg3 newValue:(id)arg4 refLineUUID:(id)arg5;
- (id)initWithChartStylePreset:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;
- (id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;
- (id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 refLineUUID:(id)arg6;
- (id)p_initWithPersistentStyleSwapSupporting:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 refLineUUID:(id)arg6;
- (id)initWithArchive:(const struct StyleSwapUndoTupleArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct StyleSwapUndoTupleArchive *)arg1 archiver:(id)arg2;

@end

