//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTCellIterator.h>

@class TSTCell, TSTMasterLayout, TSTMutableCellIteratorData;
@protocol TSTCellIteratorData;

__attribute__((visibility("hidden")))
@interface TSTLayoutCellIterator : TSTCellIterator
{
    _Bool _queriedModel;
    _Bool _modelIteratorHasCell;
    unsigned short _numberOfLayoutColumns;
    unsigned short _numberOfColumns;
    unsigned short _numberOfRows;
    struct TSUCellCoord _layoutCellID;
    TSTMasterLayout *_masterLayout;
    struct TSUCellRect _layoutRange;
    TSTCell *_layoutCell;
    TSTMutableCellIteratorData *_layoutCellData;
    id <TSTCellIteratorData> _modelIteratorData;
}

@property(nonatomic) id <TSTCellIteratorData> modelIteratorData; // @synthesize modelIteratorData=_modelIteratorData;
@property(retain, nonatomic) TSTMutableCellIteratorData *layoutCellData; // @synthesize layoutCellData=_layoutCellData;
@property(nonatomic) unsigned short numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) unsigned short numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) unsigned short numberOfLayoutColumns; // @synthesize numberOfLayoutColumns=_numberOfLayoutColumns;
@property(nonatomic) _Bool modelIteratorHasCell; // @synthesize modelIteratorHasCell=_modelIteratorHasCell;
@property(nonatomic) _Bool queriedModel; // @synthesize queriedModel=_queriedModel;
@property(readonly, nonatomic) TSTCell *layoutCell; // @synthesize layoutCell=_layoutCell;
@property(readonly, nonatomic) struct TSUCellCoord layoutCellID; // @synthesize layoutCellID=_layoutCellID;
@property(readonly, nonatomic) struct TSUCellRect layoutRange; // @synthesize layoutRange=_layoutRange;
@property(readonly, retain, nonatomic) TSTMasterLayout *masterLayout; // @synthesize masterLayout=_masterLayout;
- (void).cxx_destruct;
- (_Bool)getNextCellData:(id *)arg1;
- (id)initWithMasterLayout:(id)arg1 range:(struct TSUCellRect)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;
- (id)initWithLayout:(id)arg1 range:(struct TSUCellRect)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;

@end

