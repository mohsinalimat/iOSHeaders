//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSRowTableViewCell.h>

#import <PrototypeTools/UITextFieldDelegate-Protocol.h>

@class NSString;

@interface PTSEditRowTableViewCell : PTSRowTableViewCell <UITextFieldDelegate>
{
}

+ (long long)cellStyleForRow:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)valueForText:(id)arg1;
- (id)textForValue:(id)arg1;
- (void)updateDisplayedValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

