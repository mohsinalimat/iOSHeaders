//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreNFC/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol NFReaderSessionCallbacks;

@protocol NFCHardwareManagerInterface <NSObject>
- (oneway void)areFeaturesSupported:(unsigned long long)arg1 callback:(void (^)(_Bool, NSError *))arg2;
- (oneway void)queueReaderSession:(NSObject<NFReaderSessionCallbacks> *)arg1 showSharingUI:(unsigned long long)arg2 scanText:(NSString *)arg3 callback:(void (^)(NSObject<NFReaderSessionInterface> *, _Bool, NSError *))arg4;
@end

