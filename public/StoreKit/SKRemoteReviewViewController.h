//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKUIClientReviewViewController-Protocol.h>

@class NSString, SKStoreReviewViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController>
{
    SKStoreReviewViewController *_reviewViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) SKStoreReviewViewController *reviewViewController; // @synthesize reviewViewController=_reviewViewController;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

