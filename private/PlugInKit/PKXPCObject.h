//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlugInKit/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface PKXPCObject : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_object;
}

+ (_Bool)supportsSecureCoding;
+ (id)object:(id)arg1;
@property(retain) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end

