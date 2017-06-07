//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <TVMLKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVMLKit/_TVModalPresenterFocusing-Protocol.h>

@class NSArray, NSMapTable, NSString, UIView, UIViewController;

@interface __TVModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing>
{
    UIViewController *_rootViewController;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
    _Bool _isModalNavVisisble;
    NSArray *_previousViewControllers;
    CDUnknownBlockType _dismissalBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property(retain, nonatomic) NSArray *previousViewControllers; // @synthesize previousViewControllers=_previousViewControllers;
- (void).cxx_destruct;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;
- (void)_dismissForLastViewController:(_Bool)arg1;
- (void)_dismissForLastViewController;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutorotate;
- (void)reset;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

