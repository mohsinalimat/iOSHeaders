//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSLDataTokenizer, NSMutableDictionary, NSNumber;

@interface CSLMessageTextProcessor : NSObject
{
    NSNumber *_featureNGramLimit;
    NSMutableDictionary *_stopWords;
    CSLDataTokenizer *_tokenizer;
}

@property(retain, nonatomic) CSLDataTokenizer *tokenizer; // @synthesize tokenizer=_tokenizer;
@property(retain, nonatomic) NSMutableDictionary *stopWords; // @synthesize stopWords=_stopWords;
@property(retain, nonatomic) NSNumber *featureNGramLimit; // @synthesize featureNGramLimit=_featureNGramLimit;
- (void).cxx_destruct;
- (_Bool)isStopWordInLocale:(id)arg1 word:(id)arg2;
- (_Bool)loadStopWordsInLocale:(id)arg1;
- (id)processMessageWithBody:(id)arg1 subject:(id)arg2 inLocale:(id)arg3;
- (id)processMessageWithBody:(id)arg1 subject:(id)arg2;
- (id)processMessageWithBody:(id)arg1 inLocale:(id)arg2;
- (id)processMessageWithBody:(id)arg1;
- (id)createNGramFeaturesWithSource:(id)arg1 maxNgramCount:(long long)arg2 usingTokens:(id)arg3 inLocale:(id)arg4;
- (id)createUnigramFeaturesWithSource:(id)arg1 usingTokens:(id)arg2 inLocale:(id)arg3;
- (id)createFeaturesWithSource:(id)arg1 usingTokens:(id)arg2 inLocale:(id)arg3;
- (id)initWithNGramLimit:(int)arg1;
- (id)init;

@end

