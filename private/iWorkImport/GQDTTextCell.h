//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDTCell.h>

@class GQDWPLayoutStorage;

__attribute__((visibility("hidden")))
@interface GQDTTextCell : GQDTCell
{
    struct __CFString *mStringValue;
    GQDWPLayoutStorage *mLayoutStorage;
}

- (id)layoutStorage;
- (struct __CFString *)stringValue;
- (void)dealloc;
- (int)readContentForTCell:(struct _xmlTextReader *)arg1;
- (int)readContentForTextCell:(struct _xmlTextReader *)arg1;

@end

