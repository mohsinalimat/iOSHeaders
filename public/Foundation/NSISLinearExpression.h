//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFastEnumeration-Protocol.h>
#import <Foundation/NSISRowBody-Protocol.h>

@class NSString;

@interface NSISLinearExpression : NSObject <NSISRowBody, NSFastEnumeration>
{
    unsigned int inline_capacity;
    unsigned int var_count;
    double constant;
    union {
        struct {
            id stored_extern_marker;
            struct *slab;
            unsigned long long capacity;
        } extern_data;
        struct {
            unsigned long long aligner;
        } inline_slab;
        unsigned char padding[48];
    } data;
}

+ (id)acquireFromPoolForUseCase:(long long)arg1;
+ (id)newExpressionWithCapacity:(unsigned long long)arg1;
+ (void)initialize;
- (id)copyContentsAndReturnToPool;
- (void)returnToPool;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)initWithInlineCapacity:(unsigned long long)arg1;
- (void)verifyInternalIntegrity;
- (void)scaleBy:(double)arg1;
- (id)variablesArray;
- (unsigned long long)variableCount;
- (_Bool)enumerateVariablesAndCoefficientsUntil:(CDUnknownBlockType)arg1;
- (void)enumerateVariables:(CDUnknownBlockType)arg1;
- (void)enumerateVariablesAndCoefficients:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;
- (_Bool)isConstant;
@property double constant;
- (double)incrementConstant:(double)arg1;
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)addVariable:(id)arg1 coefficient:(double)arg2;
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)addExpression:(id)arg1 times:(double)arg2;
- (void)dealloc;
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;
- (double)coefficientForVariable:(id)arg1;
- (void)removeVariable:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

