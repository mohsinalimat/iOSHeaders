//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVKeyPathDependencyHost-Protocol.h>
#import <AVFoundation/AVWeakObservable-Protocol.h>

@class AVAssetWriterHelper, AVAssetWriterInternal, NSArray, NSError, NSString, NSURL;
@protocol AVAssetWriterDataWritingDelegate;

@interface AVAssetWriter : NSObject <AVWeakObservable, AVKeyPathDependencyHost>
{
    AVAssetWriterInternal *_internal;
    id <AVAssetWriterDataWritingDelegate> _dataWritingDelegate;
}

+ (id)_errorForOSStatus:(int)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
+ (void)initialize;
@property(readonly, nonatomic) __weak id <AVAssetWriterDataWritingDelegate> dataWritingDelegate; // @synthesize dataWritingDelegate=_dataWritingDelegate;
- (void).cxx_destruct;
- (void)_transitionToFailedStatusWithError:(id)arg1;
- (void)setFinishWritingDelegate:(id)arg1;
- (id)finishWritingDelegate;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)startWriting;
@property(copy, nonatomic) NSArray *metadata;
- (void)addInputGroup:(id)arg1;
- (_Bool)canAddInputGroup:(id)arg1;
- (void)addInput:(id)arg1;
- (_Bool)canAddInput:(id)arg1;
- (_Bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (id)inputGroups;
@property(readonly, nonatomic) NSArray *inputs;
- (void)setWritesSinglePassUsingPredeterminedFileSize:(long long)arg1 mediaDataSize:(long long)arg2;
- (long long)singlePassMediaDataSize;
- (long long)singlePassFileSize;
- (void)setPreferredRate:(float)arg1;
- (float)preferredRate;
- (void)setPreferredVolume:(float)arg1;
- (float)preferredVolume;
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)preferredTransform;
- (void)setMovieTimeScale:(int)arg1;
- (int)movieTimeScale;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse;
- (void)setOverallDurationHint:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)overallDurationHint;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)movieFragmentInterval;
@property(readonly) NSError *error;
@property(readonly) long long status;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (_Bool)_supportsSampleReferencesReturningError:(id *)arg1;
@property(readonly, nonatomic) NSArray *availableMediaTypes;
@property(readonly, copy, nonatomic) NSString *outputFileType;
@property(readonly, copy, nonatomic) NSURL *outputURL;
- (_Bool)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2;
@property(readonly, retain, getter=_helper) AVAssetWriterHelper *helper;
@property(readonly, copy) NSString *description;
- (void)finalize;
- (void)dealloc;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

