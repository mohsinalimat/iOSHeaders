//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding>
{
    long long primaryType;
    NSCountedSet *_additionalAttachments;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSCountedSet *additionalAttachments; // @synthesize additionalAttachments=_additionalAttachments;
@property(nonatomic) long long primaryType; // @synthesize primaryType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToAttachments:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;
- (unsigned long long)numberOfAdditionalAttachments;
- (void)addAttachmentOfType:(long long)arg1;

@end

