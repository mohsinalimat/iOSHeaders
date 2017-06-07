//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADTextListStyle : NSObject
{
    NSMutableArray *mParagraphProperties;
    NSString *mLanguage;
}

+ (id)defaultObject;
@property(retain, nonatomic) NSString *language; // @synthesize language=mLanguage;
- (id)description;
- (void)enumerateParagraphPropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeUnnecessaryOverrides;
- (void)overrideWithTextStyle:(id)arg1;
- (void)flatten;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setPropertiesForListLevel:(unsigned long long)arg1 properties:(id)arg2;
- (id)propertiesForListLevel:(unsigned long long)arg1;
- (id)defaultProperties;
- (void)dealloc;
- (id)initWithDefaults;
- (id)init;

@end

