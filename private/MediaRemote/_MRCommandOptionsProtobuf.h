//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

@interface _MRCommandOptionsProtobuf : PBCodable <NSCopying>
{
    double _playbackPosition;
    long long _radioStationID;
    unsigned long long _trackID;
    NSString *_contentItemID;
    NSString *_contextID;
    NSString *_destinationAppDisplayID;
    NSData *_languageOption;
    NSString *_mediaType;
    NSData *_playbackQueueContext;
    int _playbackQueueDestinationOffset;
    int _playbackQueueInsertionPosition;
    int _playbackQueueOffset;
    float _playbackRate;
    NSString *_radioStationHash;
    float _rating;
    int _repeatMode;
    unsigned int _sendOptions;
    int _shuffleMode;
    float _skipInterval;
    NSString *_sourceID;
    NSString *_stationURL;
    NSData *_systemAppPlaybackQueueData;
    _Bool _externalPlayerCommand;
    _Bool _negative;
    _Bool _requestDefermentToPlaybackQueuePosition;
    _Bool _shouldBeginRadioPlayback;
    _Bool _shouldOverrideManuallyCuratedQueue;
    struct {
        unsigned int playbackPosition:1;
        unsigned int radioStationID:1;
        unsigned int trackID:1;
        unsigned int playbackQueueDestinationOffset:1;
        unsigned int playbackQueueInsertionPosition:1;
        unsigned int playbackQueueOffset:1;
        unsigned int playbackRate:1;
        unsigned int rating:1;
        unsigned int repeatMode:1;
        unsigned int sendOptions:1;
        unsigned int shuffleMode:1;
        unsigned int skipInterval:1;
        unsigned int externalPlayerCommand:1;
        unsigned int negative:1;
        unsigned int requestDefermentToPlaybackQueuePosition:1;
        unsigned int shouldBeginRadioPlayback:1;
        unsigned int shouldOverrideManuallyCuratedQueue:1;
    } _has;
}

@property(retain, nonatomic) NSData *playbackQueueContext; // @synthesize playbackQueueContext=_playbackQueueContext;
@property(retain, nonatomic) NSData *languageOption; // @synthesize languageOption=_languageOption;
@property(nonatomic) int playbackQueueDestinationOffset; // @synthesize playbackQueueDestinationOffset=_playbackQueueDestinationOffset;
@property(nonatomic) int playbackQueueOffset; // @synthesize playbackQueueOffset=_playbackQueueOffset;
@property(retain, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
@property(nonatomic) int playbackQueueInsertionPosition; // @synthesize playbackQueueInsertionPosition=_playbackQueueInsertionPosition;
@property(nonatomic) _Bool shouldBeginRadioPlayback; // @synthesize shouldBeginRadioPlayback=_shouldBeginRadioPlayback;
@property(retain, nonatomic) NSString *stationURL; // @synthesize stationURL=_stationURL;
@property(nonatomic) _Bool shouldOverrideManuallyCuratedQueue; // @synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue;
@property(nonatomic) _Bool requestDefermentToPlaybackQueuePosition; // @synthesize requestDefermentToPlaybackQueuePosition=_requestDefermentToPlaybackQueuePosition;
@property(nonatomic) unsigned int sendOptions; // @synthesize sendOptions=_sendOptions;
@property(retain, nonatomic) NSString *destinationAppDisplayID; // @synthesize destinationAppDisplayID=_destinationAppDisplayID;
@property(retain, nonatomic) NSData *systemAppPlaybackQueueData; // @synthesize systemAppPlaybackQueueData=_systemAppPlaybackQueueData;
@property(retain, nonatomic) NSString *radioStationHash; // @synthesize radioStationHash=_radioStationHash;
@property(nonatomic) long long radioStationID; // @synthesize radioStationID=_radioStationID;
@property(nonatomic) unsigned long long trackID; // @synthesize trackID=_trackID;
@property(retain, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(nonatomic) double playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(nonatomic) _Bool negative; // @synthesize negative=_negative;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) float skipInterval; // @synthesize skipInterval=_skipInterval;
@property(nonatomic) _Bool externalPlayerCommand; // @synthesize externalPlayerCommand=_externalPlayerCommand;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlaybackQueueContext;
@property(readonly, nonatomic) _Bool hasLanguageOption;
@property(nonatomic) _Bool hasPlaybackQueueDestinationOffset;
@property(nonatomic) _Bool hasPlaybackQueueOffset;
@property(readonly, nonatomic) _Bool hasContentItemID;
@property(nonatomic) _Bool hasPlaybackQueueInsertionPosition;
@property(nonatomic) _Bool hasShouldBeginRadioPlayback;
@property(readonly, nonatomic) _Bool hasStationURL;
@property(nonatomic) _Bool hasShouldOverrideManuallyCuratedQueue;
@property(nonatomic) _Bool hasRequestDefermentToPlaybackQueuePosition;
@property(nonatomic) _Bool hasSendOptions;
@property(readonly, nonatomic) _Bool hasDestinationAppDisplayID;
@property(readonly, nonatomic) _Bool hasSystemAppPlaybackQueueData;
@property(readonly, nonatomic) _Bool hasRadioStationHash;
@property(nonatomic) _Bool hasRadioStationID;
@property(nonatomic) _Bool hasTrackID;
@property(readonly, nonatomic) _Bool hasContextID;
- (int)StringAsShuffleMode:(id)arg1;
- (id)shuffleModeAsString:(int)arg1;
@property(nonatomic) _Bool hasShuffleMode;
@property(nonatomic) int shuffleMode; // @synthesize shuffleMode=_shuffleMode;
- (int)StringAsRepeatMode:(id)arg1;
- (id)repeatModeAsString:(int)arg1;
@property(nonatomic) _Bool hasRepeatMode;
@property(nonatomic) int repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) _Bool hasPlaybackPosition;
@property(nonatomic) _Bool hasNegative;
@property(nonatomic) _Bool hasRating;
@property(nonatomic) _Bool hasPlaybackRate;
@property(nonatomic) _Bool hasSkipInterval;
@property(nonatomic) _Bool hasExternalPlayerCommand;
@property(readonly, nonatomic) _Bool hasMediaType;
@property(readonly, nonatomic) _Bool hasSourceID;
- (void)dealloc;

@end

