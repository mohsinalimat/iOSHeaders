//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class NSMutableString, WDCharacterProperties;

@interface WDCharacterRun : WDRun
{
    WDCharacterProperties *mProperties;
    NSMutableString *mString;
    _Bool mBinaryWriterContentFlag;
}

- (id)description;
- (_Bool)isEmpty;
- (void)copyPropertiesFrom:(id)arg1;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)initWithParagraph:(id)arg1 string:(id)arg2;
- (id)initWithParagraph:(id)arg1;
- (void)clearString;
- (void)appendString:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)clearProperties;
- (void)setPropertiesForDocument;
- (id)properties;
- (int)runType;
- (void)dealloc;
- (void)setBinaryWriterContentFlag:(_Bool)arg1;
- (_Bool)binaryWriterContentFlag;

@end

