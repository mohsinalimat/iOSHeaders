//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

@class NSString, NSURL, TSWPSelection;

__attribute__((visibility("hidden")))
@interface TSWPHyperlinkField : TSWPSmartField
{
    NSURL *_url;
}

+ (id)newURLFromURLReference:(id)arg1;
+ (id)urlReferenceFromURL:(id)arg1;
+ (id)defaultMailURL;
+ (id)defaultFileURL;
+ (id)defaultWebURL;
+ (id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2;
+ (_Bool)schemeIsValidForURLReference:(id)arg1;
+ (_Bool)schemeIsValidForURL:(id)arg1;
+ (int)schemeFromURL:(id)arg1;
+ (id)defaultFieldStyleIdentifier;
- (void)willBeRemovedFromDocumentRoot:(id)arg1 storage:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)p_performHyperlinkSelector:(SEL)arg1 onStorage:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct HyperlinkFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct HyperlinkFieldArchive *)arg1 archiver:(id)arg2;
- (id)fullPath;
- (id)filePath;
- (_Bool)hasDisplayText;
- (_Bool)isFileURL;
- (id)urlPrefix;
- (int)scheme;
- (void)setURLReference:(id)arg1;
- (id)urlReference;
@property(retain, nonatomic, setter=setURL:) NSURL *url;
- (_Bool)allowsEditing;
- (int)smartFieldKind;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 url:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isInGroupedShape;
@property(readonly, nonatomic) NSString *displayText;
@property(readonly, nonatomic) TSWPSelection *highlightSelection;

@end
