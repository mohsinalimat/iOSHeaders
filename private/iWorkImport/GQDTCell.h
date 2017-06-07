//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDTCell : NSObject
{
    unsigned short mColumnIndex;
    unsigned short mRowIndex;
    unsigned short mColumnSpan;
    unsigned short mRowSpan;
    GQDSStyle *mStyle;
}

- (void)incrementColumnSpan;
- (int)readBaseAttributesForBaseCell:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (int)readAttributesForBaseTabularCell:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (int)readAttributesForBaseCell:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (void)setCellStyle:(id)arg1;
- (id)cellStyle;
- (unsigned short)rowSpan;
- (unsigned short)columnSpan;
- (unsigned short)rowIndex;
- (unsigned short)columnIndex;
- (void)dealloc;

@end
