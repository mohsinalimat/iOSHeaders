//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OITSUCustomFormatData.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface OITSUMutableCustomFormatData : OITSUCustomFormatData
{
}

+ (id)customFormatData;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned short currencyCodeIndex; // @dynamic currencyCodeIndex;
@property(nonatomic) unsigned char decimalWidth; // @dynamic decimalWidth;
@property(nonatomic) _Bool formatContainsIntegerToken; // @dynamic formatContainsIntegerToken;
@property(copy, nonatomic) NSString *formatString; // @dynamic formatString;
@property(nonatomic) int fractionAccuracy; // @dynamic fractionAccuracy;
@property(nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; // @dynamic indexFromRightOfLastDigitPlaceholder;
@property(copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes; // @dynamic interstitialStringInsertionIndexes;
@property(copy, nonatomic) NSArray *interstitialStrings; // @dynamic interstitialStrings;
@property(nonatomic) _Bool isComplexFormat; // @dynamic isComplexFormat;
@property(nonatomic) _Bool isConditional; // @dynamic isConditional;
@property(nonatomic) unsigned char minimumIntegerWidth; // @dynamic minimumIntegerWidth;
@property(nonatomic) unsigned char numberOfHashDecimalPlaceholders; // @dynamic numberOfHashDecimalPlaceholders;
@property(nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; // @dynamic numberOfNonSpaceDecimalPlaceholderDigits;
@property(nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; // @dynamic numberOfNonSpaceIntegerPlaceholderDigits;
@property(nonatomic) _Bool requiresFractionReplacement; // @dynamic requiresFractionReplacement;
@property(nonatomic) double scaleFactor; // @dynamic scaleFactor;
@property(nonatomic) _Bool showThousandsSeparator; // @dynamic showThousandsSeparator;
@property(nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; // @dynamic totalNumberOfDecimalPlaceholdersInFormat;
@property(nonatomic) _Bool useAccountingStyle; // @dynamic useAccountingStyle;

@end

