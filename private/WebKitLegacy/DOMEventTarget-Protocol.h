//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/NSCopying-Protocol.h>
#import <WebKitLegacy/NSObject-Protocol.h>

@class DOMEvent, NSString;
@protocol DOMEventListener;

@protocol DOMEventTarget <NSObject, NSCopying>
- (void)removeEventListener:(NSString *)arg1:(id <DOMEventListener>)arg2:(_Bool)arg3;
- (void)addEventListener:(NSString *)arg1:(id <DOMEventListener>)arg2:(_Bool)arg3;
- (_Bool)dispatchEvent:(DOMEvent *)arg1;
- (void)removeEventListener:(NSString *)arg1 listener:(id <DOMEventListener>)arg2 useCapture:(_Bool)arg3;
- (void)addEventListener:(NSString *)arg1 listener:(id <DOMEventListener>)arg2 useCapture:(_Bool)arg3;
@end

