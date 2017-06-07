//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCMNotificationDispatcher, AVWeakReference;
@protocol AVPlaylistNode;

@interface AVPlaylistLeafNodeEnumeratorInternal : NSObject
{
    struct OpaqueFigPlaylist *figPlaylist;
    struct OpaqueFigPlaylistEnumerator *figEnumerator;
    long long maximumNodeCount;
    id <AVPlaylistNode> firstNode;
    long long direction;
    AVWeakReference *weakSelf;
    AVCMNotificationDispatcher *notificationDispatcher;
    CDUnknownBlockType perItemBlock;
    CDUnknownBlockType completionHandler;
}

@end
