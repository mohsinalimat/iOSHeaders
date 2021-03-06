//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString, NSURL, UIColor, UIImage;

@interface SKUIGiftTheme : NSObject <NSCopying>
{
    UIColor *_backgroundColor;
    UIColor *_bodyTextColor;
    UIImage *_headerImage;
    NSURL *_headerImageURL;
    UIColor *_primaryTextColor;
    long long _themeIdentifier;
    NSString *_themeName;
}

@property(copy, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;
@property(nonatomic) long long themeIdentifier; // @synthesize themeIdentifier=_themeIdentifier;
@property(copy, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(copy, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(copy, nonatomic) UIColor *bodyTextColor; // @synthesize bodyTextColor=_bodyTextColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithThemeDictionary:(id)arg1;

@end

