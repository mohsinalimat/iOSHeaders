//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, AVAssetWriter, AVAssetWriterInput, NSArray, NSFileHandle, NSProgress, NSString, NSURL, PFProportionalIntegralController, PFSinglePassVideoExportItemStatistics, PFVideoExportRangeCoordinator;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface PFSinglePassVideoExportItem : NSObject
{
    _Bool _shouldDeleteDestinationURLOnDeallocation;
    _Bool _needsCurrentEncodingBitRateUpdate;
    NSString *_identifier;
    unsigned long long _targetOutputFileSize;
    NSProgress *_progress;
    NSArray *_additionalMetadata;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_stateQueue;
    AVAsset *_inputAsset;
    AVAssetTrack *_videoTrack;
    NSArray *_additionalTracks;
    NSFileHandle *_conversionOutputFileHandle;
    NSURL *_destinationFileURL;
    unsigned long long _outputFileLastEndOffset;
    long long _targetOutputMediaDataSize;
    PFSinglePassVideoExportItemStatistics *_statistics;
    PFProportionalIntegralController *_bitRateController;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_videoReaderTrackOutput;
    NSArray *_additionalReaderTrackOutputs;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    NSArray *_additionalWriterInputs;
    NSObject<OS_dispatch_source> *_outputFileSizeChangeSource;
    unsigned long long _minimumChunkLength;
    NSObject<OS_dispatch_group> *_inputReadingCompletionGroup;
    PFVideoExportRangeCoordinator *_availableRangeCoordinator;
    struct OpaqueVTCompressionSession *_compressionSession;
    long long _currentEncodingBitRate;
}

@property _Bool needsCurrentEncodingBitRateUpdate; // @synthesize needsCurrentEncodingBitRateUpdate=_needsCurrentEncodingBitRateUpdate;
@property long long currentEncodingBitRate; // @synthesize currentEncodingBitRate=_currentEncodingBitRate;
@property struct OpaqueVTCompressionSession *compressionSession; // @synthesize compressionSession=_compressionSession;
@property(retain) PFVideoExportRangeCoordinator *availableRangeCoordinator; // @synthesize availableRangeCoordinator=_availableRangeCoordinator;
@property(retain) NSObject<OS_dispatch_group> *inputReadingCompletionGroup; // @synthesize inputReadingCompletionGroup=_inputReadingCompletionGroup;
@property unsigned long long minimumChunkLength; // @synthesize minimumChunkLength=_minimumChunkLength;
@property(retain) NSObject<OS_dispatch_source> *outputFileSizeChangeSource; // @synthesize outputFileSizeChangeSource=_outputFileSizeChangeSource;
@property(retain) NSArray *additionalWriterInputs; // @synthesize additionalWriterInputs=_additionalWriterInputs;
@property(retain) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain) NSArray *additionalReaderTrackOutputs; // @synthesize additionalReaderTrackOutputs=_additionalReaderTrackOutputs;
@property(retain) AVAssetReaderTrackOutput *videoReaderTrackOutput; // @synthesize videoReaderTrackOutput=_videoReaderTrackOutput;
@property(retain) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(retain) PFProportionalIntegralController *bitRateController; // @synthesize bitRateController=_bitRateController;
@property(retain) PFSinglePassVideoExportItemStatistics *statistics; // @synthesize statistics=_statistics;
@property long long targetOutputMediaDataSize; // @synthesize targetOutputMediaDataSize=_targetOutputMediaDataSize;
@property unsigned long long outputFileLastEndOffset; // @synthesize outputFileLastEndOffset=_outputFileLastEndOffset;
@property _Bool shouldDeleteDestinationURLOnDeallocation; // @synthesize shouldDeleteDestinationURLOnDeallocation=_shouldDeleteDestinationURLOnDeallocation;
@property(retain) NSURL *destinationFileURL; // @synthesize destinationFileURL=_destinationFileURL;
@property(retain) NSFileHandle *conversionOutputFileHandle; // @synthesize conversionOutputFileHandle=_conversionOutputFileHandle;
@property(retain) NSArray *additionalTracks; // @synthesize additionalTracks=_additionalTracks;
@property(retain) AVAssetTrack *videoTrack; // @synthesize videoTrack=_videoTrack;
@property(retain) AVAsset *inputAsset; // @synthesize inputAsset=_inputAsset;
@property(retain) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSArray *additionalMetadata; // @synthesize additionalMetadata=_additionalMetadata;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long targetOutputFileSize; // @synthesize targetOutputFileSize=_targetOutputFileSize;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_cancel;
- (id)bitRateControllerForTargetEncodingBitRate:(long long)arg1;
- (void)notifyDataAvailableToHandler:(CDUnknownBlockType)arg1 ignoreMinimumChunkLength:(_Bool)arg2;
- (void)setupOutputFileSourceWithOutputAvailableHandler:(CDUnknownBlockType)arg1;
- (void)processCompressedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2;
- (void)startReadingInputAssetWithOutputAvailableHandler:(CDUnknownBlockType)arg1;
- (_Bool)setupConversionWithError:(id *)arg1;
- (id)outputDataInRange:(struct _NSRange)arg1 waitUntilAvailableWithTimeout:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)startConversionWithError:(id *)arg1 outputAvailableHandler:(CDUnknownBlockType)arg2;
- (_Bool)preflight;
- (void)dealloc;
- (id)init;

@end

