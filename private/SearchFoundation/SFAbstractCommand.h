//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFAbstractCommand-Protocol.h>

@class NSData, NSDictionary, NSString, SFCommandValue;

@interface SFAbstractCommand : NSObject <SFAbstractCommand, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    int _type;
    SFCommandValue *_value;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFCommandValue *value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasType;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

