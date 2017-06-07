//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>

@class NSMutableArray;

@interface MPMediaCollectionDownloadObserver : MPUMediaDownloadObserver
{
    NSMutableArray *_downloadObservers;
    _Bool _callingProgressHandler;
}

- (void).cxx_destruct;
- (void)_callProgressHandler;
- (_Bool)isPurchasing;
- (_Bool)isPaused;
- (_Bool)isCurrentlyPlayable;
- (void)_onQueue_invalidate;
- (double)downloadProgress;
- (unsigned long long)downloadsCount;
- (void)dealloc;
- (id)initWithCollection:(id)arg1;

@end

