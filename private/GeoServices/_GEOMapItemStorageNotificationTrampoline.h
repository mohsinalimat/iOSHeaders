//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOMapItemStorage;
@protocol GEOMapItem, NSObject;

__attribute__((visibility("hidden")))
@interface _GEOMapItemStorageNotificationTrampoline : NSObject
{
    id <GEOMapItem> _mapItem;
    GEOMapItemStorage *_storage;
    id <NSObject> _notificationToken;
}

- (void)dealloc;
- (id)initWithMapItem:(id)arg1 mapItemStorage:(id)arg2;

@end

