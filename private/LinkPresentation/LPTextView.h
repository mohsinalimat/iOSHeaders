//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import <LinkPresentation/LPContentInsettable-Protocol.h>
#import <LinkPresentation/LPTextStyleable-Protocol.h>

@class LPImageView, LPTextViewStyle, UILabel;

__attribute__((visibility("hidden")))
@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable>
{
    UILabel *_textView;
    struct UIEdgeInsets _contentInset;
    LPImageView *_glyphView;
    LPTextViewStyle *_style;
}

- (void).cxx_destruct;
- (id)_createTextViewWithText:(id)arg1 style:(id)arg2;
- (struct UIEdgeInsets)_effectiveContentInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
@property(nonatomic) long long textAlignment;
- (double)descender;
- (double)ascender;
- (double)firstLineLeading;
@property(readonly, retain, nonatomic) LPTextViewStyle *style;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithText:(id)arg1 style:(id)arg2;
- (id)init;

@end

