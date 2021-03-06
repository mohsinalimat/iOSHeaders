//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/ABPickerViewController.h>

@class ABItemLabelPicker, ABPropertyGroup, NSArray, NSString;

@interface ABLabelPickerViewController : ABPickerViewController
{
    NSArray *_additionalLabels;
    NSString *_selectedLabel;
    void *_addressBook;
    ABPropertyGroup *_propertyGroup;
    long long _itemIndex;
    ABItemLabelPicker *_labelPicker;
    _Bool _didCreateNewLabel;
}

@property(nonatomic) _Bool didCreateNewLabel; // @synthesize didCreateNewLabel=_didCreateNewLabel;
@property(retain, nonatomic) NSString *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (_Bool)_allowsAutorotation;
- (_Bool)itemLabelPickerShouldDismissKeyboard:(id)arg1;
- (void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(_Bool)arg2 animate:(_Bool)arg3;
- (void)itemLabelPickerDeletedLastCustomLabel:(id)arg1;
- (void)itemLabelPicker:(id)arg1 deletedCustomLabel:(id)arg2;
- (void)itemLabelPickerDidChangeSelection:(id)arg1;
- (double)ab_heightToFitForViewInPopoverView;
- (id)labelPicker;
- (struct CGSize)fullScreenContentSize;
- (void)setStyleProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1 propertyGroup:(id)arg2 itemIndex:(long long)arg3 additionalLabels:(id)arg4;

@end

