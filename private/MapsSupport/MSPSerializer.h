//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/SYChangeSerializer-Protocol.h>

@class NSString;

@interface MSPSerializer : NSObject <SYChangeSerializer>
{
}

- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;
- (id)dataFromChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

