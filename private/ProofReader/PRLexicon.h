//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PRLexicon : NSObject
{
    NSString *_localization;
    NSString *_unigramsPath;
    NSString *_converterPath;
    const void *_lexicon;
    void *_converter;
}

+ (id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2 converterPath:(id)arg3;
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)getProbabilityForTokenID:(unsigned int)arg1 probability:(double *)arg2;
- (_Bool)getProbabilityForString:(id)arg1 probability:(double *)arg2;
- (id)stringForTokenID:(unsigned int)arg1;
- (unsigned int)tokenIDForString:(id)arg1;
- (void)enumerateEntriesForString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)createCursor;
- (void *)converter;
- (struct _LXLexicon *)lexicon;
- (void)dealloc;
- (id)description;
- (id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2 converterPath:(id)arg3;

@end

