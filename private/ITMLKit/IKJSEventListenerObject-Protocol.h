//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol IKJSEventListenerObject <JSExport>
- (void)removeEventListener:(NSString *)arg1:(JSValue *)arg2;
- (void)addEventListener:(NSString *)arg1:(JSValue *)arg2:(JSValue *)arg3;
@end

