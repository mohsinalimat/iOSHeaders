//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@interface MLSVREngine : NSObject <MLModelSpecificationLoader>
{
    _Bool _isInputSizeLowerBoundOnly;
    _Bool _freeModelOnDealloc;
    unsigned long long _inputSize;
    struct svm_model *_model;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
@property _Bool freeModelOnDealloc; // @synthesize freeModelOnDealloc=_freeModelOnDealloc;
@property struct svm_model *model; // @synthesize model=_model;
@property(readonly) unsigned long long inputSize; // @synthesize inputSize=_inputSize;
@property(readonly) _Bool isInputSizeLowerBoundOnly; // @synthesize isInputSizeLowerBoundOnly=_isInputSizeLowerBoundOnly;
- (id)predict:(id)arg1;
- (void)deallocSVMNodeVector:(struct svm_node *)arg1;
- (void)fillSVMNodeVector:(struct svm_node *)arg1 values:(double *)arg2 count:(unsigned long long)arg3;
- (struct svm_node *)allocSVMNodeVector:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSVMModel:(struct svm_model *)arg1 freeOnDealloc:(_Bool)arg2 isInputSizeLowerBoundOnly:(_Bool)arg3 inputSize:(unsigned long long)arg4;
- (id)initWithLibSVMFile:(id)arg1;

@end

