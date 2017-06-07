//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString;

@interface SUScriptDialog : SUScriptObject
{
    NSString *_body;
    id _buttons;
    NSNumber *_cancelButtonIndex;
    NSNumber *_destructiveButtonIndex;
    id _textFields;
    NSString *_title;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_nativeDialog;
- (void)_logSheetWarnings;
@property(retain) NSString *title;
@property(retain) id textFields;
@property(retain) NSNumber *destructiveButtonIndex;
@property(retain) NSNumber *cancelButtonIndex;
@property(retain) id buttons;
@property(retain) NSString *body;
- (id)_className;
- (void)showFromDOMElement:(id)arg1;
- (void)showSheetInPopOver:(id)arg1;
- (void)showSheet;
- (void)show;
- (void)dismiss;
- (void)dealloc;

@end

