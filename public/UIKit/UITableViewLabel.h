//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSAttributedString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewLabel : UILabel
{
    long long _savedNumberOfLines;
    double _firstParagraphFirstLineHeadIndent;
    NSAttributedString *_shadowAttributedText;
    UITableViewCell *_tableCell;
}

@property(nonatomic) __weak UITableViewCell *tableCell; // @synthesize tableCell=_tableCell;
- (void).cxx_destruct;
- (void)setAttributedText:(id)arg1;
- (void)_setFirstParagraphFirstLineHeadIndent:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_disabledFontColor;
- (void)setText:(id)arg1;
- (_Bool)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)arg1;
- (void)_cleanupErrantFirstLineHeadIndent;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setNumberOfLinesForAXLayoutIfNecessary;
- (void)_restoreNumberOfLines;
- (void)_clearNumberOfLines;

@end

