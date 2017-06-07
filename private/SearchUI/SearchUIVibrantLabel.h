//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface SearchUIVibrantLabel : UILabel
{
    unsigned long long _style;
}

+ (_Bool)richTextOverridesAsyncLoader:(id)arg1;
+ (id)stripUnnecessaryCharactersInString:(id)arg1;
+ (id)condenseWhitespaceForText:(id)arg1 keepNewlinesAndTabs:(_Bool)arg2;
+ (id)vibrantTextColorForStyle:(unsigned long long)arg1;
+ (id)textColorForStyle:(unsigned long long)arg1;
@property unsigned long long style; // @synthesize style=_style;
- (void)setVibrancyEnabled:(_Bool)arg1;
- (id)attributedStringForRichText:(id)arg1 keepWhitespace:(_Bool)arg2;
- (void)updateWithRichText:(id)arg1 keepWhitespace:(_Bool)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1;

@end

