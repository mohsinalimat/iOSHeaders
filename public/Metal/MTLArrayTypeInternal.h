//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLArrayType.h>

@class MTLType;

__attribute__((visibility("hidden")))
@interface MTLArrayTypeInternal : MTLArrayType
{
    unsigned long long _dataType;
    unsigned int _arrayLength:32;
    unsigned int _stride:32;
    id _details;
    unsigned long long _elementType;
    MTLType *_elementTypeInfo;
    _Bool _isIndirectArgumentBuffer;
    unsigned long long _argumentIndexStride;
}

@property _Bool isIndirectArgumentBuffer; // @synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer;
@property(nonatomic) unsigned long long argumentIndexStride; // @synthesize argumentIndexStride=_argumentIndexStride;
- (unsigned long long)elementType;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)elementTypeDescription;
- (id)elementIndirectArgumentType;
@property(nonatomic) unsigned long long indirectArgumentIndexStride;
- (id)elementPointerType;
- (id)elementTextureReferenceType;
- (id)elementStructType;
- (id)elementArrayType;
- (void)setStride:(unsigned long long)arg1;
- (unsigned long long)stride;
- (unsigned long long)arrayLength;
- (void)dealloc;
- (id)initWithArrayLength:(unsigned long long)arg1 elementType:(unsigned long long)arg2 stride:(unsigned long long)arg3 details:(id)arg4;

@end

