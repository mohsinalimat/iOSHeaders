//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class NSData, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDFieldMarker : WDRun
{
    WDCharacterProperties *mProperties;
    int mFieldPosition;
    int mMarkerType;
    unsigned char mFieldType;
    NSData *mData;
    unsigned int mZombieEmbed:1;
    unsigned int mResultDirty:1;
    unsigned int mResultEdited:1;
    unsigned int mLocked:1;
    unsigned int mPrivateResult:1;
    unsigned int mNested:1;
    unsigned int mHasSeparator:1;
}

- (id)description;
- (void)setData:(id)arg1;
- (id)data;
- (void)setHasSeparator:(_Bool)arg1;
- (_Bool)hasSeparator;
- (void)setNested:(_Bool)arg1;
- (_Bool)nested;
- (void)setPrivateResult:(_Bool)arg1;
- (_Bool)privateResult;
- (void)setLocked:(_Bool)arg1;
- (_Bool)locked;
- (void)setResultEdited:(_Bool)arg1;
- (_Bool)resultEdited;
- (void)setResultDirty:(_Bool)arg1;
- (_Bool)resultDirty;
- (void)setZombieEmbed:(_Bool)arg1;
- (_Bool)zombieEmbed;
- (int)runType;
- (void)setFieldType:(unsigned char)arg1;
- (unsigned char)fieldType;
- (void)setFieldMarkerType:(int)arg1;
- (int)fieldMarkerType;
- (void)setFieldPosition:(int)arg1;
- (int)fieldPosition;
- (void)dealloc;
- (id)initWithParagraph:(id)arg1;
- (void)clearProperties;
- (id)properties;

@end

