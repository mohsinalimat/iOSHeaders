//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSSecureCoding-Protocol.h>

@class NSString, NSURL, UIColor, UIFont;

@interface _TVMonogramDescription : NSObject <NSSecureCoding>
{
    _Bool _hasPlaceholder;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_text;
    NSURL *_imageURL;
    UIFont *_font;
    double _upscaleAdjustment;
    double _cornerRadius;
    UIColor *_fillColor;
    double _borderWidth;
    UIColor *_borderColor;
    struct CGSize _size;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) _Bool hasPlaceholder; // @synthesize hasPlaceholder=_hasPlaceholder;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double upscaleAdjustment; // @synthesize upscaleAdjustment=_upscaleAdjustment;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4;

@end

