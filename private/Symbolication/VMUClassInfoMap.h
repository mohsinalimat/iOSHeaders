//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Symbolication/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface VMUClassInfoMap : NSObject <NSSecureCoding>
{
    void *_classInfoMap1;
    void *_classInfoMap2;
    NSMutableArray *_linearClassInfos;
    void *_fieldInfoMap1;
    void *_fieldInfoMap2;
    NSMutableArray *_linearFieldInfos;
}

+ (void)_destroyRetainedLinearArray:(id *)arg1 withCount:(unsigned int)arg2;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
+ (void)_claimUnarchivingOfClass:(id)arg1;
- (void).cxx_destruct;
- (void)_applyTypeOverlay:(id)arg1;
@property(readonly, nonatomic) unsigned int fieldInfoCount;
- (void)memoizeSwiftField:(id)arg1 withName:(const char *)arg2 offset:(unsigned int)arg3 kind:(unsigned int)arg4 typeref:(unsigned long long)arg5;
- (id)swiftFieldWithName:(const char *)arg1 offset:(unsigned int)arg2 kind:(unsigned int)arg3 typeref:(unsigned long long)arg4;
- (id)fieldInfoForIndex:(unsigned int)arg1;
- (unsigned int)indexForFieldInfo:(id)arg1;
- (unsigned int)addFieldInfo:(id)arg1;
- (id *)_retainedLinearArrayWithReturnedCount:(unsigned int *)arg1;
- (void)enumerateInfosWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int count;
- (id)classInfoForIndex:(unsigned int)arg1;
- (id)classInfoForAddress:(unsigned long long)arg1;
- (unsigned int)indexForClassInfo:(id)arg1;
- (unsigned int)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2;
- (void)addClassInfosFromMap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

