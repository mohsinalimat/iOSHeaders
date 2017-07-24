//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject
{
    struct USet *m_precomposedCharacterSet;
    struct USet *m_acceptableCharacterSet;
    TIInputMode *_inputMode;
    long long _currentUserInterfaceIdiom;
}

+ (id)createSpecializationForInputMode:(id)arg1;
+ (struct USet *)createAcceptableCharacterSetForKeyboardLocale:(id)arg1;
@property(nonatomic) long long currentUserInterfaceIdiom; // @synthesize currentUserInterfaceIdiom=_currentUserInterfaceIdiom;
@property(readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (id)replacementForDoubleSpace;
- (id)accentKeyStringForKeyboardState:(id)arg1;
- (id)wordSeparator;
- (_Bool)shouldLearnLowercaseAtBeginningOfSentence;
- (_Bool)shouldAddModifierSymbolsToWordCharacters;
- (_Bool)supportsLearning;
- (_Bool)shouldExtendPriorWord;
- (id)keyboardBehaviors;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1;
- (void)dealloc;
- (id)initWithInputMode:(id)arg1;
- (_Bool)shouldConvertAutocorrectionCandidatesToFullWidth;
- (id)dictionaryInputMode;
- (_Bool)allowsAutocorrectionOfValidWords;
- (_Bool)shouldConvertCandidateToExternal;
- (const struct USet *)precomposedCharacterSet;
- (_Bool)canHandleKeyHitTest;
- (_Bool)dictionaryUsesExternalEncoding;
- (struct USet *)createAcceptableCharacterSet;
- (_Bool)acceptsCharacter:(unsigned int)arg1;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (id)terminatorsDeletingAutospace;
- (id)wordCharacters;
- (id)sentenceTrailingCharacters;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)nonstopPunctuationCharacters;
- (id)internalStringToExternal:(id)arg1;
- (id)externalStringToInternal:(id)arg1;
- (_Bool)doesComposeText;
- (void)specializeInputManager:(struct TIInputManager *)arg1 forLayoutState:(id)arg2;
- (struct TIInputManager *)createInputManager;

@end

