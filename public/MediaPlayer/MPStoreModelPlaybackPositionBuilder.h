//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@interface MPStoreModelPlaybackPositionBuilder : MPStoreModelObjectBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int bookmarkTime:1;
        unsigned int shouldRememberBookmarkTime:1;
        unsigned int hasBeenPlayed:1;
        unsigned int startTime:1;
        unsigned int stopTime:1;
        unsigned int storeUbiquitousIdentifier:1;
        unsigned int userPlayCount:1;
    } _requestedPlaybackPositionProperties;
}

+ (id)allSupportedProperties;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end

