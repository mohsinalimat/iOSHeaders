//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>

@class NSString, UIFontDescriptor;

@interface _UIFontCacheKey : NSObject <NSCopying>
{
    int _traits;
    NSString *_fontName;
    double _pointSize;
    NSString *_textStyle;
    NSString *_contentSizeCategory;
    UIFontDescriptor *_fontDescriptor;
}

+ (id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2;
+ (id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)systemFontCacheKeyWithTraits:(int)arg1 pointSize:(double)arg2;
+ (id)fontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(double)arg3;
@property(copy, nonatomic) UIFontDescriptor *fontDescriptor; // @synthesize fontDescriptor=_fontDescriptor;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
@property(nonatomic) int traits; // @synthesize traits=_traits;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

