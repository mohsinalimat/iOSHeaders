//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCUIScreenshotProviding-Protocol.h>

@class NSString;

@interface XCUIScreen : NSObject <XCUIScreenshotProviding>
{
    _Bool _isMainScreen;
    int _displayID;
}

+ (id)screens;
+ (id)mainScreen;
@property(readonly) _Bool isMainScreen; // @synthesize isMainScreen=_isMainScreen;
@property(readonly) int displayID; // @synthesize displayID=_displayID;
- (id)_clippedScreenshotData:(id)arg1 quality:(long long)arg2 rect:(struct CGRect)arg3 scale:(double)arg4;
- (id)_screenshotDataForQuality:(long long)arg1 rect:(struct CGRect)arg2 error:(id *)arg3;
- (id)screenshotDataForQuality:(long long)arg1 rect:(struct CGRect)arg2 error:(id *)arg3;
- (id)screenshotDataForQuality:(long long)arg1 rect:(struct CGRect)arg2;
- (id)_modernScreenshotDataForQuality:(long long)arg1 rect:(struct CGRect)arg2 error:(id *)arg3;
- (id)screenshot;
- (id)_imageFromData:(id)arg1;
- (double)scale;
@property(readonly, copy) NSString *description;
- (id)initWithDisplayID:(int)arg1 isMainScreen:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

