//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HealthUI/HKSimpleDataEntryCellType-Protocol.h>
#import <HealthUI/UITextFieldDelegate-Protocol.h>

@class HKCaretOptionalTextField, NSNumber, NSString, UILabel, UIView;
@protocol HKSimpleDataEntryCellDelegate;

@interface HKSimpleDataEntryPlainTextCell : UITableViewCell <UITextFieldDelegate, HKSimpleDataEntryCellType>
{
    UIView *_horizontalSeparator;
    NSNumber *_characterCountLimit;
    _Bool _editDisabled;
    id <HKSimpleDataEntryCellDelegate> _delegate;
    UILabel *_titleLabel;
    HKCaretOptionalTextField *_inputTextField;
}

@property(retain, nonatomic) HKCaretOptionalTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HKSimpleDataEntryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChangeValue:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
@property(nonatomic) _Bool editDisabled;
- (void)toggleMissingState:(_Bool)arg1 forKey:(id)arg2;
- (void)_setupLayoutConstraints;
- (void)_setupFonts;
- (void)_setupInputTextFieldWithIntention:(long long)arg1;
- (id)initWithIntention:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

