//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UISearchController;

@interface UISearchContainerViewController : UIViewController
{
    UISearchController *_searchController;
}

@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)_transitionsChildViewControllers;
- (void)_prepareForContainerTransition:(id)arg1;
- (void)_presentSearchControllerIfNecessary;
- (id)initWithSearchController:(id)arg1;

@end
