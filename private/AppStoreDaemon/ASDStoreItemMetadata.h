//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ASDStoreItemMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_propertiesDictionary;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *propertiesDictionary; // @synthesize propertiesDictionary=_propertiesDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long storeItemIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)initWithDictionary:(id)arg1;

@end

