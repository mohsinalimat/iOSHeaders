//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUControlView-Protocol.h>
#import <HomeUI/UIPickerViewDataSource-Protocol.h>
#import <HomeUI/UIPickerViewDelegate-Protocol.h>

@class NSFormatter, NSNumber, NSString, UIPickerView;
@protocol HUControlViewDelegate, HUWheelControlViewDelegate;

@interface HUWheelControlView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, HUControlView>
{
    _Bool _canBeHighlighted;
    NSString *_identifier;
    id <HUControlViewDelegate> _delegate;
    NSNumber *_minValue;
    NSNumber *_maxValue;
    NSNumber *_stepValue;
    id <HUWheelControlViewDelegate> _wheelDelegate;
    NSFormatter *_valueFormatter;
    UIPickerView *_pickerView;
}

+ (Class)valueClass;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) NSFormatter *valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property(nonatomic) __weak id <HUWheelControlViewDelegate> wheelDelegate; // @synthesize wheelDelegate=_wheelDelegate;
@property(copy, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(copy, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(copy, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(nonatomic) _Bool canBeHighlighted; // @synthesize canBeHighlighted=_canBeHighlighted;
@property(nonatomic) __weak id <HUControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_defaultStepValue;
- (id)_defaultMinValue;
- (id)_defaultMaxValue;
- (id)_defaultValueFormatter;
- (id)_formatValue:(id)arg1;
- (void)_setupConstraints;
- (long long)_wheelRowForValue:(id)arg1;
- (id)_wheelValueForRow:(long long)arg1;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(retain, nonatomic) id value;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

