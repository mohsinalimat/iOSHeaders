//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class UIView;

@interface TSKModalNavigationController : UINavigationController
{
    UIView *mTopSeparator;
    _Bool mShowTopSeparator;
    _Bool mIsFullscreenViewController;
}

@property(nonatomic) _Bool isFullscreenViewController; // @synthesize isFullscreenViewController=mIsFullscreenViewController;
@property(nonatomic) _Bool showTopSeparator; // @synthesize showTopSeparator=mShowTopSeparator;
- (long long)positionForBar:(id)arg1;
- (void)viewDidLoad;
- (void)layoutViews;
- (void)p_statusBarWillChange:(id)arg1;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;

@end

