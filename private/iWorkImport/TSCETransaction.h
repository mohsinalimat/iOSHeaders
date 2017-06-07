//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCETransaction : NSObject
{
    unordered_set_3f00ed57 _ownerUIDs;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_set<TSUCellCoord, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<TSUCellCoord>>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_set<TSUCellCoord, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<TSUCellCoord>>>>> _cellsForOwnerUIDs;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData>>>> _resolverUIDForOwnerUID;
    NSMutableArray *_rewriteCommands;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateCellIDs:(CDUnknownBlockType)arg1;
- (void)addCellID:(const struct TSUCellCoord *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (_Bool)isDeferringReplaceFormulaForOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)resolverUIDForOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (void)deferReplaceFormulaForOwnerUID:(const UUIDData_5fbc143e *)arg1 withResolverUID:(const UUIDData_5fbc143e *)arg2;
- (void)deferReplaceFormulaForOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (void)dealloc;

@end

