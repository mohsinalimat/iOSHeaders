//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (ContactsFoundation)
+ (_Bool)_cn_isBlank:(id)arg1;
- (void)_cn_eachCharacter:(CDUnknownBlockType)arg1;
- (struct _NSRange)_cn_rangeFromIndex:(unsigned long long)arg1;
- (id)_cn_SHA256HashStringWithSalt:(id)arg1;
- (id)_cn_nameComponentTokensUsingLocale:(id)arg1 inferredNameOrder:(long long *)arg2;
- (id)_cn_nameComponentTokens;
- (id)_cn_tokens;
- (id)_cn_trimmedString;
- (id)_cn_stringByNormalizingCase;
- (id)_cn_stringByDeletingNumberOfPathComponents:(unsigned long long)arg1;
- (id)_cn_stringByAddingPercentEscapesToEntireURL;
- (id)_cn_stringByAddingPercentEscapesIfNecessary;
- (_Bool)_cn_containsSubstring:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_cn_containsSubstring:(id)arg1;
- (id)_cn_stringByDeletingCharactersInSet:(id)arg1;
- (_Bool)_cn_containsCharacterInSet:(id)arg1;
- (_Bool)_cn_hasSuffix:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_cn_hasSuffix:(id)arg1;
- (_Bool)_cn_hasPrefix:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_cn_hasPrefix:(id)arg1;
- (_Bool)_cn_hasCaseAndDiacriticInsensitivePrefix:(id)arg1;
- (_Bool)_cn_caseInsensitiveIsEqual:(id)arg1;
- (_Bool)_cn_isBlank;
@end

