//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject <NSSecureCoding>
{
    int _key;
    unsigned int _clientPort;
    NSDictionary *_payload;
    CDStruct_4c969caf _auditToken;
}

+ (_Bool)supportsSecureCoding;
+ (id)archivedMessageFromData:(id)arg1;
@property(nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) unsigned int clientPort; // @synthesize clientPort=_clientPort;
@property(copy, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(nonatomic) int key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *senderBundleId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3;
- (id)initWithKey:(int)arg1 payload:(id)arg2;
- (id)initWithKey:(int)arg1;

@end

