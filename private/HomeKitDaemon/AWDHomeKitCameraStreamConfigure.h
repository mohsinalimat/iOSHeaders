//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraStreamConfigure : PBCodable <NSCopying>
{
    int _audioCodec;
    int _cryptoSuite;
    unsigned int _framerate;
    int _resolution;
    int _sampleRate;
    struct {
        unsigned int audioCodec:1;
        unsigned int cryptoSuite:1;
        unsigned int framerate:1;
        unsigned int resolution:1;
        unsigned int sampleRate:1;
    } _has;
}

@property(nonatomic) unsigned int framerate; // @synthesize framerate=_framerate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsCryptoSuite:(id)arg1;
- (id)cryptoSuiteAsString:(int)arg1;
@property(nonatomic) _Bool hasCryptoSuite;
@property(nonatomic) int cryptoSuite; // @synthesize cryptoSuite=_cryptoSuite;
- (int)StringAsSampleRate:(id)arg1;
- (id)sampleRateAsString:(int)arg1;
@property(nonatomic) _Bool hasSampleRate;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
- (int)StringAsAudioCodec:(id)arg1;
- (id)audioCodecAsString:(int)arg1;
@property(nonatomic) _Bool hasAudioCodec;
@property(nonatomic) int audioCodec; // @synthesize audioCodec=_audioCodec;
@property(nonatomic) _Bool hasFramerate;
- (int)StringAsResolution:(id)arg1;
- (id)resolutionAsString:(int)arg1;
@property(nonatomic) _Bool hasResolution;
@property(nonatomic) int resolution; // @synthesize resolution=_resolution;

@end

