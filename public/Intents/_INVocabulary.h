//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class INVocabularyUpdater, _INVocabularyValidator;

@interface _INVocabulary : NSObject
{
    INVocabularyUpdater *_vocabularyUpdater;
    _INVocabularyValidator *_validator;
}

+ (id)sharedVocabulary;
+ (void)enumerateVocabularyUsingBlock:(CDUnknownBlockType)arg1;
+ (id)supportedVocabularyStringTypes;
- (void).cxx_destruct;
- (void)removeAllVocabularyStrings;
- (void)setVocabulary:(id)arg1 ofType:(long long)arg2;
- (void)setVocabularyStrings:(id)arg1 ofType:(long long)arg2;
- (void)_THROW_EXCEPTION_FOR_ATTEMPT_TO_PROVIDE_VOCABULARY_OF_TYPE_THAT_APP_DOES_NOT_HANDLE_:(id)arg1;
- (void)_THROW_EXCEPTION_FOR_WATCH_OS_AND_TV_OS_UNAVAILABLE_;
- (void)_THROW_EXCEPTION_FOR_INVALID_VOCABULARY_TYPE_;
- (void)validateVocabularyType:(long long)arg1;
- (void)setValidatedVocabulary:(id)arg1 ofType:(long long)arg2;
- (id)_validator;
- (id)init;

@end

