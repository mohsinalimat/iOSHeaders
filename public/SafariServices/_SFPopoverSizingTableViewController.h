//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@interface _SFPopoverSizingTableViewController : UITableViewController
{
    _Bool _didUpdateTranslucentAppearanceAtLeastOnce;
    _Bool _didHaveTranslucentAppearance;
}

- (id)backgroundColorUsingTranslucentAppearance:(_Bool)arg1;
- (void)updateTranslucentAppearance;
@property(readonly, nonatomic) _Bool hasTranslucentAppearance;
- (void)_updateTranslucentAppearanceIfNeeded;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (double)_totalContentHeightForPreferredContentSize;

@end

