//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSTCellRegionIterating-Protocol.h>

@class NSString;

@interface TSTCellRegionRowMajorIterator : NSObject <TSTCellRegionIterating>
{
    set_87729393 mCellRangeSet;
    CDStruct_0441cfb5 mCellID;
    CDStruct_5f1f7aa9 mBoundingCellRange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)terminate;
- (CDStruct_0441cfb5)getNext;
- (void)dealloc;
- (id)initWithCellRegion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

