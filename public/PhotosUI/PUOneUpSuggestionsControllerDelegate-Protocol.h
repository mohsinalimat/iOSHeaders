//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAssetReference, PUOneUpSuggestion, PUOneUpSuggestionsController, UIViewController;
@protocol UICoordinateSpace;

@protocol PUOneUpSuggestionsControllerDelegate <NSObject>

@optional
- (_Bool)oneUpSuggestionsController:(PUOneUpSuggestionsController *)arg1 canShowSuggestion:(PUOneUpSuggestion *)arg2 forAssetReference:(PUAssetReference *)arg3;
- (void)oneUpSuggestionsController:(PUOneUpSuggestionsController *)arg1 didSelectSuggestion:(PUOneUpSuggestion *)arg2 forAssetReference:(PUAssetReference *)arg3;
- (UIViewController *)viewControllerForOneUpSuggestionsController:(PUOneUpSuggestionsController *)arg1;
- (struct CGRect)oneUpSuggestionsController:(PUOneUpSuggestionsController *)arg1 frameForAssetReference:(PUAssetReference *)arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
@end

