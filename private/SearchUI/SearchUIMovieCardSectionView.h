//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUILayoutFreeSectionView.h>

@class SFMediaInfoCardSection;

@interface SearchUIMovieCardSectionView : SearchUILayoutFreeSectionView
{
}

- (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 punchoutURL:(id)arg3;
- (id)buttonForOffer:(id)arg1 playable:(id)arg2;
- (id)buttonForChannelDetails:(id)arg1 punchoutURLs:(id)arg2 isEntitled:(_Bool)arg3 isContinuing:(_Bool)arg4 isContainerItem:(_Bool)arg5 seasonNumber:(id)arg6 episodeNumber:(id)arg7;
- (id)buttonForPlayable:(id)arg1;
- (_Bool)channelHasBeenSeen:(id)arg1 seenChannels:(id)arg2;
- (id)buttonsForPlayables:(id)arg1 channels:(id)arg2 currentEpisode:(id)arg3 isUpNextable:(_Bool)arg4 isUpNexted:(_Bool)arg5;
- (void)fetchButtonsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2 style:(unsigned long long)arg3;

// Remaining properties
@property(retain) SFMediaInfoCardSection *section; // @dynamic section;

@end

