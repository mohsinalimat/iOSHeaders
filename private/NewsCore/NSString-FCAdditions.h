//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (FCAdditions)
+ (_Bool)fc_string:(id)arg1 isEqualToString:(id)arg2;
+ (id)stringWithValue:(id)arg1;
- (id)fc_numberFollowingString:(id)arg1;
- (id)fc_stringByPrefixingLinesWithString:(id)arg1;
- (id)fc_stringByMultiplyingStringByCount:(unsigned long long)arg1;
- (id)stringByReplacingPrefix:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)fc_stringByRemovingPunctuation;
- (id)fc_lowerCaseStringByTrimmingWhiteSpace;
- (id)tokenizedLowerCaseStringWithMinimumLength:(unsigned long long)arg1;
- (id)fc_lowercaseTokensWithMinimumLength:(unsigned long long)arg1;
@property(readonly, nonatomic) struct _NSRange range;
@end
