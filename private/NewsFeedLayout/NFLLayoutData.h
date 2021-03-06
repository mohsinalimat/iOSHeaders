//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NSCopying-Protocol.h>

@class NSString, UIColor;

@interface NFLLayoutData : NSObject <NSCopying>
{
    _Bool _shouldAdjustPublisherLogo;
    _Bool _layoutHasTooMuchWhiteSpaceInCurrentState;
    _Bool _showAccessoryText;
    _Bool _hasVideo;
    _Bool _titleTruncates;
    long long _cellType;
    double _minimumHeightBetweenLowestTextFrameAndBottomOfCell;
    long long _columnSpan;
    long long _rowSpan;
    long long _imagePosition;
    UIColor *_numberedCircleColor;
    long long _titleTextAlignment;
    NSString *_titleFontName;
    UIColor *_titleColor;
    double _titleFontSize;
    double _titleLineHeight;
    NSString *_excerptFontName;
    UIColor *_excerptColor;
    double _excerptFontSize;
    double _excerptLineHeight;
    long long _accessoryContentMode;
    NSString *_accessoryFontName;
    UIColor *_accessoryFontColor;
    UIColor *_accessoryIconColor;
    double _accessoryFontSize;
    double _accessoryLineHeight;
    UIColor *_publisherLogoColor;
    long long _publisherLogoContentMode;
    UIColor *_backgroundColor;
    double _whiteSpace;
    struct CGRect _imageFrame;
    struct CGRect _numberedCircleFrame;
    struct CGRect _titleFrame;
    struct CGRect _excerptFrame;
    struct CGRect _accessoryViewFrame;
    struct CGRect _sharrowFrame;
    struct CGRect _publisherLogoFrame;
    struct UIEdgeInsets _backgroundColorInsets;
}

@property(nonatomic) _Bool titleTruncates; // @synthesize titleTruncates=_titleTruncates;
@property(nonatomic) double whiteSpace; // @synthesize whiteSpace=_whiteSpace;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct UIEdgeInsets backgroundColorInsets; // @synthesize backgroundColorInsets=_backgroundColorInsets;
@property(nonatomic) long long publisherLogoContentMode; // @synthesize publisherLogoContentMode=_publisherLogoContentMode;
@property(retain, nonatomic) UIColor *publisherLogoColor; // @synthesize publisherLogoColor=_publisherLogoColor;
@property(nonatomic) struct CGRect publisherLogoFrame; // @synthesize publisherLogoFrame=_publisherLogoFrame;
@property(nonatomic) struct CGRect sharrowFrame; // @synthesize sharrowFrame=_sharrowFrame;
@property(nonatomic) double accessoryLineHeight; // @synthesize accessoryLineHeight=_accessoryLineHeight;
@property(nonatomic) double accessoryFontSize; // @synthesize accessoryFontSize=_accessoryFontSize;
@property(retain, nonatomic) UIColor *accessoryIconColor; // @synthesize accessoryIconColor=_accessoryIconColor;
@property(retain, nonatomic) UIColor *accessoryFontColor; // @synthesize accessoryFontColor=_accessoryFontColor;
@property(retain, nonatomic) NSString *accessoryFontName; // @synthesize accessoryFontName=_accessoryFontName;
@property(nonatomic) long long accessoryContentMode; // @synthesize accessoryContentMode=_accessoryContentMode;
@property(nonatomic) struct CGRect accessoryViewFrame; // @synthesize accessoryViewFrame=_accessoryViewFrame;
@property(nonatomic) double excerptLineHeight; // @synthesize excerptLineHeight=_excerptLineHeight;
@property(nonatomic) double excerptFontSize; // @synthesize excerptFontSize=_excerptFontSize;
@property(retain, nonatomic) UIColor *excerptColor; // @synthesize excerptColor=_excerptColor;
@property(retain, nonatomic) NSString *excerptFontName; // @synthesize excerptFontName=_excerptFontName;
@property(nonatomic) struct CGRect excerptFrame; // @synthesize excerptFrame=_excerptFrame;
@property(nonatomic) double titleLineHeight; // @synthesize titleLineHeight=_titleLineHeight;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property(nonatomic) long long titleTextAlignment; // @synthesize titleTextAlignment=_titleTextAlignment;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(retain, nonatomic) UIColor *numberedCircleColor; // @synthesize numberedCircleColor=_numberedCircleColor;
@property(nonatomic) struct CGRect numberedCircleFrame; // @synthesize numberedCircleFrame=_numberedCircleFrame;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(nonatomic) long long rowSpan; // @synthesize rowSpan=_rowSpan;
@property(nonatomic) long long columnSpan; // @synthesize columnSpan=_columnSpan;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic, getter=isShowingAccessoryText) _Bool showAccessoryText; // @synthesize showAccessoryText=_showAccessoryText;
@property(nonatomic) _Bool layoutHasTooMuchWhiteSpaceInCurrentState; // @synthesize layoutHasTooMuchWhiteSpaceInCurrentState=_layoutHasTooMuchWhiteSpaceInCurrentState;
@property(nonatomic) _Bool shouldAdjustPublisherLogo; // @synthesize shouldAdjustPublisherLogo=_shouldAdjustPublisherLogo;
@property(nonatomic) double minimumHeightBetweenLowestTextFrameAndBottomOfCell; // @synthesize minimumHeightBetweenLowestTextFrameAndBottomOfCell=_minimumHeightBetweenLowestTextFrameAndBottomOfCell;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

