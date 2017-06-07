//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EMFEmojiLocaleData : NSObject
{
    NSString *_localeIdentifier;
    struct __EmojiLocaleDataWrapper *_localeDataRef;
}

+ (id)emojiLocaleDataWithLocaleIdentifier:(id)arg1;
+ (id)emojiLocaleDataWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg1;
@property(readonly, nonatomic) const struct __EmojiLocaleDataWrapper *emojiLocaleDataRef; // @synthesize emojiLocaleDataRef=_localeDataRef;
@property(readonly, copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
- (void).cxx_destruct;
- (id)emojiTokensForOptions:(unsigned long long)arg1 presentationStyle:(int)arg2;
- (id)emojiTokensForText:(id)arg1 phoneticReading:(id)arg2 options:(unsigned long long)arg3 searchType:(int)arg4 includePrefixMatches:(_Bool)arg5;
- (void)enumerateSearchResultsInText:(id)arg1 range:(struct _NSRange)arg2 options:(unsigned long long)arg3 searchType:(int)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *emojiTokens;
- (void)dealloc;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)initWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg1;

@end

