//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SearchUI/UITextViewDelegate-Protocol.h>

@class NSString;
@protocol SearchUIFirstTimeExperienceDelegate;

@interface SearchUIFirstTimeExperienceViewController : UIViewController <UITextViewDelegate>
{
    id <SearchUIFirstTimeExperienceDelegate> _delegate;
    NSString *_privacyDetailsTitle;
    NSString *_privacyDetailsText;
    unsigned long long _style;
    unsigned long long _supportedDomains;
    NSString *_explanationText;
    NSString *_learnMoreText;
    NSString *_continueButtonTitle;
    long long _horizontalSizeClass;
}

@property long long horizontalSizeClass; // @synthesize horizontalSizeClass=_horizontalSizeClass;
@property(retain) NSString *continueButtonTitle; // @synthesize continueButtonTitle=_continueButtonTitle;
@property(retain) NSString *learnMoreText; // @synthesize learnMoreText=_learnMoreText;
@property(retain) NSString *explanationText; // @synthesize explanationText=_explanationText;
@property unsigned long long supportedDomains; // @synthesize supportedDomains=_supportedDomains;
@property unsigned long long style; // @synthesize style=_style;
@property(retain) NSString *privacyDetailsText; // @synthesize privacyDetailsText=_privacyDetailsText;
@property(retain) NSString *privacyDetailsTitle; // @synthesize privacyDetailsTitle=_privacyDetailsTitle;
@property(nonatomic) __weak id <SearchUIFirstTimeExperienceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showPrivacyView;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)continueButtonPressed;
- (_Bool)isPad;
- (void)remakeViewsForSizeClass:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)makeViews;
- (id)initWithStyle:(unsigned long long)arg1 supportedDomains:(unsigned long long)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5 privacyDetailsTitle:(id)arg6 privacyDetailsText:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

