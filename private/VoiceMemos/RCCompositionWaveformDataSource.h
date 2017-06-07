//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/RCWaveformDataSource.h>

#import <VoiceMemos/RCWaveformDataSourceObserver-Protocol.h>

@class NSObject, NSOperationQueue, NSString, RCComposition, _RCTimeRangeFileInputWaveformDataSource;
@protocol OS_dispatch_queue;

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver>
{
    NSObject<OS_dispatch_queue> *_searialQueue;
    float _progressOfFinishedFragments;
    float _progressWeightPerFragment;
    _RCTimeRangeFileInputWaveformDataSource *_activeFragmentDataSource;
    _Bool _preferLoadingFragmentWaveforms;
    _Bool _saveGeneratedWaveform;
    _Bool _highlightLastDecomposedFragment;
    RCComposition *_composition;
    NSOperationQueue *_fragmentLoadingOperationQueue;
}

@property(retain, nonatomic) NSOperationQueue *fragmentLoadingOperationQueue; // @synthesize fragmentLoadingOperationQueue=_fragmentLoadingOperationQueue;
@property(nonatomic) _Bool highlightLastDecomposedFragment; // @synthesize highlightLastDecomposedFragment=_highlightLastDecomposedFragment;
@property(nonatomic) _Bool saveGeneratedWaveform; // @synthesize saveGeneratedWaveform=_saveGeneratedWaveform;
@property(readonly, nonatomic) _Bool preferLoadingFragmentWaveforms; // @synthesize preferLoadingFragmentWaveforms=_preferLoadingFragmentWaveforms;
@property(readonly, nonatomic) RCComposition *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (CDStruct_73a5d3ca)timeRangeToHighlight;
- (id)saveableWaveform;
- (double)duration;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_synchronouslyAppendSegmentsForAVContentURL:(id)arg1 isDecomposedFragment:(_Bool)arg2 sourceTimeRange:(CDStruct_73a5d3ca)arg3 destinationTime:(double)arg4;
- (float)loadingProgress;
- (void)startLoading;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

