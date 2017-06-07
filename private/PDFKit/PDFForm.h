//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class PDFFormPrivateVars;

@interface PDFForm : NSObject <NSCopying>
{
    PDFFormPrivateVars *_private;
}

- (void).cxx_destruct;
- (id)description;
- (void)resetFormExcludingFields:(id)arg1;
- (void)resetFormForFields:(id)arg1;
- (void)removeFormFieldWithFieldName:(id)arg1;
- (void)addFormField:(id)arg1;
- (struct CGPDFString *)defaultDAStringRef;
- (id)defaultStringValueForFieldNamed:(id)arg1;
- (id)stringValueForFieldNamed:(id)arg1;
- (void)setStringValue:(id)arg1 forFieldNamed:(id)arg2;
- (id)fieldNames;
- (id)document;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDocument:(id)arg1;
- (void)setDocument:(id)arg1;
- (struct __CFDictionary *)createDictionaryRef;
- (void)addNeedsAppearanceToDictionaryRef:(struct __CFDictionary *)arg1;
- (id)fieldNamed:(id)arg1;
- (void)commonResetForm:(id)arg1 inclusive:(_Bool)arg2;

@end

