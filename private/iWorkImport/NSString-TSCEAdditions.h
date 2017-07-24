//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSCEAdditions)
+ (id)tsce_stringWithCellRange:(struct TSCERangeCoordinate)arg1 stickyBits:(unsigned char)arg2;
+ (id)tsce_stringWithCellID:(struct TSUCellCoord)arg1;
+ (id)tsce_stringWithCellID:(struct TSUCellCoord)arg1 stickyBits:(unsigned char)arg2;
+ (id)tsce_stringWithSignedCellID:(CDStruct_382da14b)arg1 stickyBits:(unsigned char)arg2;
- (id)tsce_stringByFoldingForNamedReferenceMatchingWithLocale:(id)arg1;
- (id)tsce_referenceComponentsSeparatedBySpace;
- (id)tsce_referenceComponentsSeparatedByColon;
- (id)ptsce_referenceComponentsSeparatedByCharacterInSet:(id)arg1;
- (id)tsce_referenceComponentsSeparatedByPathDelimiter;
- (id)tsce_stringByRemovingNewlines;
- (id)tsce_stringByReplacingTabsAndNewlinesWithASingleSpace;
- (id)tsce_newStringByAddingDoubleQuoteEscapesIfNecessary;
- (id)tsce_stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1 preserveTrailingUnquotedWhitespace:(_Bool)arg2;
- (id)tsce_stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1;
- (id)tsce_stringByUnescapingPartialQuotedString;
- (_Bool)tsce_isSingleQuoted;
- (id)tsce_stringByUnescapingSingleQuotes;
- (id)tsce_stringByUnescapingSingleQuotesAndGettingTrailingWhitespaceCount:(unsigned long long *)arg1;
- (id)tsce_newStringByAddingSingleQuoteEscapesIfNecessary;
- (id)tsce_stringByForcingSingleQuoteEscapes:(_Bool)arg1;
- (id)tsce_stringByAddingSingleQuoteEscapesIfNecessary;
- (id)tsce_stringByAddingSingleQuoteEscapes;
- (id)tsce_newStringByForcingSingleQuoteEscapes:(_Bool)arg1;
- (_Bool)tsce_needsReferenceSingleQuoteEscaping;
- (void)tsce_p_initializeQuotes;
- (struct TSUCellCoord)tsce_coordinateValueGettingStickyBits:(char *)arg1;
- (struct TSUCellCoord)tsce_coordinateValue;
- (id)tsce_initWithCellID:(CDStruct_382da14b)arg1 stickyBits:(unsigned char)arg2;
@end

