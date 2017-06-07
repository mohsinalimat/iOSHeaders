//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface HMDHAPMetadataCategory : NSObject <NSSecureCoding>
{
    NSNumber *_identifier;
    NSString *_uuidStr;
    NSString *_name;
    NSString *_catDescription;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *catDescription; // @synthesize catDescription=_catDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)generateDictionary;
- (id)initWithIdentifier:(id)arg1 uuid:(id)arg2 name:(id)arg3 description:(id)arg4;
- (id)init;

@end

