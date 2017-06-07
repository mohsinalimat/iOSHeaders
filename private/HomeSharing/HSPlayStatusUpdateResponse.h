//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeSharing/HSResponse.h>

@class NSDictionary;

@interface HSPlayStatusUpdateResponse : HSResponse
{
    unsigned int _nextRevisionID;
    unsigned long long _nowPlayingContainerID;
    unsigned long long _nowPlayingContainerItemID;
    unsigned long long _nowPlayingDatabaseID;
    unsigned long long _nowPlayingItemID;
    NSDictionary *_playStatusInformation;
}

@property(copy, nonatomic) NSDictionary *playStatusInformation; // @synthesize playStatusInformation=_playStatusInformation;
@property(nonatomic) unsigned long long nowPlayingItemID; // @synthesize nowPlayingItemID=_nowPlayingItemID;
@property(nonatomic) unsigned long long nowPlayingDatabaseID; // @synthesize nowPlayingDatabaseID=_nowPlayingDatabaseID;
@property(nonatomic) unsigned long long nowPlayingContainerItemID; // @synthesize nowPlayingContainerItemID=_nowPlayingContainerItemID;
@property(nonatomic) unsigned long long nowPlayingContainerID; // @synthesize nowPlayingContainerID=_nowPlayingContainerID;
@property(nonatomic) unsigned int nextRevisionID; // @synthesize nextRevisionID=_nextRevisionID;
- (void).cxx_destruct;
- (id)description;

@end

