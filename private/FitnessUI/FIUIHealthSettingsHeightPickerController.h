//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@class NSLengthFormatter;

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController
{
    NSLengthFormatter *_heightFormatter;
    CDUnknownBlockType _heightUpdateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType heightUpdateHandler; // @synthesize heightUpdateHandler=_heightUpdateHandler;
- (void).cxx_destruct;
- (id)_pickerDisplayStringForHeightForRow:(long long)arg1 forComponent:(long long)arg2;
- (void)_heightPickerUpdated;
- (void)setHeightQuantity:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)forceUpdate;

@end

