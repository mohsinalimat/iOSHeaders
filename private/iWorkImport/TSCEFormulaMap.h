//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulaMap : NSObject
{
    struct unordered_map<const __CFUUID *, std::__1::vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula>>>, TSCEFormulaOwnerIDHash, TSCEFormulaOwnerIDEqual, std::__1::allocator<std::__1::pair<const __CFUUID *const, std::__1::vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula>>>>>> mOwnerToFormulasMap;
    int mCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)formulaEnumerator;
- (int)count;
- (void)addFormula:(struct TSCEFormula *)arg1 inOwner:(struct __CFUUID *)arg2 atCellCoordinate:(struct TSUCellCoord)arg3;

@end

