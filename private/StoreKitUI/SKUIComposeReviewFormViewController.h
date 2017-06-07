//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import <StoreKitUI/SKUIComposeReviewViewDelegate-Protocol.h>

@class NSString, SKUIComposeReviewView, SKUIReviewMetadata;
@protocol SKUIComposeReviewFormDelegate;

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate>
{
    SKUIComposeReviewView *_composeView;
    id <SKUIComposeReviewFormDelegate> _delegate;
    SKUIReviewMetadata *_review;
}

@property(nonatomic) __weak id <SKUIComposeReviewFormDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_submit;
- (void)_cancel;
- (void)composeReviewViewValidityChanged:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)setRating:(float)arg1;
@property(readonly, copy, nonatomic) SKUIReviewMetadata *editedReviewMetadata;
- (void)dealloc;
- (id)initWithReviewMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
