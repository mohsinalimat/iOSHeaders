//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3D2DDataBuffer : TSCH3DDataBuffer
{
    struct DataBuffer2DDimension mDimension;
}

+ (id)bufferWithCapacityDimension:(const struct DataBuffer2DDimension *)arg1;
+ (id)bufferWithCapacitySize:(const tvec2_3b141483 *)arg1 components:(unsigned long long)arg2;
@property(readonly, nonatomic) struct DataBuffer2DDimension dimension; // @synthesize dimension=mDimension;
- (id).cxx_construct;
- (struct DataBufferLevelData)dataAtLevel:(unsigned long long)arg1;
- (_Bool)hasLevels;
@property(readonly, nonatomic) tvec3_c2818ced size;
- (unsigned long long)components;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension *)arg1;

@end

