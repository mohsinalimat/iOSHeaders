//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKUtilities : NSObject
{
}

+ (_Bool)suffixInArray:(id)arg1 withArray:(id)arg2;
+ (_Bool)prefixInArray:(id)arg1 withArray:(id)arg2;
+ (_Bool)tokenInArray:(id)arg1 withArray:(id)arg2;
+ (id)removeEmoji:(id)arg1;
+ (_Bool)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)arg1;
+ (id)stripDiacritics:(id)arg1;
+ (id)normalizeForPersonalization:(id)arg1;
+ (id)stripEmojiSkinTones:(id)arg1;
+ (id)removeMultipleWhitespaces:(id)arg1;
+ (id)stripPunctuations:(id)arg1;

@end

