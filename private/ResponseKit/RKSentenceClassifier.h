//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSValue;

@interface RKSentenceClassifier : NSObject
{
    _Bool _lexicalClassAvailable;
    _Bool _lemmaAvailable;
    _Bool _sentenceIsTerminated;
    _Bool _sentenceIsAllSymbols;
    _Bool _sentenceHasQuestionTerminator;
    _Bool _sentenceHasAlternativeConjunction;
    NSArray *_sentenceEntities;
    NSString *_languageIdentifier;
    NSString *_sentenceStringOriginal;
    NSString *_sentenceString;
    NSValue *_sentenceTag;
    NSArray *_inversions;
    NSArray *_interrogatives;
    NSArray *_choiceDelimiters;
    NSArray *_alternatives;
    NSArray *_appreciations;
    NSArray *_dataDetected;
    NSString *_RKLinguisticTagDataDetected;
}

+ (id)sentenceClassification:(id)arg1 withLanguageIdentifier:(id)arg2 options:(unsigned long long)arg3;
+ (id)stringFromLexicalEntities:(id)arg1;
+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1 withLocale:(id)arg2;
+ (id)appreciationKeywordsForLanguage:(id)arg1;
+ (id)alternativeInversionsForLanguage:(id)arg1;
+ (id)polarTagRegularExpressionForLanguage:(id)arg1;
+ (id)sensitiveSubjectRegularExpressionForLanguage:(id)arg1;
+ (id)categoryKeywordMapForLanguage:(id)arg1;
+ (_Bool)canClassifyLanguageIdentifier:(id)arg1;
+ (Class)subclassForLocale:(id)arg1;
+ (Class)subclassForLanguageIdentifier:(id)arg1;
+ (id)languageIdentifierFromClassName;
@property(retain) NSString *RKLinguisticTagDataDetected; // @synthesize RKLinguisticTagDataDetected=_RKLinguisticTagDataDetected;
@property(retain) NSArray *dataDetected; // @synthesize dataDetected=_dataDetected;
@property(retain) NSArray *appreciations; // @synthesize appreciations=_appreciations;
@property(retain) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property(retain) NSArray *choiceDelimiters; // @synthesize choiceDelimiters=_choiceDelimiters;
@property(retain) NSArray *interrogatives; // @synthesize interrogatives=_interrogatives;
@property(retain) NSArray *inversions; // @synthesize inversions=_inversions;
@property(retain) NSValue *sentenceTag; // @synthesize sentenceTag=_sentenceTag;
@property _Bool sentenceHasAlternativeConjunction; // @synthesize sentenceHasAlternativeConjunction=_sentenceHasAlternativeConjunction;
@property _Bool sentenceHasQuestionTerminator; // @synthesize sentenceHasQuestionTerminator=_sentenceHasQuestionTerminator;
@property _Bool sentenceIsAllSymbols; // @synthesize sentenceIsAllSymbols=_sentenceIsAllSymbols;
@property _Bool sentenceIsTerminated; // @synthesize sentenceIsTerminated=_sentenceIsTerminated;
@property(retain) NSString *sentenceString; // @synthesize sentenceString=_sentenceString;
@property(retain) NSString *sentenceStringOriginal; // @synthesize sentenceStringOriginal=_sentenceStringOriginal;
@property(readonly) _Bool lemmaAvailable; // @synthesize lemmaAvailable=_lemmaAvailable;
@property(readonly) _Bool lexicalClassAvailable; // @synthesize lexicalClassAvailable=_lexicalClassAvailable;
@property(readonly) NSString *languageIdentifier; // @synthesize languageIdentifier=_languageIdentifier;
@property(retain) NSArray *sentenceEntities; // @synthesize sentenceEntities=_sentenceEntities;
- (void).cxx_destruct;
- (id)classifySentence;
- (void)analyzeSentence;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)sentenceClassification:(id)arg1 options:(unsigned long long)arg2;
- (id)lexicalEntitiesFromString:(id)arg1;
- (id)init;
@property(readonly) NSArray *alternativeConjunctions;

@end

