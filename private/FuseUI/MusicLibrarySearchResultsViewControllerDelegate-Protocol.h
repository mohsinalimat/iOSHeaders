//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicLibrarySearchResultsViewController, NSString;

@protocol MusicLibrarySearchResultsViewControllerDelegate <NSObject>

@optional
- (void)librarySearchResultsViewController:(MusicLibrarySearchResultsViewController *)arg1 didSelectResultWithTitle:(NSString *)arg2;
- (void)librarySearchResultsViewControllerDidShowResultsView:(MusicLibrarySearchResultsViewController *)arg1;
- (void)librarySearchResultsViewControllerDidHideResultsView:(MusicLibrarySearchResultsViewController *)arg1;
@end

