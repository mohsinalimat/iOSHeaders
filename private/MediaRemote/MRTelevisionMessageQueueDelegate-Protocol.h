//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRTelevisionMessageQueue, NSData;

@protocol MRTelevisionMessageQueueDelegate <NSObject>
- (unsigned long long)messageQueue:(MRTelevisionMessageQueue *)arg1 processData:(NSData *)arg2 atReadPosition:(long long)arg3;
@end

