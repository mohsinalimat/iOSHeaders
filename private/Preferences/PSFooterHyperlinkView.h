//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Preferences/PSHeaderFooterView-Protocol.h>
#import <Preferences/UITextViewDelegate-Protocol.h>

@class NSString, NSURL, UIImageView, UITextView;

@interface PSFooterHyperlinkView : UIView <PSHeaderFooterView, UITextViewDelegate>
{
    UITextView *_textView;
    NSString *_text;
    NSURL *_URL;
    struct _NSRange _linkRange;
    id _target;
    SEL _action;
    UIImageView *_iconView;
}

@property(retain) UIImageView *iconView; // @synthesize iconView=_iconView;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (double)preferredHeightForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain) NSURL *URL;
@property struct _NSRange linkRange;
@property(retain) NSString *text;
- (void)layoutSubviews;
- (struct UIEdgeInsets)textInsets;
- (void)_linkify;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

