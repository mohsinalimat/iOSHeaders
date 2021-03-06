//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState>
{
    void *_client;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_playerClients;
    NSArray *_nowPlayingClients;
}

@property(readonly, nonatomic) NSArray *nowPlayingClients; // @synthesize nowPlayingClients=_nowPlayingClients;
@property(readonly, nonatomic) void *client; // @synthesize client=_client;
- (void)restoreNowPlayingClientState;
- (void)removePlayer:(void *)arg1;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(void *)arg1;
- (id)playerClients;
- (void)dealloc;
- (id)initWithClient:(void *)arg1;

@end

