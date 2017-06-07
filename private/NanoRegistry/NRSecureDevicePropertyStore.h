//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSCopying-Protocol.h>
#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NRSecureDevicePropertyStore : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_IDToProperty;
    NSMutableDictionary *_propertyToID;
    _Bool _dirty;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)classTypes;
+ (id)enclosedClassTypes;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)count;
- (id)allSecurePropertyIDs;
- (id)securePropertyForID:(id)arg1;
- (void)removeSecureProperty:(id)arg1;
- (id)storeSecureProperty:(id)arg1;
- (id)init;

@end

