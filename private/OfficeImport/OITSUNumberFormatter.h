//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, OITSULocaleStructuredDictionary;

__attribute__((visibility("hidden")))
@interface OITSUNumberFormatter : NSObject
{
    struct __CFLocale *mLocale;
    struct __CFArray *mDecimalFormatters;
    NSDictionary *mCurrencyFormatters;
    struct __CFArray *mPercentageFormatters;
    struct __CFArray *mScientificFormatters;
    struct __CFNumberFormatter *mFractionFormatter;
    NSString *mCurrencyString;
    NSString *mPercentageString;
    NSString *mScientificString;
    NSString *mDecimalString;
    NSString *mDecimalSeparator;
    NSString *mCurrencyDecimalSeparator;
    NSString *mGroupingSeparator;
    NSString *mCurrencyGroupingSeparator;
    NSString *mPercentSymbol;
    unsigned long long mGroupingSize;
    NSMutableArray *mTransformedDecimalStrings;
    NSMutableArray *mTransformedCurrencyStrings;
    NSMutableArray *mTransformedPercentageStrings;
    NSMutableArray *mTransformedScientificStrings;
    OITSULocaleStructuredDictionary *mHarmonizedNumberFormatterSymbols;
    NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;
    struct __CFString *mAdditionalCurrencyCode;
    NSDictionary *mAdditionalCurrencyCodeFormatters;
}

+ (id)userVisibleCurrencyCodes;
+ (unsigned long long)groupingSizeForLocale:(struct __CFLocale *)arg1;
+ (id)percentSymbolForLocale:(struct __CFLocale *)arg1;
+ (id)currencyGroupingSeparatorForLocale:(struct __CFLocale *)arg1;
+ (id)currencyDecimalSeparatorForLocale:(struct __CFLocale *)arg1;
+ (id)groupingSeparatorForLocale:(struct __CFLocale *)arg1;
+ (id)decimalSeparatorForLocale:(struct __CFLocale *)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
+ (id)numberFormatStringSpecialSymbols;
+ (id)currentLocaleCurrencyDecimalSeparator;
+ (id)currentLocaleDecimalSeparator;
+ (id)currentLocaleCurrencyCode;
+ (id)defaultCurrencyCodeForLocale:(struct __CFLocale *)arg1;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1 locale:(struct __CFLocale *)arg2;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (id)availableCurrencyCodes;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg1;
+ (void)initialize;
+ (id)formatterForLocale:(struct __CFLocale *)arg1;
+ (struct __CFNumberFormatter *)createHarmonizedCFNumberFormatterWithLocale:(struct __CFLocale *)arg1 style:(long long)arg2;
- (struct __CFArray *)p_scientificFormatters;
- (struct __CFArray *)p_percentageFormatters;
- (id)p_currencyFormatters;
- (struct __CFArray *)p_decimalFormatters;
- (id)p_createDictionaryOfCurrencyFormattersForCurrencies:(struct __CFArray *)arg1;
- (unsigned long long)groupingSize;
- (id)percentSymbol;
- (id)currencyGroupingSeparator;
- (id)currencyDecimalSeparator;
- (id)groupingSeparator;
- (id)decimalSeparator;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
- (id)currencyCode;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (void)p_loadHarmonizedNumberFormatterSymbols;
- (id)displayNameForCurrencyCode:(id)arg1;
- (id)findCurrencySymbolInString:(struct __CFString *)arg1 additionalCurrencyCode:(struct __CFString *)arg2 successfullString:(const struct __CFString **)arg3;
- (_Bool)p_valueFromString:(struct __CFString *)arg1 formatters:(struct __CFArray *)arg2 formatterCurrencyKeys:(struct __CFArray *)arg3 value:(double *)arg4 formatString:(const struct __CFString **)arg5 currencyCode:(const struct __CFString **)arg6;
- (_Bool)p_valueFromString:(struct __CFString *)arg1 formatters:(struct __CFArray *)arg2 value:(double *)arg3 formatString:(const struct __CFString **)arg4;
- (_Bool)fractionFromString:(struct __CFString *)arg1 value:(double *)arg2;
- (_Bool)scientificFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (_Bool)percentageFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (id)p_arrayOfString:(id)arg1 ofCount:(unsigned long long)arg2;
- (_Bool)currencyFromString:(struct __CFString *)arg1 additionalCurrencyCode:(struct __CFString *)arg2 value:(double *)arg3 formatString:(const struct __CFString **)arg4 currencyCode:(const struct __CFString **)arg5;
- (_Bool)decimalFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (void)numberPreferencesChanged:(id)arg1;
- (struct __CFNumberFormatter *)p_createHarmonizedCFNumberFormatterOfStyle:(long long)arg1;
- (void)dealloc;
- (id)initWithLocale:(const struct __CFLocale *)arg1;

@end

