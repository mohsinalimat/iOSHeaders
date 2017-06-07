//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerView.h>

#import <PassKitUI/PKDatePickerInternalImplementationProtocol-Protocol.h>
#import <PassKitUI/UIPickerViewDataSource-Protocol.h>
#import <PassKitUI/UIPickerViewDelegate-Protocol.h>

@class NSCalendar, NSDate, NSDateFormatter, NSNumber, NSString, UIFont;

@interface PKDatePickerImpl_CCExpiryPickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate>
{
    unsigned long long _calendarUnit[2];
    struct _NSRange _possibleRange[2];
    double _width[2];
    NSDateFormatter *_dateFormatter[2];
    NSNumber *_useDoubleMonthStyle;
    NSCalendar *_calendar;
    UIFont *_font;
    id _changeTarget;
    SEL _changeAction;
}

- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (double)_widthForComponent:(long long)arg1;
- (id)_stringForComponent:(long long)arg1 index:(unsigned long long)arg2;
- (id)_dateForComponent:(long long)arg1 index:(unsigned long long)arg2;
- (unsigned long long)_defaultIndexForComponent:(long long)arg1;
- (long long)_numberOfItemsForComponent:(long long)arg1;
- (double)_calculateWidthForComponent:(long long)arg1 usingFont:(id)arg2;
- (id)_dateWithCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;
- (_Bool)_useDoubleMonthStyle;
- (id)_dateFormatForCalendarUnit:(unsigned long long)arg1;
- (void)prepareToDie;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) NSDate *date;
- (id)initShowingDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3 useDarkAppearance:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

