//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL, PSSpotlightSearchResultsController, UIImage;

@protocol PSSpotlightSearchResultsControllerDelegate
- (UIImage *)searchResultsController:(PSSpotlightSearchResultsController *)arg1 iconForCategory:(NSString *)arg2;
- (long long)searchResultsController:(PSSpotlightSearchResultsController *)arg1 sortCategory1:(NSString *)arg2 sortCategory2:(NSString *)arg3;
- (void)searchResultsController:(PSSpotlightSearchResultsController *)arg1 didSelectURL:(NSURL *)arg2;
@end
