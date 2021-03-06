//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCUIApplication;

@interface XCUISiriService : NSObject
{
    XCUIApplication *_siriApplication;
}

+ (id)siriService;
@property(retain) XCUIApplication *siriApplication; // @synthesize siriApplication=_siriApplication;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)_assertSiriEnabled;
- (void)injectVoiceRecognitionAudioInputPaths:(id)arg1;
- (void)injectAssistantRecognitionStrings:(id)arg1;
- (void)activateWithVoiceRecognitionText:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)init;

@end

