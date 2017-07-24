//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCharacterSet, TISmartPunctuationOptions;

@interface TISmartPunctuationController : NSObject
{
    _Bool _leftSingleQuotationMarkInserted;
    _Bool _leftDoubleQuotationMarkInserted;
    NSCharacterSet *_alphanumericCharacterSet;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_decimalDigitCharacterSet;
    NSCharacterSet *_punctuationCharacterSet;
    NSCharacterSet *_openerCharacterSet;
    NSCharacterSet *_germanApostrophePrecedingSet;
    NSCharacterSet *_dutchApostropheFollowingSet;
    NSCharacterSet *_cornerBracketCharacterSet;
    NSCharacterSet *_bookTitleMarkCharacterSet;
    NSCharacterSet *_dashCharacterSet;
    NSCharacterSet *_enDashCharacterSet;
    NSCharacterSet *_emDashCharacterSet;
    _Bool _smartQuotesEnabled;
    _Bool _smartDashesEnabled;
    unsigned long long _autoQuoteType;
    TISmartPunctuationOptions *_smartPunctuationOptions;
}

+ (id)_chineseContextualVariantMapping;
@property(retain, nonatomic) TISmartPunctuationOptions *smartPunctuationOptions; // @synthesize smartPunctuationOptions=_smartPunctuationOptions;
@property(nonatomic) unsigned long long autoQuoteType; // @synthesize autoQuoteType=_autoQuoteType;
@property(nonatomic) _Bool smartDashesEnabled; // @synthesize smartDashesEnabled=_smartDashesEnabled;
@property(nonatomic) _Bool smartQuotesEnabled; // @synthesize smartQuotesEnabled=_smartQuotesEnabled;
- (id)_checkInput:(id)arg1 forContextualDashesInDocumentState:(id)arg2;
- (id)_checkInput:(id)arg1 forContextualChinesePunctuationInDocumentState:(id)arg2;
- (id)_checkInput:(id)arg1 forContextualQuotesInDocumentState:(id)arg2;
- (id)_alternatingStringForInputString:(id)arg1 isLockedInput:(_Bool)arg2 hasMarkedText:(_Bool)arg3;
- (void)reset;
- (id)smartPunctuationOutputForInput:(id)arg1 isLockedInput:(_Bool)arg2 documentState:(id)arg3;
- (id)smartPunctuationResultsForString:(id)arg1;
- (void)_initializeDashCharacterSetsIfNecessary;
- (void)_initializeQuoteCharacterSetsIfNecessary;
- (void)dealloc;
- (id)init;

@end

