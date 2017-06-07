//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding>
{
    _Bool _fromRequest;
    unsigned short _messageID;
    NSString *_idsIdentifier;
    NSString *_deviceIdentifier;
    NSDictionary *_userInfo;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isFromRequest) _Bool fromRequest; // @synthesize fromRequest=_fromRequest;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

