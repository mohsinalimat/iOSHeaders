//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSMutableArray, NSString;
@protocol MSCLTokenTextViewDelegate;

@interface MSCLTokenTextView : UITextView
{
    long long _maximumTagLength;
    NSString *_tagDelimeter;
    NSMutableArray *_tokenViews;
    id <MSCLTokenTextViewDelegate> _changeDelegate;
    NSString *_tagSuffix;
}

@property(copy, nonatomic) NSString *tagSuffix; // @synthesize tagSuffix=_tagSuffix;
@property(nonatomic) long long maximumTagLength; // @synthesize maximumTagLength=_maximumTagLength;
@property(nonatomic) __weak id <MSCLTokenTextViewDelegate> changeDelegate; // @synthesize changeDelegate=_changeDelegate;
@property(copy, nonatomic) NSString *tagDelimeter; // @synthesize tagDelimeter=_tagDelimeter;
- (void).cxx_destruct;
- (struct _NSRange)_tagRangeForRange:(struct _NSRange)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)textWithResolvedTokenStrings;
@property(readonly, nonatomic) struct CGRect textRectForSelectedRange;
- (void)setAttributedText:(id)arg1;
- (_Bool)selectTokenAtIndex:(long long)arg1;
- (void)reloadTokenViews;
- (void)reloadTokenSelection;
@property(readonly, copy, nonatomic) NSString *pendingTagForSelectedRange;
- (id)pendingTagForRange:(struct _NSRange)arg1 usedRange:(struct _NSRange *)arg2;
- (void)replaceTextInRange:(struct _NSRange)arg1 withTokenAttachment:(id)arg2 suffix:(id)arg3;
- (void)insertTokenWithAttachment:(id)arg1;
- (void)enumerateTokenAttachmentsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

