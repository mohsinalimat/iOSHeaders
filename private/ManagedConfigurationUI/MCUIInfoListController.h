//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, NSString;
@protocol MCUIInfoListDelegate;

@interface MCUIInfoListController : PSListController
{
    id <MCUIInfoListDelegate> _delegate;
    NSArray *_info;
    NSString *_navTitle;
    NSString *_continueButtonTitle;
}

@property(retain, nonatomic) NSString *continueButtonTitle; // @synthesize continueButtonTitle=_continueButtonTitle;
@property(nonatomic) __weak id <MCUIInfoListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(copy, nonatomic) NSArray *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setupNavBar:(_Bool)arg1;
- (void)_cancelButtonClicked;
- (void)_installButtonClicked;
- (void)_tellDelegateWeWantToContinue:(_Bool)arg1;

@end

