//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsEditableTextCell.h>

@class UILabel, UIStepper;
@protocol AXUISettingsEditableTableCellWithStepperDelegate;

@interface AXUISettingsEditableTableCellWithStepper : AXUISettingsEditableTextCell
{
    UIStepper *_stepper;
    id <AXUISettingsEditableTableCellWithStepperDelegate> _delegate;
    UILabel *_secondsLabel;
}

@property(retain, nonatomic) UILabel *secondsLabel; // @synthesize secondsLabel=_secondsLabel;
@property(nonatomic) __weak id <AXUISettingsEditableTableCellWithStepperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIStepper *stepper; // @synthesize stepper=_stepper;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)_updateSecondsLabelForDelegate:(id)arg1;
- (void)_updateSecondsLabel;
- (void)_updateValue:(double)arg1 andText:(_Bool)arg2;
- (void)_textFieldChanged:(id)arg1;
- (void)_stepperChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)_stepperValueFormatString;
- (void)_updateAccessibilityLabelForTextField;
- (void)initializeView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

