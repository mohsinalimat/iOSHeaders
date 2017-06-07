//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Celestial/AVRecorderImpl-Protocol.h>

@class NSMutableDictionary, NSString;

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl>
{
    _Bool _isActive;
    _Bool _isRecording;
    _Bool _isWriting;
    NSMutableDictionary *_attributes;
    unsigned int _fileType;
    unsigned int _audioCodec;
    long long _maxPCMFramesToRecord;
    _Bool _haveRecordedMaxPCMFrames;
    struct AudioStreamBasicDescription _recordingFormat;
    struct OpaqueAudioFileID *_audioFile;
    struct OpaqueAudioQueue *_audioQueue;
    unsigned int _numDeviceChannels;
    struct AudioQueueLevelMeterState *_audioLevels;
    struct AudioQueueLevelMeterState *_audioLevelsDB;
    unsigned long long _totalBytesRecorded;
    unsigned long long _totalPacketsRecorded;
    unsigned long long _totalFramesRecorded;
    struct AudioQueueBuffer *_buffers[3];
    _Bool _bufferUsed[3];
}

- (void)haveABuffer:(struct AudioQueueBuffer *)arg1 withTimeStamp:(const struct AudioTimeStamp *)arg2 andNumPackets:(unsigned int)arg3 andPacketDescs:(const struct AudioStreamPacketDescription *)arg4;
- (void)copyEncoderCookieToFile;
- (_Bool)audioCurrentAverageDecibelLevels:(float *)arg1 andPeakDecibelLevels:(float *)arg2;
- (_Bool)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2;
- (_Bool)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2 useDB:(_Bool)arg3;
- (unsigned long long)audioNumDeviceChannels;
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (void)setMicVolume:(float)arg1;
- (float)micVolume;
- (_Bool)isRecording;
- (void)stop;
- (_Bool)start;
- (_Bool)autoFocusAtPoint:(struct CGPoint)arg1;
- (_Bool)takePhoto;
- (_Bool)isActive;
- (void)deactivate;
- (_Bool)activate:(id *)arg1;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

