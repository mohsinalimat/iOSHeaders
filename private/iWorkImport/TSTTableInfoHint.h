//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, TSTCellUIDList;

__attribute__((visibility("hidden")))
@interface TSTTableInfoHint : NSObject
{
    NSMutableSet *_tableStyleSet;
    TSTCellUIDList *_cellFillList;
}

@property(readonly, nonatomic) TSTCellUIDList *cellFillList; // @synthesize cellFillList=_cellFillList;
@property(readonly, nonatomic) NSMutableSet *tableStyleSet; // @synthesize tableStyleSet=_tableStyleSet;
- (void)setTableStyleImageForArea:(unsigned long long)arg1;
- (void)addCellUIDToFillList:(struct TSTCellUID)arg1;
- (void)dealloc;
- (id)init;

@end

