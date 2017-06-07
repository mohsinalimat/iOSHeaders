//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, VMUClassInfo;

@interface VMUFieldInfo : NSObject
{
    NSString *_ivarName;
    NSString *_typeName;
    unsigned int _scanType;
    unsigned int _offset;
    unsigned int _size;
    unsigned int _scannable;
    unsigned int _stride;
    unsigned int _flags;
    VMUClassInfo *_destinationLayout;
    NSArray *_subFieldArray;
}

@property(readonly) NSArray *subFieldArray; // @synthesize subFieldArray=_subFieldArray;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(readonly) unsigned int stride; // @synthesize stride=_stride;
@property(readonly) unsigned int scannableSize; // @synthesize scannableSize=_scannable;
@property(readonly) unsigned int size; // @synthesize size=_size;
@property(readonly) unsigned int offset; // @synthesize offset=_offset;
@property(readonly) unsigned int scanType; // @synthesize scanType=_scanType;
@property(readonly) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly) NSString *ivarName; // @synthesize ivarName=_ivarName;
- (id)description;
- (id)descriptionOfFieldValueInObjectMemory:(void *)arg1 scanner:(id)arg2;
@property(readonly) VMUClassInfo *destinationLayout;
- (void)_setDestinationLayout:(id)arg1;
- (void)_setStride:(unsigned int)arg1;
- (void)_setScannableSize:(unsigned int)arg1;
@property(readonly, nonatomic) _Bool isValueField;
@property(readonly, nonatomic) _Bool isKeyField;
@property(readonly, nonatomic) _Bool isValuesPointer;
@property(readonly, nonatomic) _Bool isKeysPointer;
@property(readonly, nonatomic) _Bool isStorageBitmapPointer;
@property(readonly, nonatomic) _Bool isArrayEntries;
@property(readonly, nonatomic) _Bool isArraySize;
@property(readonly, nonatomic) _Bool isStorageImplPointer;
@property(readonly, nonatomic) _Bool isByref;
@property(readonly, nonatomic) _Bool isCapture;
@property(readonly) unsigned int bitfieldWidth;
- (void)_setFlags:(unsigned int)arg1;
- (void)_setSize:(unsigned int)arg1;
- (void)_setOffset:(unsigned int)arg1;
- (void)_setScanType:(unsigned int)arg1;
- (void)_setTypeName:(id)arg1;
- (void)_setIvarName:(id)arg1;
- (id)getLeafFieldAtOffset:(unsigned int)arg1 leafOffset:(unsigned int *)arg2;
- (id)_getFieldAtOffset:(unsigned int)arg1;
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned int)arg3;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(id)arg2 scan:(unsigned int)arg3 offset:(unsigned int)arg4 size:(unsigned int)arg5;
- (id)initStorageEntryFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initStorageInfoFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initWithObjcIvar:(struct objc_ivar *)arg1 size:(unsigned int)arg2 isARC:(_Bool)arg3 is64Bit:(_Bool)arg4;
- (id)mutableCopy;
@property(readonly) NSString *typedDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

