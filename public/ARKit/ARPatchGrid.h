//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARPatchGrid : NSObject
{
    vector_b5b5dea7 _patchesVector;
    float _angle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) float pivot;
@property(readonly, nonatomic) const CDStruct_183601bc *patches;
@property(readonly, nonatomic) unsigned long long size;
- (id)initWithPatchesVector:(vector_b5b5dea7)arg1 pivotAngle:(float)arg2;

@end

