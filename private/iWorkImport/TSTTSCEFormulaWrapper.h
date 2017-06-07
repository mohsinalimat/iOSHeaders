//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTTSCEFormulaWrapper : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>
{
    struct TSCEFormula *_formula;
}

+ (id)cellDiffProperties;
@property(readonly, nonatomic) const struct TSCEFormula *formula; // @synthesize formula=_formula;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (void)didInitFromSOS;
- (id)propertiesMatchingThoseInMap:(id)arg1;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (void)applyToCell:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFormula:(const struct TSCEFormula *)arg1 fromTableModel:(id)arg2 fromCellID:(struct TSUCellCoord)arg3;
- (id)initWithFormula:(const struct TSCEFormula *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

