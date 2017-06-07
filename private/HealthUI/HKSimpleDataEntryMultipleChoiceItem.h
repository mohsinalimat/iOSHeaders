//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKSimpleDataEntryItemType-Protocol.h>
#import <HealthUI/UIPickerViewDataSource-Protocol.h>
#import <HealthUI/UIPickerViewDelegate-Protocol.h>

@class HKSimpleDataEntryPlainTextCell, NSArray, NSNumber, NSString, UIPickerView;
@protocol HKSimpleDataEntryItemDelegate;

@interface HKSimpleDataEntryMultipleChoiceItem : NSObject <UIPickerViewDelegate, UIPickerViewDataSource, HKSimpleDataEntryItemType>
{
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSNumber *_chosenIndex;
    NSArray *_choiceDisplayValues;
    NSArray *_choices;
    UIPickerView *_picker;
    id <HKSimpleDataEntryItemDelegate> _delegate;
    unsigned long long _placeholderType;
}

@property(nonatomic) unsigned long long placeholderType; // @synthesize placeholderType=_placeholderType;
@property(nonatomic) __weak id <HKSimpleDataEntryItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)_setTextForInputTextField:(id)arg1;
- (void)_setupPlaceholder;
- (void)doneButtonTapped:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (void)beginEditing;
- (void)updateCellDisplay;
- (id)cell;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 choices:(id)arg3 choiceDisplayNames:(id)arg4 defaultChoice:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

