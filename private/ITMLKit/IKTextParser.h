//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSAttributedString, NSString;

@interface IKTextParser : NSObject <NSCopying>
{
    NSAttributedString *_attributedString;
}

+ (id)textWithDOMElement:(id)arg1 usingParseBlock:(CDUnknownBlockType)arg2;
@property(readonly, retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_stringFromNumberElement:(id)arg1 unformattedString:(id)arg2;
- (id)_stringFromDurationElement:(id)arg1 unformattedString:(id)arg2;
- (id)_stringFromDateElement:(id)arg1 unformattedString:(id)arg2;
- (id)_attributedStringFromDomElement:(id)arg1 usingParseBlock:(CDUnknownBlockType)arg2;
- (id)_attributedStringWithFontHandler:(CDUnknownBlockType)arg1 defaultFont:(id)arg2 style:(id)arg3 foregroundColor:(id)arg4 textAlignment:(long long)arg5;
- (id)_attributedStringWithFont:(id)arg1 style:(id)arg2 fontHandler:(CDUnknownBlockType)arg3;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 style:(id)arg4;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2;
- (id)attributedStringWithFont:(id)arg1 style:(id)arg2;
@property(readonly, retain, nonatomic) NSString *string;

@end

