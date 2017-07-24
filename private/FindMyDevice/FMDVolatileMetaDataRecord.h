//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMDDictionaryRepresentable-Protocol.h>
#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface FMDVolatileMetaDataRecord : NSObject <NSSecureCoding, FMDDictionaryRepresentable>
{
    NSDictionary *_dictionary;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithDictionary:(id)arg1;
- (void)appendMetaData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

