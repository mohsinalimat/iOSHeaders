//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileHandle, NSString;

__attribute__((visibility("hidden")))
@interface OITSUHTMLLog : NSObject
{
    NSString *_path;
    NSString *_title;
    NSString *_stylesheet;
    NSString *_script;
    NSFileHandle *_handle;
    _Bool _logStarted;
    unsigned long long _uniquifier;
    unsigned long long _tableRow;
}

@property(copy, nonatomic) NSString *script; // @synthesize script=_script;
@property(copy, nonatomic) NSString *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)openInBrowser;
- (void)logEnd;
- (void)logBegin;
- (void)clear;
- (void)close;
- (void)writeText:(id)arg1;
- (void)writeMarkup:(id)arg1;
- (void)_writeMarkupData:(id)arg1;
- (id)uniqueIdentifierWithPrefix:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

