//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStatusBarSystemNavigationItemView.h>

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView
{
    UISystemNavigationAction *_systemNavigationAction;
    NSString *_destinationText;
}

@property(retain, nonatomic) NSString *destinationText; // @synthesize destinationText=_destinationText;
@property(retain, nonatomic) UISystemNavigationAction *systemNavigationAction; // @synthesize systemNavigationAction=_systemNavigationAction;
- (void).cxx_destruct;
- (double)extraRightPadding;
- (id)shortenedTitleWithCompressionLevel:(int)arg1;
- (void)userDidActivateButton:(id)arg1;
- (long long)labelLineBreakMode;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
