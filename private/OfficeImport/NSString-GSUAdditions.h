//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (GSUAdditions)
+ (id)gsu_formattedStringWithDouble:(double)arg1;
+ (id)gsu_tokenWithLength:(unsigned long long)arg1;
+ (id)gsu_UUIDString;
- (id)gsu_realpath;
- (id)gsu_singleLineForLog;
- (id)gsu_stripTrailingSlashesIfPresent;
- (id)gsu_stripTrailingChars:(BOOL)arg1;
- (id)gsu_splitWithoutLastEmptyEntryWithDelimiter:(id)arg1 isEndWithDelimiter:(_Bool *)arg2;
- (id)gsu_splitNumParts:(unsigned long long)arg1 delimiter:(id)arg2;
- (long long)gsu_uInt64Value:(unsigned long long *)arg1;
- (unsigned long long)gsu_crc32WithInterval:(unsigned long long)arg1;
- (unsigned long long)gsu_unsignedIntegerValue;
@end

