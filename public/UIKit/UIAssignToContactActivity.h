//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <UIKit/CNContactPickerDelegate-Protocol.h>
#import <UIKit/CNContactViewControllerDelegate-Protocol.h>
#import <UIKit/UIImagePickerControllerDelegate-Protocol.h>
#import <UIKit/UINavigationControllerDelegate-Protocol.h>

@class CNContact, CNContactPickerViewController, NSString, UIImage, UIImagePickerController;

@interface UIAssignToContactActivity : UIActivity <CNContactPickerDelegate, CNContactViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIImage *_image;
    CNContactPickerViewController *_peoplePicker;
    CNContact *_person;
    UIImagePickerController *_imagePickerController;
}

+ (unsigned long long)_xpcAttributes;
@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(retain, nonatomic) CNContact *person; // @synthesize person=_person;
@property(retain, nonatomic) CNContactPickerViewController *peoplePicker; // @synthesize peoplePicker=_peoplePicker;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)_cleanup;
- (id)activityViewController;
- (void)_willPresentAsFormSheet;
- (id)_embeddedActivityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityTitle;
- (id)_activityImage;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

