//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TCStringAdditions_XmlString)
+ (id)tc_stringWithXmlString:(const char *)arg1;
- (_Bool)tc_isEqualToXmlString:(const char *)arg1;
- (id)tc_componentsSeparatedByWhitespace;
- (id)tc_initFromXmlNode:(struct _xmlNode *)arg1 nsWithFallbackNs:(id)arg2 attributeName:(const char *)arg3;
- (id)tc_initFromXmlNode:(struct _xmlNode *)arg1 ns:(const char *)arg2 attributeName:(const char *)arg3;
- (id)tc_initWithContentOfXmlNode:(struct _xmlNode *)arg1;
- (id)tc_initWithValueOfXmlAttribute:(struct _xmlAttr *)arg1;
- (const char *)tc_xmlString;
- (id)tc_initWithXmlString:(const char *)arg1;
@end

