//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKAdaptivePresentedControllerProtocol-Protocol.h>
#import <ChatKit/UITableViewDataSource-Protocol.h>
#import <ChatKit/UITableViewDelegate-Protocol.h>

@class CKStickerDetailNavigationBar, NSArray, NSString, UIButton, UITableView, UIVisualEffectView;
@protocol CKStickerDetailViewControllerDelegate;

@interface CKStickerDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CKAdaptivePresentedControllerProtocol>
{
    id <CKStickerDetailViewControllerDelegate> _delegate;
    NSArray *_chatItems;
    UITableView *_tableView;
    CKStickerDetailNavigationBar *_navigationBar;
    UIVisualEffectView *_visualEffectView;
}

@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) CKStickerDetailNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *chatItems; // @synthesize chatItems=_chatItems;
@property(nonatomic) __weak id <CKStickerDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_viewButtonTapped:(id)arg1;
- (_Bool)constrainToPresentingVCBounds;
- (_Bool)preserveModalPresentationStyle;
- (_Bool)wantsWindowedPresentation;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)shouldAutorotate;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
@property(readonly, nonatomic) UIButton *closeButton;
- (id)initWithStickerChatItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

