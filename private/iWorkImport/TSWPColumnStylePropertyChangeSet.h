//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSSStylePropertyChangeSet.h>

@class TSSSpecBool, TSSSpecDouble, TSSSpecInteger, TSWPSpecColumns, TSWPSpecPadding;

__attribute__((visibility("hidden")))
@interface TSWPColumnStylePropertyChangeSet : TSSStylePropertyChangeSet
{
    TSWPSpecColumns *_columns;
    TSSSpecBool *_continuous;
    TSWPSpecPadding *_margins;
    TSSSpecDouble *_minHorizontalInset;
    TSWPSpecPadding *_padding;
    TSSSpecBool *_shrinkToFit;
    TSSSpecInteger *_verticalAlignment;
    TSSSpecBool *_verticalText;
    TSSSpecInteger *_writingDirection;
    _Bool _definedColumns;
    _Bool _definedContinuous;
    _Bool _definedMargins;
    _Bool _definedMinHorizontalInset;
    _Bool _definedPadding;
    _Bool _definedShrinkToFit;
    _Bool _definedVerticalAlignment;
    _Bool _definedVerticalText;
    _Bool _definedWritingDirection;
}

- (void)enumerateDefinedPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)setUnsetSpecForProperty:(int)arg1;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;

@end

