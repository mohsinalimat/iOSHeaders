//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WBSURLSuffixChecker : NSObject
{
    struct {
        unsigned short _field1[27];
    } *_trie;
    unsigned int _trieNodeCount;
    unsigned long long _maxLength;
    NSMutableArray *_failedSuffixes;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasSuffix:(id)arg1;
- (id)initWithSuffixes:(id)arg1;
- (void)addStringToFailedSuffixes:(id)arg1;
- (_Bool)insertString:(id)arg1 intoTrieWithCache:(CDStruct_f2b84ca7 *)arg2;

@end

