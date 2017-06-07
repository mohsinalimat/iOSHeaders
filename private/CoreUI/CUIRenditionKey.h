//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUI/NSCoding-Protocol.h>
#import <CoreUI/NSCopying-Protocol.h>

@interface CUIRenditionKey : NSObject <NSCopying, NSCoding>
{
    struct _renditionkeytoken _stackKey[17];
    struct _renditionkeytoken *_key;
    unsigned short _highwaterKeyCount;
}

+ (id)renditionKeyWithKeyList:(const struct _renditionkeytoken *)arg1;
+ (id)renditionKey;
+ (void)initialize;
- (id)descriptionBasedOnKeyFormat:(const struct _renditionkeyfmt *)arg1;
- (id)nameOfAttributeName:(int)arg1;
- (id)description;
- (long long)themeDeploymentTarget;
- (void)setThemeDeploymentTarget:(long long)arg1;
- (long long)themeDisplayGamut;
- (void)setThemeDisplayGamut:(long long)arg1;
- (long long)themeIdentifier;
- (void)setThemeIdentifier:(long long)arg1;
- (long long)themeGraphicsClass;
- (void)setThemeGraphicsClass:(long long)arg1;
- (long long)themeMemoryClass;
- (void)setThemeMemoryClass:(long long)arg1;
- (long long)themeSizeClassVertical;
- (void)setThemeSizeClassVertical:(long long)arg1;
- (long long)themeSizeClassHorizontal;
- (void)setThemeSizeClassHorizontal:(long long)arg1;
- (long long)themeSubtype;
- (void)setThemeSubtype:(long long)arg1;
- (long long)themeIdiom;
- (void)setThemeIdiom:(long long)arg1;
- (long long)themeScale;
- (void)setThemeScale:(long long)arg1;
- (long long)themeLayer;
- (void)setThemeLayer:(long long)arg1;
- (long long)themePresentationState;
- (void)setThemePresentationState:(long long)arg1;
- (long long)themePreviousState;
- (void)setThemePreviousState:(long long)arg1;
- (long long)themeState;
- (void)setThemeState:(long long)arg1;
- (long long)themeDimension2;
- (void)setThemeDimension2:(long long)arg1;
- (long long)themeDimension1;
- (void)setThemeDimension1:(long long)arg1;
- (long long)themePreviousValue;
- (void)setThemePreviousValue:(long long)arg1;
- (long long)themeValue;
- (void)setThemeValue:(long long)arg1;
- (long long)themeDirection;
- (void)setThemeDirection:(long long)arg1;
- (long long)themeSize;
- (void)setThemeSize:(long long)arg1;
- (long long)themePart;
- (void)setThemePart:(long long)arg1;
- (long long)themeElement;
- (void)setThemeElement:(long long)arg1;
- (id)initWithThemeElement:(long long)arg1 themePart:(long long)arg2 themeSize:(long long)arg3 themeDirection:(long long)arg4 themeValue:(long long)arg5 themeDimension1:(long long)arg6 themeDimension2:(long long)arg7 themeState:(long long)arg8 themePresentationState:(long long)arg9 themeLayer:(long long)arg10 themeScale:(long long)arg11 themeIdentifier:(long long)arg12;
- (const struct _renditionkeytoken *)keyList;
- (void)removeValueForKeyTokenIdentifier:(long long)arg1;
- (void)copyValuesFromKeyList:(const struct _renditionkeytoken *)arg1;
- (void)setValuesFromKeyList:(const struct _renditionkeytoken *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyList:(const struct _renditionkeytoken *)arg1;
- (id)init;
- (void)_expandKeyIfNecessaryForCount:(long long)arg1;
- (unsigned short)_systemTokenCount;

@end

