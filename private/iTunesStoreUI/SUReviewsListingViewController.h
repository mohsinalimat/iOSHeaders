//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController
{
    SUButtonAccessoryView *_accessoryView;
}

- (void)_reloadHeaderView;
- (id)_headerItem;
- (_Bool)_canWriteReview;
- (id)_accessoryView;
- (void)_writeAReview:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)newTermsAndConditionsFooter;
- (void)reloadForChangedRowCount:(long long)arg1;
- (void)reloadData;
- (void)loadView;
- (void)dealloc;

@end

