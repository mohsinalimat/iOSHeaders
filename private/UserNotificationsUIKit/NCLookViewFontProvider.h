//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NCLookViewFontProvider : NSObject
{
    _Bool _isDefault;
}

+ (id)lookViewDefaultFontProvider;
+ (id)lookViewPreferredFontProvider;
- (id)nc_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2;
- (id)initForProvidingDefaultFonts:(_Bool)arg1;

@end

