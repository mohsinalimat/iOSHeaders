//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUFeedCell.h>

@class NSAttributedString, UITextView;

__attribute__((visibility("hidden")))
@interface PUFeedCommentCell : PUFeedCell
{
    _Bool _shouldUseOpaqueBackground;
    NSAttributedString *_attributedText;
    long long _numberOfTextLines;
    long long _textAlignment;
    UITextView *__textView;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) UITextView *_textView; // @synthesize _textView=__textView;
@property(nonatomic) _Bool shouldUseOpaqueBackground; // @synthesize shouldUseOpaqueBackground=_shouldUseOpaqueBackground;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long numberOfTextLines; // @synthesize numberOfTextLines=_numberOfTextLines;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (id)_textViewBackgroundColor;
- (void)_updateLabelsBackgroundColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

