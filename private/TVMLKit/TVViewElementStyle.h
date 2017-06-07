//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class IKViewElementStyle, NSMutableDictionary, NSString, TVColor;

@interface TVViewElementStyle : NSObject <NSCopying>
{
    NSMutableDictionary *_cachedColorObjects;
    IKViewElementStyle *_style;
}

@property(readonly, nonatomic) __weak IKViewElementStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
@property(readonly, nonatomic) TVColor *tintColor;
@property(readonly, nonatomic) NSString *textStyle;
@property(readonly, nonatomic) unsigned long long maxTextLines;
@property(readonly, nonatomic) NSString *ratingStyle;
@property(readonly, nonatomic) long long position;
@property(readonly, nonatomic) double textMinimumScaleFactor;
@property(readonly, nonatomic) NSString *textHighlightStyle;
@property(readonly, nonatomic) double interitemSpacing;
@property(readonly, nonatomic) NSString *imageTreatmentName;
@property(readonly, nonatomic) TVColor *highlightColor;
@property(readonly, nonatomic) long long contentAlignment;
@property(readonly, nonatomic) long long alignment;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) long long textAlignment;
@property(readonly, nonatomic) struct UIEdgeInsets padding;
@property(readonly, nonatomic) double minWidth;
@property(readonly, nonatomic) double minHeight;
@property(readonly, nonatomic) double maxWidth;
@property(readonly, nonatomic) double maxHeight;
@property(readonly, nonatomic) struct UIEdgeInsets focusMargin;
@property(readonly, nonatomic) struct UIEdgeInsets margin;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) NSString *fontWeight;
@property(readonly, nonatomic) double fontSize;
@property(readonly, nonatomic) TVColor *color;
@property(readonly, nonatomic) TVColor *backgroundColor;
- (id)valueForStyleProperty:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyle:(id)arg1;

@end

