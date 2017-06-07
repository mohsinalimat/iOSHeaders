//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/RCTrimTimeRangeOperation.h>

@class NSError, NSURL, RCCompositionComposedAssetWriter;

@interface RCTrimAudioFileOperation : RCTrimTimeRangeOperation
{
    RCCompositionComposedAssetWriter *_assetWriter;
    _Bool _success;
    _Bool _createWaveform;
    NSError *_error;
    double _exportedDuration;
    NSURL *_sourceURL;
    NSURL *_destinationURL;
}

+ (id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1;
@property(readonly, nonatomic) _Bool createWaveform; // @synthesize createWaveform=_createWaveform;
@property(readonly, copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (double)exportedDuration;
- (id)error;
- (_Bool)success;
- (void).cxx_destruct;
- (double)progress;
- (void)main;
- (void)cancel;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 createWaveform:(_Bool)arg3 timeRange:(CDStruct_73a5d3ca)arg4 trimMode:(long long)arg5;

@end

