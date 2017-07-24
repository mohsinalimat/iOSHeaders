//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSCoder : NSObject
{
}

+ (_Bool)__categorizeException:(id)arg1 intoError:(id *)arg2;
- (_Bool)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(_Bool)arg3;
- (_Bool)validateClassSupportsSecureCoding:(Class)arg1;
- (_Bool)validateAllowedClass:(Class)arg1 forKey:(id)arg2;
- (id)allowedClasses;
- (id)decodePropertyListForKey:(id)arg1;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (_Bool)requiresSecureCoding;
- (unsigned int)systemVersion;
- (struct _NSZone *)objectZone;
- (void)setObjectZone:(struct _NSZone *)arg1;
- (void)setAllowedClasses:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeLongForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (_Bool)containsValueForKey:(id)arg1;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeLong:(long long)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (id)decodeTopLevelObjectForKey:(id)arg1 error:(id *)arg2;
- (id)decodeObjectForKey:(id)arg1 error:(id *)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (_Bool)_allowsValueCoding;
- (_Bool)allowsKeyedCoding;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (id)decodeTopLevelObjectAndReturnError:(id *)arg1;
- (id)decodeObject;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (long long)versionForClassName:(id)arg1;
- (id)decodeDataObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2 size:(unsigned long long)arg3;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)__failWithExternalError:(id)arg1;
- (_Bool)__failWithExceptionName:(id)arg1 errorCode:(long long)arg2 format:(id)arg3;
- (_Bool)__failWithException:(id)arg1;
- (id)__tryDecodeObjectForKey:(id)arg1 error:(id *)arg2 decodeBlock:(CDUnknownBlockType)arg3;
- (void)__setError:(id)arg1;
- (id)error;
- (long long)decodingFailurePolicy;
- (void)failWithError:(id)arg1;
- (struct CGRect)decodeRect;
- (void)encodeRect:(struct CGRect)arg1;
- (struct CGSize)decodeSize;
- (void)encodeSize:(struct CGSize)arg1;
- (struct CGPoint)decodePoint;
- (void)encodePoint:(struct CGPoint)arg1;
- (struct CGRect)decodeRectForKey:(id)arg1;
- (struct CGSize)decodeSizeForKey:(id)arg1;
- (struct CGPoint)decodePointForKey:(id)arg1;
- (void)encodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;

@end

