//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;

@interface CRKResource : NSObject <NSSecureCoding>
{
    _Bool _zippedBundle;
    NSURL *_hostedURL;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isZippedBundle) _Bool zippedBundle; // @synthesize zippedBundle=_zippedBundle;
@property(retain, nonatomic) NSURL *hostedURL; // @synthesize hostedURL=_hostedURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)description;
- (_Bool)isEqualToHostedResource:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHostedURL:(id)arg1 isZippedBundle:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;

@end

