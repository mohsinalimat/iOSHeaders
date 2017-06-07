//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>
#import <HealthUI/HKMedicalIDEditorCellHeightChangeDelegate-Protocol.h>

@class HKMedicalIDEditorMultilineStringCell, _HKMedicalIDMultilineStringCell;
@protocol HKEmergencyCardRowHeightChangeDelegate;

@interface HKEmergencyCardMultilineTextTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate>
{
    _HKMedicalIDMultilineStringCell *_labelCell;
    HKMedicalIDEditorMultilineStringCell *_editableCell;
    id <HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;
}

@property(nonatomic) __weak id <HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate; // @synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate;
- (void).cxx_destruct;
- (void)commitEditing;
- (void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)setData:(id)arg1;
- (double)_cellFittedHeightWithWidth:(double)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (id)_cell;
- (id)_editableCell;
- (id)_labelCell;
- (void)_configureEditableCell:(id)arg1;
- (id)_placeholderText;
- (void)_updateMultilineStringValueWithValue:(id)arg1;
- (id)_multilineStringValue;

@end

