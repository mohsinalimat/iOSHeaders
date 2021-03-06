//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFeedDescriptor.h>

@class NSArray;
@protocol FCChannelProviding, FCFeedTheming;

@interface FCLocalFeedDescriptor : FCFeedDescriptor
{
    NSArray *_paths;
    id <FCFeedTheming> _feedTheme;
    id <FCChannelProviding> _channel;
}

@property(retain, nonatomic) id <FCChannelProviding> channel; // @synthesize channel=_channel;
@property(retain, nonatomic) id <FCFeedTheming> feedTheme; // @synthesize feedTheme=_feedTheme;
@property(readonly, nonatomic) NSArray *paths; // @synthesize paths=_paths;
- (void).cxx_destruct;
- (_Bool)isSubscribedTo;
- (_Bool)isSubscribable;
- (id)fetchOperationForHeadlinesWithIDs:(id)arg1;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (id)theme;
- (id)name;
- (long long)feedType;
- (id)initWithIdentifier:(id)arg1 articlePaths:(id)arg2 theme:(id)arg3 channel:(id)arg4;

@end

