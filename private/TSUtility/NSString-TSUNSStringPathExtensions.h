//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSUNSStringPathExtensions)
+ (id)stringByHexEncodingData:(id)arg1;
- (_Bool)isPathCreatedByAppendingPathComponent:(id)arg1 insideBasePath:(id)arg2;
- (id)pathToRelativeComponentPath:(id)arg1;
- (id)stringWithPathRelativeTo:(id)arg1 allowBacktracking:(_Bool)arg2;
- (id)stringWithPathRelativeTo:(id)arg1;
- (_Bool)containsSubstring:(id)arg1;
- (void)enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)range;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
@end

