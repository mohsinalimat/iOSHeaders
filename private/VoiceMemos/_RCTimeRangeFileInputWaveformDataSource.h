//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/RCFileInputWaveformDataSource.h>

@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource
{
    _Bool _isDecomposedFragment;
    double _destinationBeginTime;
    CDStruct_73a5d3ca _sourceTimeRange;
}

@property(nonatomic) CDStruct_73a5d3ca sourceTimeRange; // @synthesize sourceTimeRange=_sourceTimeRange;
@property(nonatomic) double destinationBeginTime; // @synthesize destinationBeginTime=_destinationBeginTime;
@property(nonatomic) _Bool isDecomposedFragment; // @synthesize isDecomposedFragment=_isDecomposedFragment;
- (void)saveGeneratedWaveformIfNecessary;

@end

