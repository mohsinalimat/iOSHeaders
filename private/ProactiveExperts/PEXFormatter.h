//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSDateComponentsFormatter, NSDateFormatter, NSLengthFormatter, NSLocale, NSMeasurementFormatter, NSString, NSURL, PEXCriteria;

@interface PEXFormatter : NSObject
{
    PEXCriteria *_criteria;
    NSLocale *_locale;
    NSDateFormatter *_birthdayFormatter;
    NSDateFormatter *_chineseBirthdayFormatter;
    NSDateFormatter *_yearlessChineseBirthdayFormatter;
    NSDateFormatter *_shortEventFormatter;
    NSDateFormatter *_longEventFormatter;
    NSCache *_localizedLabelCache;
    NSCache *_dateFormatCache;
    NSURL *_labeledValueLocalizationURL;
    NSCache *_appNameCache;
    NSString *_appNameFallbackLanguage;
    NSString *_appNameDesiredLanguage;
    NSMeasurementFormatter *_measurementWholeFormatter;
    NSMeasurementFormatter *_measurementDecimalFormatter;
    NSMeasurementFormatter *_measurementUnscaledFormatter;
    NSLengthFormatter *_lengthFormatter;
    NSDateComponentsFormatter *_dateComponentFormatter;
}

+ (id)new;
+ (id)keyDictionaryForCriteria:(id)arg1;
+ (id)formatterWithCriteria:(id)arg1;
- (void).cxx_destruct;
- (id)_localizedStringForKey:(id)arg1;
- (id)timeLeftLabel;
- (id)streetLabel;
- (id)distanceLabel;
- (id)destinationLabel;
- (id)etaLabel;
- (id)attributionPattern;
- (id)itemLabelForBundleId:(id)arg1 typeLabel:(id)arg2;
- (id)navigationItemLabelForTypeLabel:(id)arg1 destination:(id)arg2;
- (id)healthItemLabelForHealthType:(id)arg1;
- (id)formattedTimeInterval:(double)arg1;
- (id)makeDateComponentFormatter;
- (id)formattedLengthInMeters:(double)arg1;
- (id)makeLengthFormatter;
- (id)formattedMeasurement:(id)arg1 allowDecimals:(_Bool)arg2 scaleUnits:(_Bool)arg3;
- (id)makeMeasurementUnscaledFormatter;
- (id)makeMeasurementDecimalFormatter;
- (id)makeMeasurementWholeFormatter;
- (id)localizedAppNameForBundleIdentifier:(id)arg1;
- (void)_precacheDateFormats;
- (id)formattedStringsForLabels:(id)arg1;
- (id)formattedStringForLabel:(id)arg1;
- (void)_initializeLocalizedLableCache;
- (id)formattedEventTime:(id)arg1;
- (id)formattedBirthday:(id)arg1;
- (id)makeBirthdayFormatter;
- (id)makeChineseBirthdayFormatter;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)makeLongEventFormatter;
- (id)makeShortEventFormatter;
- (id)_dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;
- (_Bool)_isYearlessComponents:(id)arg1;
- (id)_dateFormatForTemplate:(id)arg1;
- (id)_locale;
- (id)initWithCriteria:(id)arg1;
- (id)init;

@end

