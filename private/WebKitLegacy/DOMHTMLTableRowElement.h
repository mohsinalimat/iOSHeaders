//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLTableRowElement : DOMHTMLElement
{
}

- (void)deleteCell:(int)arg1;
- (id)insertCell:(int)arg1;
@property(copy) NSString *vAlign;
@property(copy) NSString *chOff;
@property(copy) NSString *ch;
@property(copy) NSString *bgColor;
@property(copy) NSString *align;
@property(readonly) DOMHTMLCollection *cells;
@property(readonly) int sectionRowIndex;
@property(readonly) int rowIndex;

@end

