//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (IC)
- (struct _NSRange)paragraphRangeForRange:(struct _NSRange)arg1 contentEnd:(unsigned long long *)arg2;
- (id)ic_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)ic_stringByReplacingNewlineCharactersWithWhiteSpace;
- (id)ic_substringWithRange:(struct _NSRange)arg1;
- (id)ic_substringToIndex:(unsigned long long)arg1;
- (id)ic_substringFromIndex:(unsigned long long)arg1;
- (void)enumerateContentLineRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateParagraphsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)numberOfLines;
@property(readonly, nonatomic) NSString *ic_sanitizedFilenameString;
@property(readonly, nonatomic) NSString *ic_trimmedString;
- (id)md5;
@end

