//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class MPAVItem, MPCModelRadioContentReference, MPCPlaybackRequestEnvironment, NSString, NSURL;

@interface MPCModelRadioPlaybackContext : MPPlaybackContext
{
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPCModelRadioContentReference *_nowPlayingContentReference;
    MPCModelRadioContentReference *_seedContentReference;
    NSString *_stationHash;
    NSString *_stationName;
    NSString *_stationStringID;
    long long _stationID;
    NSURL *_stationURL;
}

+ (Class)queueFeederClass;
@property(copy, nonatomic) NSURL *stationURL; // @synthesize stationURL=_stationURL;
@property(nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(copy, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property(copy, nonatomic) NSString *stationName; // @synthesize stationName=_stationName;
@property(copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(copy, nonatomic) MPCModelRadioContentReference *seedContentReference; // @synthesize seedContentReference=_seedContentReference;
@property(copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference; // @synthesize nowPlayingContentReference=_nowPlayingContentReference;
@property(copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPAVItem *prefixItem;
- (id)descriptionComponents;
- (id)init;

@end

