//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPeopleSuggestionManager;
@protocol PXPerson;

@protocol PXPeopleSuggestionManagerDelegate <NSObject>
- (void)loadingMoreSuggestionsForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)suggestionManager:(PXPeopleSuggestionManager *)arg1 hasNewSuggestionAvailable:(id <PXPerson>)arg2;
- (void)confirmationCountUpdatedForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
@end

