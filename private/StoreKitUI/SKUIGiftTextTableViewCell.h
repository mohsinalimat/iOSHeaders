//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <StoreKitUI/UITextViewDelegate-Protocol.h>

@class NSString, UILabel, UITextView, UIView;

@interface SKUIGiftTextTableViewCell : UITableViewCell <UITextViewDelegate>
{
    UIView *_bottomBorderView;
    UILabel *_label;
    long long _maximumCharacterCount;
    UILabel *_placeholderLabel;
    UITextView *_textView;
    UIView *_topBorderView;
}

+ (id)newTextView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long maximumCharacterCount; // @synthesize maximumCharacterCount=_maximumCharacterCount;
- (void).cxx_destruct;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *label;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

