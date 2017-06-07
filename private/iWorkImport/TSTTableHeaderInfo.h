//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSTCellStyle, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTTableHeaderInfo : NSObject
{
    TSTCellStyle *mCellStyle;
    TSWPParagraphStyle *mTextStyle;
    double mSize;
    unsigned char mHidingState;
    unsigned short mNumberOfCells;
}

@property(nonatomic) unsigned short numberOfCells; // @synthesize numberOfCells=mNumberOfCells;
@property(nonatomic) unsigned char hidingState; // @synthesize hidingState=mHidingState;
@property(nonatomic) double size; // @synthesize size=mSize;
@property(retain, nonatomic) TSWPParagraphStyle *textStyle; // @synthesize textStyle=mTextStyle;
@property(retain, nonatomic) TSTCellStyle *cellStyle; // @synthesize cellStyle=mCellStyle;
- (id)description;
- (void)dealloc;

@end

