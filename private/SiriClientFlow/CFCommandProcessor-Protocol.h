//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriClientFlow/NSObject-Protocol.h>

@class SABaseCommand;

@protocol CFCommandProcessor <NSObject>
- (_Bool)isDeviceLockedWithPasscode;
- (void)handleOneWayCommand:(SABaseCommand *)arg1 replyWithMetrics:(void (^)(SABaseCommand *, CFScripterMetrics *))arg2;
- (void)handleCommand:(SABaseCommand *)arg1 replyWithMetrics:(void (^)(SABaseCommand *, CFScripterMetrics *))arg2;
- (void)handleOneWayCommand:(SABaseCommand *)arg1 reply:(void (^)(SABaseCommand *))arg2;
- (void)handleCommand:(SABaseCommand *)arg1 reply:(void (^)(SABaseCommand *))arg2;
- (void)handleOneWayCommand:(SABaseCommand *)arg1;
@end

