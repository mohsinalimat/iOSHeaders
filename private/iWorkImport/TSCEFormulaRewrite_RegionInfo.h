//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCEFormulaRewrite_Uids;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewrite_RegionInfo : NSObject
{
    struct __CFUUID *_tableID;
    UUIDData_5fbc143e _tableUID;
    struct __CFUUID *_condStyleOwnerID;
    UUIDData_5fbc143e _condStyleOwnerUID;
    TSCEFormulaRewrite_Uids *_columnUids;
    TSCEFormulaRewrite_Uids *_rowUids;
}

@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *rowUids; // @synthesize rowUids=_rowUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *columnUids; // @synthesize columnUids=_columnUids;
@property(readonly, nonatomic) UUIDData_5fbc143e condStyleOwnerUID; // @synthesize condStyleOwnerUID=_condStyleOwnerUID;
@property(readonly, nonatomic) struct __CFUUID *condStyleOwnerID; // @synthesize condStyleOwnerID=_condStyleOwnerID;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
@property(readonly, nonatomic) struct __CFUUID *tableID; // @synthesize tableID=_tableID;
- (id).cxx_construct;
- (void)saveToMessage:(struct RegionInfoArchive *)arg1;
- (id)initFromMessage:(const struct RegionInfoArchive *)arg1;
- (struct TSUCellCoord)topLeftCellCoord;
- (void)unloadIndexes;
- (void)loadIndexesForTable:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTableID:(struct __CFUUID *)arg1 columnUids:(const vector_dadc1b26 *)arg2 rowUids:(const vector_dadc1b26 *)arg3;

@end

