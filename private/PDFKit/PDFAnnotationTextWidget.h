//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PDFKit/PDFAnnotation.h>

#import <PDFKit/NSCopying-Protocol.h>

@class PDFAnnotationTextWidgetPrivateVars;

@interface PDFAnnotationTextWidget : PDFAnnotation <NSCopying>
{
    PDFAnnotationTextWidgetPrivateVars *_private2;
}

- (void).cxx_destruct;
- (_Bool)accessibilityIsIgnored;
- (void)addMaxLenToDictionaryRef:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)setIsReadOnly:(_Bool)arg1;
- (_Bool)isReadOnly;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)secondaryInit;
- (void)commonInit;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (void)setDefaultStringValue:(id)arg1;
- (id)defaultStringValue;
- (void)setIsMultiline:(_Bool)arg1;
- (_Bool)isMultiline;
- (void)setFieldName:(id)arg1;
- (id)fieldName;
- (void)setMaximumLength:(unsigned long long)arg1;
- (unsigned long long)maximumLength;
- (void)setAlignment:(long long)arg1;
- (long long)alignment;
- (void)setFontColor:(id)arg1;
- (id)fontColor;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setRotation:(int)arg1;
- (int)rotation;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setAttributedStringValue:(id)arg1;
- (id)attributedStringValue;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

