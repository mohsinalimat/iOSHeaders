//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TIWordTokenizer;

__attribute__((visibility("hidden")))
@interface WebBookmarkTitleWordTokenizer : NSObject
{
    NSString *_string;
    unsigned long long _stringLength;
    TIWordTokenizer *_wordTokenizer;
    struct _NSRange _rangeOfNextToken;
    unsigned long long _startOfUnclassifiedRangeBeforeNextToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (struct _NSRange)advanceToNextToken;
- (void)setString:(id)arg1;
- (id)init;

@end

