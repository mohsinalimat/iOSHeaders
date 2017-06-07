//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRMediaRemoteOriginClientManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_originClients;
}

+ (id)sharedManager;
- (id)clientForOrigin:(struct _MROrigin *)arg1;
- (id)localClient;
- (void)dealloc;
- (id)init;

@end

