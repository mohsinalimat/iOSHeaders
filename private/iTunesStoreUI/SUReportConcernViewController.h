//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUTableViewController.h>

@interface SUReportConcernViewController : SUTableViewController
{
    _Bool _animatingKeyboard;
    unsigned long long _itemIdentifier;
    struct UIEdgeInsets _originalTableInsets;
}

@property(readonly, nonatomic) unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void)_fetchConcerns;
- (void)_submit:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_showKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_hideKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (_Bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (id)initWithItemIdentifier:(unsigned long long)arg1;

@end

