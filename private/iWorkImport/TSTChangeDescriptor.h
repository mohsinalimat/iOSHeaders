//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, TSTCellRegion;

__attribute__((visibility("hidden")))
@interface TSTChangeDescriptor : NSObject
{
    int mChangeDescriptor;
    TSTCellRegion *mCellRegion;
    struct TSUCellCoord mCellID;
    TSTCellRegion *mStrokeRegion;
    NSHashTable *mReferenceIdentifiers;
}

+ (id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(struct TSUCellRect)arg2 strokeRange:(struct TSUCellRect)arg3;
+ (id)changeDescriptorWithType:(int)arg1 strokeRange:(struct TSUCellRect)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(struct TSUCellRect)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct TSUCellCoord)arg2 strokeRange:(struct TSUCellRect)arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct TSUCellCoord)arg2 cellRange:(struct TSUCellRect)arg3 strokeRange:(struct TSUCellRect)arg4;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct TSUCellCoord)arg2 cellRange:(struct TSUCellRect)arg3;
+ (id)changeDescriptorWithType:(int)arg1;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct TSUCellCoord)arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4;
+ (id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2;
@property(readonly, nonatomic) NSHashTable *referenceIdentifiers; // @synthesize referenceIdentifiers=mReferenceIdentifiers;
@property(readonly, nonatomic) TSTCellRegion *strokeRegion; // @synthesize strokeRegion=mStrokeRegion;
@property(readonly, nonatomic) struct TSUCellCoord cellID; // @synthesize cellID=mCellID;
@property(readonly, nonatomic) TSTCellRegion *cellRegion; // @synthesize cellRegion=mCellRegion;
@property(readonly, nonatomic) int changeDescriptor; // @synthesize changeDescriptor=mChangeDescriptor;
@property(readonly, nonatomic) struct TSUCellRect cellRange;
@property(readonly, nonatomic) struct TSUCellRect strokeRange;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithChangeDescriptorType:(int)arg1 andCellRegion:(id)arg2 andCellID:(struct TSUCellCoord)arg3 andStrokeRegion:(id)arg4 andReferenceIdentifiers:(id)arg5;

@end

