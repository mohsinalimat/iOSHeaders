//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CompanionSync/NSObject-Protocol.h>

@class NSData;
@protocol SYChange, SYObject;

@protocol SYChangeSerializer <NSObject>
- (id <SYChange>)changeFromData:(NSData *)arg1 ofType:(long long)arg2;
- (NSData *)dataFromChange:(id <SYChange>)arg1;

@optional
- (id <SYChange>)decodeChangeData:(NSData *)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;
- (NSData *)encodeSYChangeForBackwardCompatibility:(id <SYChange>)arg1 protocolVersion:(long long)arg2;
- (id <SYObject>)SYObjectWithData:(NSData *)arg1;
- (NSData *)dataWithSYObject:(id <SYObject>)arg1;
@end

