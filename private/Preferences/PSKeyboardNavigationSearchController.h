//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchController.h>

@class PSKeyboardNavigationSearchBar, UIViewController;
@protocol PSKeyboardNavigationSearchResultsController;

@interface PSKeyboardNavigationSearchController : UISearchController
{
    UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController;
    PSKeyboardNavigationSearchBar *searchBar;
}

@property(retain, nonatomic) PSKeyboardNavigationSearchBar *searchBar; // @synthesize searchBar;
@property(retain, nonatomic) UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController; // @synthesize searchResultsController;
- (void).cxx_destruct;
- (void)_upArrowKeyPressed;
- (void)_downArrowKeyPressed;
- (void)_escapeKeyPressed;
- (id)initWithSearchResultsController:(id)arg1;

@end

