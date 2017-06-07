//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class CLKTextProviderCache, NSMutableArray, NSMutableDictionary, UIColor;

@interface CLKTextProvider : NSObject <NSSecureCoding, NSCopying>
{
    CLKTextProviderCache *_defaultCache;
    NSMutableDictionary *_cachesByKey;
    NSMutableArray *_recentCacheKeys;
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    struct NSNumber *_secondTimerToken;
    struct NSNumber *_minuteTimerToken;
    struct NSNumber *_30fpsTimerToken;
    _Bool _finalized;
    _Bool _paused;
    _Bool _useMonospacedNumbersForTimeTravel;
    UIColor *_tintColor;
    long long _shrinkTextPreference;
    long long _timeTravelUpdateFrequency;
}

+ (id)textProviderWithJSONObjectRepresentation:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)textProviderWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)textProviderWithFormat:(id)arg1;
+ (id)localizableTextProviderWithStringsFileFormatKey:(id)arg1 textProviders:(id)arg2;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)arg1 shortTextKey:(id)arg2;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)arg1;
@property(nonatomic) long long timeTravelUpdateFrequency; // @synthesize timeTravelUpdateFrequency=_timeTravelUpdateFrequency;
@property(nonatomic) _Bool useMonospacedNumbersForTimeTravel; // @synthesize useMonospacedNumbersForTimeTravel=_useMonospacedNumbersForTimeTravel;
@property(nonatomic) long long shrinkTextPreference; // @synthesize shrinkTextPreference=_shrinkTextPreference;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_update;
- (void)_maybeStartOrStopUpdates;
- (void)_localeChanged;
- (void)_pruneCacheKeysIfNecessary;
- (id)_cacheForKey:(id)arg1;
- (id)_defaultCache;
- (id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (long long)_updateFrequency;
- (id)_description;
- (void)_validate;
- (void)_endSession;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 andRemovingDesignator:(_Bool)arg2 designatorExists:(_Bool *)arg3;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg1;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorExists:(_Bool *)arg2;
- (id)description;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)finalizedCopy;
- (void)finalize;
- (void)validate;
- (id)sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)attributedTextAndSize:(struct CGSize *)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 now:(id)arg4;
- (id)localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (id)attributedString;
- (void)dealloc;
- (void)_commonInit;
- (id)init;

@end

