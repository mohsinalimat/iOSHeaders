//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/UITextFieldDelegate-Protocol.h>

@class CKDetailsViewAddGroupNameViewUITextField, NSString, UILabel;
@protocol CKDetailsAddGroupNameViewDelegate;

@interface CKDetailsAddGroupNameView : UIView <UITextFieldDelegate>
{
    _Bool _enabled;
    id <CKDetailsAddGroupNameViewDelegate> _delegate;
    NSString *_groupName;
    UILabel *_placeholderLabel;
    CKDetailsViewAddGroupNameViewUITextField *_inputField;
}

+ (double)preferredHeight;
@property(retain, nonatomic) CKDetailsViewAddGroupNameViewUITextField *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) __weak id <CKDetailsAddGroupNameViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)commitGroupName;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

