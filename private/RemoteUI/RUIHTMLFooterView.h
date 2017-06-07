//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RemoteUI/RUIWebContainerViewDelegate-Protocol.h>
#import <RemoteUI/RemoteUITableFooter-Protocol.h>

@class NSString, NSURL, RUIWebContainerView;
@protocol RUITableFooterDelegate;

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter>
{
    RUIWebContainerView *_webContainerView;
    id <RUITableFooterDelegate> _delegate;
    NSURL *_baseURL;
}

@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) __weak id <RUITableFooterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

