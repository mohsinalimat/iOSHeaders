//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/NSObject-Protocol.h>

@class CoreDAVTask, NSData, NSError, NSString;

@protocol CoreDAVResponseBodyParser <NSObject>
@property(readonly) NSError *parserError;
- (_Bool)processData:(NSData *)arg1 forTask:(CoreDAVTask *)arg2;

@optional
+ (_Bool)canHandleContentType:(NSString *)arg1;
@end
