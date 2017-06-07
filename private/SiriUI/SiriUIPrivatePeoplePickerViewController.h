//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUISnippetViewController.h>

#import <SiriUI/SiriUIObjectPickerViewControllerDelegate-Protocol.h>

@class NSString, SAABPersonPicker, SiriUIObjectPickerViewController;

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController <SiriUIObjectPickerViewControllerDelegate>
{
    SAABPersonPicker *_picker;
    SiriUIObjectPickerViewController *_pickerController;
}

- (void).cxx_destruct;
- (void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
- (void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;
- (void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
- (id)viewControllerForPickerPresentation:(id)arg1;
- (double)desiredHeightForTransparentFooterView;
- (void)_showPicker:(id)arg1;
- (void)configureReusableTransparentFooterView:(id)arg1;
- (id)_pickerController;
- (Class)transparentFooterViewClass;
- (double)desiredHeightForWidth:(double)arg1;
- (void)loadView;
- (id)initWithSnippet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

