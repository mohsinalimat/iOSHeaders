//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDPEscapeOption : NSObject
{
    NSString *_title;
    unsigned long long _style;
    CDUnknownBlockType _escapeAction;
    NSString *_progressTitle;
    NSString *_progressLabel;
}

+ (id)cancelOption;
@property(copy, nonatomic) NSString *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(copy, nonatomic) NSString *progressTitle; // @synthesize progressTitle=_progressTitle;
@property(copy, nonatomic) CDUnknownBlockType escapeAction; // @synthesize escapeAction=_escapeAction;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

