//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchDisplayController.h>

@interface SUSearchDisplayController : UISearchDisplayController
{
    _Bool _store_navigationBarHidingEnabled;
}

- (void)setNavigationBarHidingEnabled:(_Bool)arg1;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isNavigationBarHidingEnabled;
- (id)_createPopoverController;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_noEventSetSearchFieldText:(id)arg1;

@end

