//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CLIntersiloServiceProtocol-Protocol.h>

@class NSMutableDictionary, NSString;

@protocol CLIntersiloServiceMockProtocol <CLIntersiloServiceProtocol>
- (NSMutableDictionary *)syncgetPayloadForKey:(NSString *)arg1;
- (NSMutableDictionary *)syncgetPayloadForSelector:(SEL)arg1;
- (void)removePayloadForKey:(NSString *)arg1;
- (void)removePayloadForSelector:(SEL)arg1;
- (void)setPayload:(NSMutableDictionary *)arg1 forKey:(NSString *)arg2;
- (void)setPayload:(NSMutableDictionary *)arg1 forSelector:(SEL)arg2;
@end

