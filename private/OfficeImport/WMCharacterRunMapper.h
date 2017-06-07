//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class NSString, WDCharacterRun, WMStyle;

__attribute__((visibility("hidden")))
@interface WMCharacterRunMapper : CMMapper
{
    WDCharacterRun *wdCharacterRun;
    WMStyle *mStyle;
    float mFontSizeBumpFactor;
    NSString *mText;
    _Bool mIsDeleted;
}

+ (void)addNonCollapsableSpanAt:(id)arg1 withState:(id)arg2;
- (unsigned int)countAndStripLeadingTabs;
- (void)mapTabs:(unsigned int)arg1 at:(id)arg2 afterText:(id)arg3;
- (void)mapSubstring:(id)arg1 at:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)map1At:(id)arg1 withState:(id)arg2;
- (_Bool)isDeleted;
- (void)dealloc;
- (id)initWithText:(id)arg1;
- (id)initWithWDCharacterRun:(id)arg1 parent:(id)arg2;
- (int)defaultTabWidth;
- (id)baseStyle;
- (id)copyCharacterStyle;
- (id)boldStyle;

@end

