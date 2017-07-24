//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSInvalidatable-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable>
{
    unsigned int _queue_port;
    unsigned int _rawPort;
    int _owner;
    NSString *_trace;
}

+ (_Bool)supportsSecureCoding;
+ (void)_queue_destroyPort:(unsigned int)arg1;
+ (void)_queue_invalidatePortPointer:(unsigned int *)arg1 owner:(int)arg2;
+ (id)_descriptionForPort:(unsigned int)arg1 owner:(int)arg2 tag:(id)arg3 trace:(id)arg4;
+ (id)_rightDescription;
+ (void)_serialize:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *trace; // @synthesize trace=_trace;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_queue_invalidateForOwner:(int)arg1;
- (void)_queue_invalidate;
- (_Bool)_queue_isUsable;
- (unsigned int)_queue_port;
- (unsigned int)rawPort;
- (void)invalidate;
- (_Bool)isUsable;
- (unsigned int)port;
- (void)dealloc;
- (id)init;
- (id)_initWithPort:(unsigned int)arg1 owner:(int)arg2 trace:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

