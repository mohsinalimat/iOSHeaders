//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MessageUI/UITableViewDataSource-Protocol.h>
#import <MessageUI/UITableViewDelegate-Protocol.h>

@class MFComposeRecipientTextView, NSArray, NSMutableArray, NSMutableIndexSet, NSString, UITableView;

@interface MFMailComposeCorecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSMutableIndexSet *_selectedIndexes;
    NSMutableArray *_recipients;
    MFComposeRecipientTextView *_recipientView;
}

@property(retain, nonatomic) MFComposeRecipientTextView *recipientView; // @synthesize recipientView=_recipientView;
@property(readonly, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_didTapDoneButton:(id)arg1;
- (void)_dismissAndAddSelectedContacts;
- (void)dealloc;
- (id)initWithRecentComposeRecipients:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

