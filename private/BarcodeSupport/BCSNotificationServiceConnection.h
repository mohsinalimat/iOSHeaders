//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BCSNotificationServiceConnection : NSObject
{
    NSXPCConnection *_serviceConnection;
}

@property(retain, nonatomic) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelNotifications;
- (void)notifyParsedBarcodeWithData:(id)arg1 withReply:(CDUnknownBlockType)arg2;

@end
