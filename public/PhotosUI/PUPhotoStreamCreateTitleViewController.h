//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/UITextViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIColor, UILabel, UINavigationItem, UITextField, UITextView;
@protocol PUPhotoStreamCreateTitleDelegate;

@interface PUPhotoStreamCreateTitleViewController : UIViewController <UITextViewDelegate>
{
    UITextField *_titleField;
    UILabel *_descriptionLabel;
    UITextView *_textView;
    UILabel *_textPlaceholderLabel;
    UIColor *_placeholderColor;
    UINavigationItem *_navItem;
    UILabel *_instructionLabel;
    NSArray *_constraints;
    _Bool _hidePlaceholder;
    UILabel *_axPlaceholderLabel;
    NSLayoutConstraint *_standardHeightConstraint;
    NSLayoutConstraint *_axHeightConstraint;
    id <PUPhotoStreamCreateTitleDelegate> _titleDelegate;
}

@property(nonatomic) id <PUPhotoStreamCreateTitleDelegate> titleDelegate; // @synthesize titleDelegate=_titleDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_cancelPost:(id)arg1;
- (id)navigationItem;
- (void)_addConstraintsForTraitCollection:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (id)_placeholderColor;
- (void)textViewDidChange:(id)arg1;
- (void)contentSizeChanged;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

