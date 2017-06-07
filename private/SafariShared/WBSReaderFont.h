//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSReaderFont : NSObject
{
    NSString *_familyName;
    NSString *_displayName;
    NSString *_localizedName;
    _Bool _hasCalculatedLocalizedName;
    _Bool _systemFont;
}

+ (id)fontWithFamilyName:(id)arg1 displayName:(id)arg2;
+ (id)systemFont;
@property(readonly, nonatomic, getter=isSystemFont) _Bool systemFont; // @synthesize systemFont=_systemFont;
@property(readonly, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (RetainPtr_887fe677)_fontDescriptorRefForFontFamilyName:(id)arg1 restrictToEnabled:(_Bool)arg2;
- (id)_localizedName;
- (id)fontOfSize:(double)arg1;
@property(readonly, nonatomic, getter=isInstalled) _Bool installed;
@property(readonly, nonatomic) NSString *displayName;
- (id)_initWithFamilyName:(id)arg1 displayName:(id)arg2 isSystemFont:(_Bool)arg3;

@end

