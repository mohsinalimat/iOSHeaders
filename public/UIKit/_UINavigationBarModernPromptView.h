//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFontMetrics, UILabel;

__attribute__((visibility("hidden")))
@interface _UINavigationBarModernPromptView : UIView
{
    UILabel *_promptLabel;
    UIFontMetrics *_fontMetrics;
    NSString *_prompt;
    UIColor *_textColor;
}

@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)_promptHeight;
- (id)defaultFontDescriptor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updatePromptLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

