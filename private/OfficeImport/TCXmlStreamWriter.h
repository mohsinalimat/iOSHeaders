//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface TCXmlStreamWriter : NSObject
{
    struct _xmlTextWriter *mStreamAPI;
    unsigned int mCurrentDepth;
    _Bool mContentAdded;
    NSMutableSet *mAddedIds;
}

+ (_Bool)cleanUpXmlTextWriter:(struct _xmlTextWriter *)arg1;
+ (struct _xmlTextWriter *)createXmlTextWriterWithBuffer:(struct _xmlOutputBuffer *)arg1;
+ (struct _xmlTextWriter *)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(_Bool)arg3;
+ (struct _xmlTextWriter *)createXmlTextWriterWithContext:(id)arg1;
+ (_Bool)writeAnchorTargetToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2;
+ (_Bool)writeDtdToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5;
+ (_Bool)writeNamespaceToStream:(struct _xmlTextWriter *)arg1 prefix:(id)arg2 uri:(const char *)arg3;
+ (_Bool)writeAttributeToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
+ (_Bool)writePlainAttributeToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 content:(id)arg3;
+ (_Bool)writeStringToStream:(struct _xmlTextWriter *)arg1 text:(id)arg2;
+ (_Bool)endElementInStream:(struct _xmlTextWriter *)arg1;
+ (_Bool)startElementInStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
+ (_Bool)startPlainElementInStream:(struct _xmlTextWriter *)arg1 name:(id)arg2;
+ (void)resetElementIds;
- (_Bool)writeAnchorTarget:(id)arg1;
- (_Bool)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4;
- (_Bool)writeNamespace:(id)arg1 uri:(const char *)arg2;
- (_Bool)writeElementId:(id)arg1;
- (_Bool)writePlainAttribute:(id)arg1 doubleContent:(double)arg2;
- (_Bool)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (_Bool)writePlainAttribute:(id)arg1 boolContent:(_Bool)arg2;
- (_Bool)writePlainAttribute:(id)arg1 intContent:(long long)arg2;
- (_Bool)writePlainAttribute:(id)arg1 content:(id)arg2;
- (_Bool)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (_Bool)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
- (_Bool)writeAttribute:(id)arg1 boolContent:(_Bool)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (_Bool)writeAttribute:(id)arg1 intContent:(long long)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (_Bool)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (_Bool)endElementsToBase;
- (_Bool)writeString:(id)arg1;
- (_Bool)endElement;
- (_Bool)startPlainElement:(id)arg1;
- (_Bool)startElement:(id)arg1 prefix:(id)arg2 ns:(const char *)arg3;
- (_Bool)contentAdded;
- (struct _xmlTextWriter *)textWriter;
- (void)dealloc;
- (id)initWithTextWriter:(struct _xmlTextWriter *)arg1;

@end

